/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIGestureRecognizer.h>
#import "MediaPlayer-Structs.h"

@class NSTimer, UITouch;

@interface MPTapGestureRecognizer : UIGestureRecognizer {
@private
	unsigned _lastTapCount;
	CGPoint _tapLocation;
	UITouch* _trackingTouch;
	NSTimer* _tapHandleTimer;
}
@property(assign) unsigned tapCount;
-(instancetype)initWithTarget:(id)target action:(SEL)action;
-(void)_setTapTimerWithDuration:(double)duration;
-(void)_resetTapTimer;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)_delayedHandleTaps:(id)taps;
-(CGPoint)locationInView:(id)view;
-(void)reset;
-(void)dealloc;
@end

