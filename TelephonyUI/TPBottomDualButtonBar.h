/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomButtonBar.h"
#import <Availability2.h>

@class TPPushButton;

@interface TPBottomDualButtonBar : TPBottomButtonBar {
	TPPushButton* _button2;
	unsigned _drawSeparator : 1;
}
-(instancetype)initForIncomingCallWithFrame:(CGRect)frame;
-(instancetype)initForCallFailureWithFrame:(CGRect)frame;
-(instancetype)initForEmergencyCallWithFrame:(CGRect)frame;
-(instancetype)initForVideoChatWithFrame:(CGRect)frame __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
-(float)_buttonWidth;
-(void)_updateButtonSettings:(id)settings;
-(void)setButton2:(id)a2;
-(id)button2;
-(void)setDrawsSeparateWells:(BOOL)wells;
@end

