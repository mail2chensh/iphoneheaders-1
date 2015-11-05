/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "ChatKit-Structs.h"


@protocol CKEntryField
-(void)setEntryFieldDelegate:(id)delegate;
-(id)entryFieldDelegate;
-(void)clearMessage;
-(BOOL)hasContent;
-(id)attachments;
-(void)setMessageComposition:(id)composition;
-(id)messageComposition;
-(void)setMessageParts:(id)parts;
-(id)messageParts;
-(void)insertMessagePart:(id)part;
-(CGPoint)contentOffset;
-(UIEdgeInsets)contentInset;
-(void)moveCursorToEnd;
-(void)setCursorPosition:(int)position;
-(void)reflowContent;
-(int)cursorPosition;
-(int)lastCursorPosition;
-(void)saveCursorPosition;
-(void)restoreCursorPosition;
-(void)makeActive;
-(BOOL)isActive;
-(void)disableEditing;
-(void)setIgnoreAnimations:(BOOL)animations;
-(id)subject;
-(void)setSubject:(id)subject;
-(void)setContentHidden:(BOOL)hidden subjectHidden:(BOOL)hidden2;
-(void)loadSubviews;
@end
