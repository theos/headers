#import <bsm/audit.h>
#import <Foundation/NSString.h>
#import <Foundation/NSCoder.h>

#if __has_include(<xpc/xpc.h>)
    #import <xpc/xpc.h>
#endif

@class NSXPCConnection, NSXPCListener, NSXPCInterface, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate;

@protocol NSXPCProxyCreating
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(void (^)(NSError *error))handler;
@optional
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *error))handler;
@end

typedef NS_OPTIONS(NSUInteger, NSXPCConnectionOptions) { NSXPCConnectionPrivileged = (1 << 12UL) };

// --- //

@interface NSXPCConnection : NSObject

@property (nullable, readonly, copy) NSString *serviceName;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

@property (nullable, retain) NSXPCInterface *exportedInterface;
@property (nullable, retain) id exportedObject;
@property (nullable, retain) NSXPCInterface *remoteObjectInterface;
@property (readonly, retain) id remoteObjectProxy;

@property (nullable, copy) void (^interruptionHandler)(void);
@property (nullable, copy) void (^invalidationHandler)(void);

@property (readonly) au_asid_t auditSessionIdentifier;
@property (readonly) pid_t processIdentifier;
@property (readonly) uid_t effectiveUserIdentifier;
@property (readonly) gid_t effectiveGroupIdentifier;

- (instancetype)initWithServiceName:(NSString *)name;
- (instancetype)initWithMachServiceName:(NSString *)name;
- (instancetype)initWithMachServiceName:(NSString *)name options:(NSXPCConnectionOptions)options;
- (instancetype)initWithListenerEndpoint:(NSXPCListenerEndpoint *)endpoint;

- (id)remoteObjectProxyWithErrorHandler:(void (^)(NSError *error))handler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(void (^)(NSError *error))handler API_AVAILABLE(ios(9.0));

- (void)resume;
- (void)suspend;
- (void)invalidate;

+ (nullable NSXPCConnection *)currentConnection;

- (void)scheduleSendBarrierBlock:(void (^)(void))block API_AVAILABLE(ios(13.0));

@end

// --- //

@interface NSXPCListener : NSObject

@property (nullable, weak) id <NSXPCListenerDelegate> delegate;
@property (readonly, retain) NSXPCListenerEndpoint *endpoint;

+ (NSXPCListener *)serviceListener;
+ (NSXPCListener *)anonymousListener;
- (instancetype)initWithServiceName:(NSString *)name;
- (instancetype)initWithMachServiceName:(NSString *)name;

- (void)resume;
- (void)suspend;
- (void)invalidate;

@end

// --- //

@protocol NSXPCListenerDelegate <NSObject>
@optional
- (BOOL)listener:(NSXPCListener *)listener shouldAcceptNewConnection:(NSXPCConnection *)newConnection;
@end

@interface NSXPCInterface : NSObject

@property (assign) Protocol *protocol;

+ (NSXPCInterface *)interfaceWithProtocol:(Protocol *)protocol;

- (NSSet<Class> *)classesForSelector:(SEL)selector argumentIndex:(NSUInteger)index ofReply:(BOOL)ofReply;
- (void)setClasses:(NSSet<Class> *)classes forSelector:(SEL)selector argumentIndex:(NSUInteger)index ofReply:(BOOL)ofReply;

- (nullable NSXPCInterface *)interfaceForSelector:(SEL)selector argumentIndex:(NSUInteger)index ofReply:(BOOL)ofReply;
- (void)setInterface:(NSXPCInterface *)interface forSelector:(SEL)selector argumentIndex:(NSUInteger)index ofReply:(BOOL)ofReply;

#if __has_include(<xpc/xpc.h>)
- (void)setXPCType:(xpc_type_t)type forSelector:(SEL)selector argumentIndex:(NSUInteger)index ofReply:(BOOL)ofReply API_AVAILABLE(ios(13.0));
- (nullable xpc_type_t)XPCTypeForSelector:(SEL)selector argumentIndex:(NSUInteger)index ofReply:(BOOL)ofReply API_AVAILABLE(ios(13.0));
#endif

@end

// -- //

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding>
@end

@interface NSXPCCoder : NSCoder

@property (nullable, retain) id <NSObject> userInfo;
@property (nullable, readonly, strong) NSXPCConnection *connection API_AVAILABLE(ios(10.0));

#if __has_include(<xpc/xpc.h>)
- (nullable xpc_object_t)decodeXPCObjectOfType:(xpc_type_t)type forKey:(NSString *)key API_AVAILABLE(ios(7.0));
- (void)encodeXPCObject:(xpc_object_t)xpcObject forKey:(NSString *)key;
#endif

@end
