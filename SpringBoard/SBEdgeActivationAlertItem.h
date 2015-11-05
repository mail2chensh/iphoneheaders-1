/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"

@class NSString;

@interface SBEdgeActivationAlertItem : SBAlertItem {
	int _error;
	NSString* _reason;
	BOOL _suggestWiFi;
}
-(instancetype)initWithErrorCode:(int)errorCode reason:(id)reason suggestWiFi:(BOOL)fi;
// inherited: -(void)dealloc;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
// inherited: -(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
// inherited: -(BOOL)dismissOnLock;
@end

