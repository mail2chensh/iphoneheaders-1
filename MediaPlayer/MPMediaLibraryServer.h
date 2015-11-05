/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>
#import "MPMediaLibraryServer.h"

@class MPMediaLibraryRemoteServer;

@interface MPMediaLibraryServer : NSObject {
@private
	MPMediaLibraryRemoteServer* _internal;
}
+(void)startMediaLibraryServer;
+(id)sharedInstance;
-(instancetype)init;
-(void)dealloc;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
-(BOOL)isFilteringDisabled;
@end

@interface MPMediaLibraryServer (MPMediaLibraryMigServer)
-(void)_runMigServer;
@end

