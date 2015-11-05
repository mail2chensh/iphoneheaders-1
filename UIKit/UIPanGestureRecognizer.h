/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Availability2.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

#include_next <UIKit/UIPanGestureRecognizer.h>

@interface UIPanGestureRecognizer()
-(void)setFailsPastMaxTouches:(BOOL)touches;
-(BOOL)failsPastMaxTouches;
-(int)_lastTouchCount;
-(void)updateLocationForEvent:(id)event;
-(BOOL)_hasChildScrollViewForTouches:(id)touches;
// inherited: -(BOOL)canPreventGestureRecognizer:(id)recognizer;
// inherited: -(CGPoint)locationInView:(id)view;
// inherited: -(unsigned)numberOfTouches;
// inherited: -(CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;

#else

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class NSMutableSet;

@interface UIPanGestureRecognizer : UIGestureRecognizer {
	CGPoint _firstScreenLocation;
	CGPoint _lastScreenLocation;
	double _firstTouchTime;
	double _lastTouchTime;
	CGPoint _velocity;
	CGPoint _previousVelocity;
	CGAffineTransform _transform;
	NSMutableSet* _touches;
	int _lastTouchCount;
	unsigned _directionalLockEnabled : 1;
	unsigned _lockVertical : 1;
	unsigned _lockHorizontal : 1;
	unsigned _scrollViewGesture : 1;
	unsigned _hasChildScrollView : 1;
	unsigned _hasParentScrollView : 1;
}
@property(readonly, assign, nonatomic) CGPoint velocity;
@property(readonly, assign, nonatomic) CGSize offset;
-(id)_parentScrollView;
// inherited: -(BOOL)_shouldSaveGestureFromExclusion:(id)exclusion;
#endif
@property(readonly, assign, nonatomic) CGAffineTransform transform;
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
// inherited: -(instancetype)initWithTarget:(id)target action:(SEL)action;
// inherited: -(void)dealloc;
// inherited: -(void)reset;
-(void)setScrollViewGesture:(BOOL)gesture;
-(BOOL)isScrollViewGesture;
-(BOOL)_lockVertical;
-(BOOL)_lockHorizontal;
-(void)updateLocationForEvent:(id)event;
-(BOOL)_hasChildScrollViewForTouches:(id)touches;
-(int)_maximumTouches;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
// inherited: -(void)touchesMoved:(id)moved withEvent:(id)event;
// inherited: -(void)touchesEnded:(id)ended withEvent:(id)event;
// inherited: -(void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

