/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class MPItem, NSTimer, MPTransitionController;

@interface MPViewController : UIViewController {
	id _delegate;
	MPItem* _item;
	int _interfaceOrientation;
	MPViewController* _pushedViewController;
	MPTransitionController* _pushedTransitionController;
	NSTimer* _idleTimerDisablerTimer;
	unsigned _appearing : 1;
	unsigned _observesApplicationSuspendResumeEventsOnly : 1;
}
@property(retain, nonatomic) MPItem* item;
@property(assign, nonatomic) int orientation;
@property(assign, nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) BOOL idleTimerDisabled;
@property(assign, nonatomic) id delegate;
@property(assign, nonatomic) BOOL observesApplicationSuspendResumeEventsOnly;
-(instancetype)init;
-(void)dealloc;
-(void)beginIgnoringChangeTypes:(unsigned)types;
-(BOOL)canDisplayItem:(id)item withInterfaceOrientation:(int)interfaceOrientation;
-(id)copyOverlayViewForTransitionToItem:(id)item;
-(void)didChangeToInterfaceOrientation:(int)interfaceOrientation;
-(int)displayableInterfaceOrientationForInterfaceOrientation:(int)interfaceOrientation;
-(void)endIgnoringChangeTypes:(unsigned)types;
-(BOOL)isAppearing;
-(void)startTicking;
-(void)stopTicking;
-(void)applicationDidSuspendEventsOnly;
-(void)applicationDidResumeEventsOnly;
-(void)noteIgnoredChangeTypes:(unsigned)types;
-(void)restoreOverlayViewAfterTransition:(id)transition;
-(void)pushViewController:(id)controller withTransition:(id)transition;
-(id)popViewControllerAnimated:(BOOL)animated;
-(void)willChangeToInterfaceOrientation:(int)interfaceOrientation;
-(void)_disableIdleTimer:(id)timer;
-(void)setAppearing:(BOOL)appearing;
-(void)setOrientation:(int)orientation animate:(BOOL)animate;
-(void)clearWeakReferencesToObject:(id)object;
-(void)setView:(id)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(BOOL)_canReloadView;
-(void)_popTransitionEnded:(id)ended;
-(void)_pushTransitionEnded:(id)ended;
@end

