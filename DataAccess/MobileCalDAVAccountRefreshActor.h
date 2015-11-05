/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "MobileCalDAVAccountRefreshActor.h"
#import "DataAccess-Structs.h"
#import <ActorKit/AKActor.h>

@class CalDAVRefreshContext, CalDAVOperationQueue, NSTimer, NSThread;
@protocol CalDAVRefreshActorCallback;

@protocol MobileCalDAVAccountRefreshActor
@property(readonly, assign, nonatomic) CalDAVRefreshContext* context;
-(void)fenceMethod;
-(oneway void)refresh;
-(oneway void)refreshCalendarsOnly;
@end

@interface MobileCalDAVAccountRefreshActor : AKActor <MobileCalDAVAccountRefreshActor> {
	id<CalDAVRefreshActorCallback> _callbackTarget;
	NSThread* _callbackThread;
	CalDAVOperationQueue* _queue;
	BOOL _wasCancelledEarly;
	CalDAVRefreshContext* _context;
	NSTimer* _cancellationTimer;
}
// in a protocol: @property(readonly, assign, nonatomic) CalDAVRefreshContext* context;
+(void)setCalDAVRefreshBackgroundTasksShouldCancel:(BOOL)cancel;
+(BOOL)shouldCancel;
-(void)_blowAwayTimer;
-(void)setBackgroundThreadDispatchQueue;
-(instancetype)initWithQueue:(id)queue context:(id)context callbackTarget:(id)target callbackThread:(id)thread;
// inherited: -(void)dealloc;
// in a protocol: -(void)fenceMethod;
-(void)_sendResultToCallbackActor:(id)callbackActor;
-(void)_checkCancelled;
-(void)_startCancellationTimer;
// in a protocol: -(oneway void)refreshCalendarsOnly;
-(BOOL)_handleBadPasswordResponseWithAccount:(id)account;
// in a protocol: -(oneway void)refresh;
-(BOOL)refreshPropertiesForAccount:(id)account shouldSave:(BOOL*)save error:(id*)error;
-(id)refreshCalendarsForAccount:(id)account shouldSave:(BOOL*)save error:(id*)error;
-(void)_restoreEventStatusOnEvent:(id)event inCalendar:(void*)calendar database:(CalDatabase*)database;
-(void)_restoreSelfAsAttendeeOnEvent:(id)event withOrganizer:(CalOrganizer*)organizer;
-(void)_setDtstampOnEvent:(void*)event;
-(BOOL)_refreshCalendar:(id)calendar fromAccount:(id)account newCTag:(id)tag shouldSave:(BOOL*)save error:(id*)error;
-(BOOL)refreshCalendarCollectionsForAccount:(id)account pathsToCTags:(id)ctags shouldSave:(BOOL*)save error:(id*)error;
@end
