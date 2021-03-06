/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <Foundation/NSObject.h>
#import "DataAccess-Structs.h"

@class NSError, CalDAVOperationQueue;

@interface CalDAVQueueableOperation : NSObject {
	CalDAVOperationQueue* _queue;
	NSError* _error;
	BOOL _running;
	int _retryCounter;
	BOOL _pendingRetry;
	BOOL _finished;
}
-(instancetype)initWithQueue:(id)queue;
// inherited: -(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(void)beginQueueableOperation;
-(void)performOperation;
-(id)queue;
-(id)error;
-(void)logError:(id)error;
-(id)rebuildError:(id)error;
-(BOOL)isTransientError:(id)error;
-(void)retryTimerFired:(id)fired;
-(BOOL)scheduleRetry:(int)retry;
-(void)scheduleRetryMainThread:(id)thread;
-(void)setError:(id)error;
-(void)enqueue;
-(void)cancel;
-(void)finishOperation;
-(BOOL)isRunning;
-(id)readableDescription;
-(BOOL)isPendingRetry;
-(int)retryCounter;
-(int)maxRetries;
@end

