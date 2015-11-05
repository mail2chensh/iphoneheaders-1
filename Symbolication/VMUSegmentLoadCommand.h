/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString, NSArray, VMUSection;

@interface VMUSegmentLoadCommand : VMULoadCommand {
	NSString* _name;
	unsigned long long _vmaddr;
	unsigned long long _vmsize;
	unsigned long long _fileoff;
	unsigned long long _filesize;
	int _maxprot;
	int _initprot;
	unsigned _flags;
	NSArray* _sections;
}
// inherited: -(BOOL)isSegment;
-(NSString*)name;
-(unsigned long long)vmaddr;
-(unsigned long long)vmsize;
-(unsigned long long)fileoff;
-(unsigned long long)filesize;
-(int)maxprot;
-(int)initprot;
-(unsigned)flags;
-(NSArray*)sections;	// NSArray of VMUSection's
-(VMUSection*)sectionNamed:(NSString*)sectName;
// inherited: -(id)description;
// inherited: -(void)dealloc;
@end
