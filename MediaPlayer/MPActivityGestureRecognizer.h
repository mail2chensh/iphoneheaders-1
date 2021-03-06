/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIGestureRecognizer.h>


@interface MPActivityGestureRecognizer : UIGestureRecognizer {
}
-(instancetype)initWithTarget:(id)target action:(SEL)action;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)_touchesTerminated:(id)terminated withEvent:(id)event;
-(void)_reportOngoingActivity;
-(void)_stopReportingOngoingActivity;
@end

