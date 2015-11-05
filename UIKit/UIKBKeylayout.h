/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIKBShape.h"

@class UIKBKeyset, NSArray, NSMutableArray, NSString, UIKBKeylistReference;

@interface UIKBKeylayout : UIKBShape <NSCoding> {
	NSString* m_name;
	UIKBKeyset* m_keyset;
	NSMutableArray* m_refs;
}
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) UIKBKeyset* keyset;
@property(readonly, assign, nonatomic) NSArray* references;
+(UIKBKeylayout*)keylayout;
//-(instancetype)init;
//-(void)dealloc;
//-(nullable instancetype)initWithCoder:(NSCoder *)coder;
//-(void)encodeWithCoder:(id)coder;
//-(NSString*)description;
-(void)setReferenceWithName:(NSString*)name value:(id)value flags:(unsigned)flags;
-(UIKBKeylistReference*)referenceWithName:(NSString*)name;
-(void)setRef:(NSArray*)ref;
-(void)layoutInRect:(CGRect)rect;
@end
