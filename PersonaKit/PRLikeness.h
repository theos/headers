#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, PRLikenessScope) {
    PRLikenessScopeUnknown,
    PRLikenessScopePrivate,
    PRLikenessScopePublic
};

API_AVAILABLE(ios(10.0))
@interface PRLikeness : NSObject <NSSecureCoding>

@property (assign, setter=setCurrent:, nonatomic) BOOL isCurrent;

@property (nonatomic, readonly) BOOL isDirty;

@property (assign, nonatomic) NSUInteger version;
@property (assign, nonatomic) NSUInteger type;
@property (assign, nonatomic) PRLikenessScope scope;
@property (assign, nonatomic) NSInteger source;

@property (nonatomic, readonly) NSString *typeDescription;
@property (nonatomic, readonly) NSString *scopeDescription;

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) NSDate *insertionDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSDate *softExpirationDate;

@property (nonatomic, retain) NSData *staticRepresentationData;

@property (nonatomic, retain) NSString *ownerID;
@property (nonatomic, retain) NSSet *dirtyProperties;

@property (nonatomic, copy) NSData *recipe;

@property (assign, nonatomic) CGRect cropRectForTopLeftOrigin;
@property (nonatomic, readonly) CGRect cropRectForBottomLeftOrigin;

@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSString *externalIdentifier;

+ (instancetype)monogramWithScope:(PRLikenessScope)scope recipe:(NSData *)recipe staticRepresentation:(CGImageRef)representation;
+ (instancetype)monogramWithRecipe:(NSData *)recipe staticRepresentation:(CGImageRef)representation;

+ (instancetype)photoWithImage:(CGImageRef)image cropRect:(CGRect)cropRect;
+ (instancetype)photoWithImage:(CGImageRef)image cropRectForTopLeftOrigin:(CGRect)cropRect;
+ (instancetype)photoWithImage:(CGImageRef)image cropRectForBottomLeftOrigin:(CGRect)cropRect;

+ (instancetype)photoWithScope:(PRLikenessScope)scope image:(CGImageRef)image;
+ (instancetype)photoWithImage:(CGImageRef)image;

+ (instancetype)likenessWithPropagatedData:(NSData *)data;


+ (NSString *)descriptionForScope:(PRLikenessScope)scope;

- (void)clearDirtyProperties;

- (NSData *)dataForPropagation;

@end
