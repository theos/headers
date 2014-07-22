//
//  libobjcipc
//  Connection.h
//
//  Created by Alan Yip on 6 Feb 2014
//  Copyright 2014 Alan Yip. All rights reserved.
//

#import "header.h"

@interface OBJCIPCConnection : NSObject<NSStreamDelegate> {
	
	BOOL _closedConnection;
	BOOL _handshakeFinished;
	NSString *_appIdentifier;
	NSUInteger _nextMessageIdentifier;
	
	// auto disconnect
	NSUInteger _autoDisconnectTimerTicks;
	NSTimer *_autoDisconnectTimer;
	
	// socket streams
	NSInputStream *_inputStream;
	NSOutputStream *_outputStream;
	
	// header
	BOOL _receivedHeader;
	int _receivedHeaderLength;
	BOOL _isHandshake;
	BOOL _isReply;
	NSString *_messageIdentifier;
	NSString *_messageName;
	NSMutableData *_receivedHeaderData;
	
	// content
	int _contentLength;
	int _receivedContentLength;
	NSMutableData *_receivedContentData;
	
	// temporary storage of outgoing message data
	NSMutableData *_outgoingMessageData;
	
	// pending incoming messages (received earlier than handshake)
	NSMutableArray *_pendingIncomingMessages;
	
	// incoming message handler
	NSMutableDictionary *_incomingMessageHandlers;
	NSMutableDictionary *_replyHandlers;
}

@property(nonatomic, copy) NSString *appIdentifier;
@property(nonatomic, readonly) NSMutableDictionary *incomingMessageHandlers;
@property(nonatomic, retain) NSMutableDictionary *replyHandlers;

- (instancetype)initWithInputStream:(NSInputStream *)inputStream outputStream:(NSOutputStream *)outputStream;

- (void)sendMessage:(OBJCIPCMessage *)message;
- (void)closeConnection;
- (void)setIncomingMessageHandler:(OBJCIPCIncomingMessageHandler)handler forMessageName:(NSString *)messageName;
- (OBJCIPCIncomingMessageHandler)incomingMessageHandlerForMessageName:(NSString *)messageName;
- (NSString *)nextMessageIdentifier;

// handshake with app and SpringBoard
- (void)_handshakeWithSpringBoard;
- (void)_handshakeWithSpringBoardComplete:(NSDictionary *)dict;
- (NSDictionary *)_handshakeWithApp:(NSDictionary *)dict;

// message data transmission
- (void)_readIncomingMessageData;
- (void)_writeOutgoingMessageData;
- (void)_dispatchReceivedMessage;
- (void)_dispatchIncomingMessage:(NSDictionary *)dictionary;
- (void)_resetReceivingMessageState;

// auto disconnect
- (void)_createAutoDisconnectTimer;
- (void)_resetAutoDisconnectTimer;
- (void)_triggerAutoDisconnect;
- (void)_invalidateAutoDisconnectTimer;

@end