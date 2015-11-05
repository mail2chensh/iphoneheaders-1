/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASTask.h"

@class ASPolicy, NSString;

@interface ASProvisionTask : ASTask {
	int _type;
	ASPolicy* _policy;
	NSString* _key;
}
-(id)_initWithType:(int)type policy:(id)policy key:(id)key;
-(instancetype)initWithOriginalKeyForPolicyRequest:(id)policyRequest;
-(instancetype)initWithPolicyAcknowledgement:(id)policyAcknowledgement withKey:(id)key;
-(instancetype)initWithRemoteWipeAcknowledgement:(id)remoteWipeAcknowledgement withKey:(id)key;
// inherited: -(void)dealloc;
-(int)type;
-(id)_policyID;
// inherited: -(int)commandCode;
-(id)_provisioningType;
// inherited: -(id)requestBody;
// inherited: -(int)taskStatusForExchangeStatus:(int)exchangeStatus;
// inherited: -(BOOL)processContext:(id)context;
// inherited: -(void)finishWithError:(id)error;
@end

