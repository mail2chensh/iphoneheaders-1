/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MFDataConsumer.h"
#import <Foundation/NSObject.h>

@class NSMutableData;

@interface MFCollectingDataConsumer : NSObject <MFDataConsumer> {
	NSMutableData* _data;
}
// inherited: -(instancetype)init;
// in a protocol: -(void)appendData:(id)data;
// in a protocol: -(void)done;
-(id)data;
// inherited: -(void)dealloc;
@end

