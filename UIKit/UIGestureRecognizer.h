/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSMutableSet, NSMutableArray, UIView, UIEvent, NSSet, UIGestureRecognizer, UITouch;

@protocol UIGestureRecognizerDelegate <NSObject>
@optional
-(BOOL)gestureRecognizerShouldBegin:(UIGestureRecognizer*)gestureRecognizer;
-(BOOL)gestureRecognizer:(UIGestureRecognizer*)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer*)otherGestureRecognizer;
-(BOOL)gestureRecognizer:(UIGestureRecognizer*)gestureRecognizer shouldReceiveTouch:(UITouch*)touch;
@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2

typedef enum {
	UIGestureRecognizerStatePossible,
	UIGestureRecognizerStateRecognized,
	UIGestureRecognizerStateChanged,
	UIGestureRecognizerStateFinished,
	UIGestureRecognizerStateFailed
} UIGestureRecognizerState;

@interface UIGestureRecognizer : NSObject {
	id _target;
	SEL _action;
	UIView* _view;
	NSMutableArray* _delayedTouches;
	UIEvent* _updateEvent;
	NSMutableSet* _obstacles;
	NSMutableSet* _vultures;
	NSMutableSet* _friends;
	int _state;
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} _gestureFlags;
}
@property(assign, nonatomic) id target;
@property(assign, nonatomic) SEL action;
@property(assign, nonatomic) UIGestureRecognizerState state;
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;
@property(assign, nonatomic, getter=isExclusive) BOOL exclusive;
@property(assign, nonatomic) BOOL delaysTouchesEnded;
@property(assign, nonatomic) BOOL delaysTouchesBegan;
@property(assign, nonatomic) BOOL cancelsTouchesInView;
@property(readonly, assign, nonatomic) UIView* view;
+(void)_setDelaysDirtyReset:(BOOL)reset;
+(BOOL)_delaysDirtyReset;
-(instancetype)initWithTarget:(id)target action:(SEL)action;
// -(instancetype)init;
// -(void)dealloc;
-(void)reset;
-(void)touchesBegan:(NSSet*)touches withEvent:(UIEvent*)event;
-(void)touchesMoved:(NSSet*)touches withEvent:(UIEvent*)event;
-(void)touchesEnded:(NSSet*)touches withEvent:(UIEvent*)event;
-(void)touchesCancelled:(NSSet*)touches withEvent:(UIEvent*)event;
-(void)ignoreTouch:(id)touch forEvent:(id)event;
-(id)delayedTouchForTouch:(id)touch;
-(BOOL)_shouldSaveGestureFromExclusion:(id)exclusion;
-(void)_resetIfDirty;
-(void)addFriendGesture:(id)gesture;
-(BOOL)isFriendWithGesture:(id)gesture;
-(void)_addBlockedGesture:(id)gesture;
-(void)_removeBlockedGesture:(id)gesture;
-(BOOL)_isBlockingOtherGestures;
-(void)_blockingGestureDidComplete:(id)_blockingGesture;
-(id)_blockingGestures;
-(BOOL)_refusesMoreTouches;
-(id)_desriptionForDependencies:(id)dependencies;
-(id)_descriptionIncludingDependencies:(BOOL)dependencies;

#else

#include_next <UIKit/UIGestureRecognizer.h>

@interface UIGestureRecognizer()
-(id)_delayedTouchForTouch:(id)touch;
-(void)_enqueueDelayedTouchToSend:(id)send;
-(void)_queueForResetIfFinished;
-(BOOL)_delegateShouldReceiveTouch:(id)_delegate;
-(void)_addFriendGesture:(id)gesture;
-(BOOL)_isFriendWithGesture:(id)gesture;
-(BOOL)_delegateCanPreventGestureRecognizer:(id)recognizer;
-(BOOL)_isDirty;
-(void)_addUnfailedGestureForReset:(id)reset;
-(void)_relatedGestureFinished:(id)finished withEvent:(id)event;
-(void)_relatedGestureReleased:(id)released;
-(void)_relatedGestureRecognizer:(id)recognizer wasEnabled:(BOOL)enabled;
-(void)_addFailureDependent:(id)dependent;
-(void)_removeFailureDependent:(id)dependent;
#endif
-(void)_clearUpdateTimer;
-(void)setView:(UIView*)view;
-(void)_delayTouch:(id)touch forEvent:(id)event;
-(BOOL)_isDelayingTouch:(id)touch;
-(BOOL)_canFinishDelayedTouch:(id)touch;
-(id)_activeTouchesForEvent:(id)event;
-(CGPoint)centroidOfTouches:(id)touches;
-(void)_touchWasCancelled:(id)cancelled;
-(void)_clearDelayedTouches;
-(void)_enqueueDelayedTouchesToSend;
-(void)_updateGestureWithEvent:(id)event;
-(void)_delayedUpdateGesture;
-(void)_updateGestureStateWithEvent:(id)event afterDelay:(BOOL)delay;
-(BOOL)_isRecognized;
-(int)_depthFirstViewCompare:(id)compare;
-(BOOL)_affectedByGesture:(id)gesture;
-(BOOL)_isExcludedFromGestures:(id)gestures;
-(void)_setDirty;
-(void)_resetIfFinished;
-(void)requireOtherGestureToFail:(id)fail;
-(BOOL)_isWaitingForGesturesToFail;
-(id)description;
-(void)_invalidate;
@end

