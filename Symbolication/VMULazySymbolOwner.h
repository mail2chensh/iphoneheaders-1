/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSArray;

@interface VMULazySymbolOwner : NSObject {
	NSString* _name;
	NSDictionary* _signature;
	NSArray* _regions;
	unsigned _flags;
}
+(id)lazySymbolOwnerWithName:(id)name signature:(id)signature regions:(id)regions flags:(unsigned)flags;
-(instancetype)initWithName:(id)name signature:(id)signature regions:(id)regions flags:(unsigned)flags;
-(id)regions;
-(BOOL)isLazy;
-(BOOL)isProtected;
-(id)name;
-(id)signature;
-(id)path;
-(id)architecture;
-(BOOL)containsAddress:(unsigned long long)address;
-(BOOL)overlapsAddressRange:(VMURange)range;
-(BOOL)hasRegionsForName:(id)name;
-(unsigned)flags;
-(void)slideToSegmentAddresses:(id)segmentAddresses;
-(BOOL)validate;
// inherited: -(id)description;
// inherited: -(void)dealloc;
@end
