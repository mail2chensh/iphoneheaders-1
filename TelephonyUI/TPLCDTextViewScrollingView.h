/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIKit/UIView.h>

@class TPLCDTextView;

@interface TPLCDTextViewScrollingView : UIView {
	TPLCDTextView* _owner;
}
-(instancetype)initWithFrame:(CGRect)frame owner:(id)owner;
-(void)setOwner:(id)owner;
-(void)drawRect:(CGRect)rect;
@end

