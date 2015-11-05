/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import <Foundation/NSObject.h>

@class NSString, LibraryMessage;

@interface MessageLibrary : NSObject {
	NSString* _path;
}
// inherited: +(void)initialize;
-(instancetype)initWithPath:(NSString*)path;
// inherited: -(void)dealloc;
-(void)flagsChangedForMessages:(id)messages flags:(id)flags oldFlagsByMessage:(id)message;
-(void)commit;
-(id)setFlagsFromDictionary:(id)dictionary forMessages:(id)messages;
-(void)setFlags:(unsigned long)flags forMessage:(id)message;
-(void)postFlagsChangedForMessages:(id)messages flags:(id)flags oldFlagsByMessage:(id)message;
-(void)postOldFlags:(unsigned long)flags newFlags:(unsigned long)flags2 forMessage:(id)message;
-(void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted forMessage:(id)message;
-(void)setMessage:(id)message isPartial:(BOOL)partial;
-(id)addMessages:(id)messages withMailbox:(id)mailbox fetchBodies:(BOOL)bodies newMessagesByOldMessage:(id)message remoteIDs:(id)ids setFlags:(unsigned long long)flags clearFlags:(unsigned long long)flags7 messageFlagsForMessages:(id)messages8 copyFiles:(BOOL)files progressDelegate:(id)delegate addPOPUIDs:(BOOL)popuids dataSectionsByMessage:(id)message12;
-(id)addMessages:(id)messages withMailbox:(id)mailbox fetchBodies:(BOOL)bodies newMessagesByOldMessage:(id)message;
-(id)duplicateMessages:(id)messages newRemoteIDs:(id)ids forMailbox:(id)mailbox setFlags:(unsigned long long)flags clearFlags:(unsigned long long)flags5 messageFlagsForMessages:(id)messages6 createNewCacheFiles:(BOOL)files;
-(void)setThreadPriority:(int)priority;
-(int)threadPriority;
-(unsigned)updateSequenceNumber;
-(unsigned)accessSequenceNumber;
-(NSArray*)messagesForMailbox:(NSString*)mailbox olderThanNumberOfDays:(int)days;
-(id)serverSearchResultMessagesForMailbox:(id)mailbox;
-(id)dateOfOldestNonSearchResultMessageInMailbox:(id)mailbox;
-(NSArray*)messagesWithSummariesForMailbox:(NSString*)mailbox range:(NSRange)range;
-(NSArray*)messagesWithoutSummariesForMailbox:(NSString*)mailbox;
-(NSArray*)messagesWithSummariesForMailbox:(NSString*)mailbox fromRowID:(unsigned)rowID limit:(unsigned)limit;
-(NSArray*)messagesWithoutSummariesForMailbox:(NSString*)mailbox fromRowID:(unsigned)rowID limit:(unsigned)limit;
-(unsigned)unreadCountForMailbox:(NSString*)mailbox;
-(unsigned)deletedCountForMailbox:(NSString*)mailbox;
-(unsigned)nonDeletedCountForMailbox:(NSString*)mailbox;
-(unsigned)totalCountForMailbox:(NSString*)mailbox;
-(LibraryMessage*)oldestMessageInMailbox:(NSString*)mailbox;
-(id)messageWithRemoteID:(id)remoteID inRemoteMailbox:(id)remoteMailbox;
-(unsigned)maximumRemoteIDForMailbox:(id)mailbox;
-(unsigned)minimumRemoteIDForMailbox:(id)mailbox;
-(id)sequenceIdentifierForMailbox:(id)mailbox;
-(void)setSequenceIdentifier:(id)identifier forMailbox:(id)mailbox;
-(id)getDetailsForMessagesWithRemoteIDInRange:(NSRange)range fromMailbox:(id)mailbox;
-(id)getDetailsForAllMessagesFromMailbox:(id)mailbox;
-(LibraryMessage*)messageWithMessageID:(NSString*)messageID;
-(id)messagesWithMessageIDHeader:(id)messageIDHeader;
-(id)messageWithLibraryID:(unsigned)libraryID options:(unsigned)options;
-(id)messageWithLibraryID:(unsigned)libraryID;
-(BOOL)shouldCancel;
-(void)compactMessages:(id)messages permanently:(BOOL)permanently;
-(void)compactMessages:(id)messages;
-(void)removeAllMessagesFromMailbox:(id)mailbox removeMailbox:(BOOL)mailbox2 andNotify:(BOOL)notify;
-(void)compactMailbox:(id)mailbox;
-(BOOL)renameMailboxes:(id)mailboxes to:(id)to;
-(void)deleteMailboxes:(id)mailboxes;
-(id)messageWithMessageID:(id)messageID inMailbox:(id)mailbox;
-(id)dataPathForMessage:(id)message;
-(id)dataPathForMessage:(id)message part:(id)part;
-(id)dataConsumerForMessage:(id)message part:(id)part;
-(id)dataConsumerForMessage:(id)message part:(id)part incomplete:(BOOL)incomplete;
-(id)dataConsumerForMessage:(id)message isPartial:(BOOL)partial;
-(id)dataConsumerForMessage:(id)message;
-(void)setData:(id)data forMessage:(id)message isPartial:(BOOL)partial;
-(void)setSummary:(id)summary forMessage:(id)message;
-(void)setMeetingExternalID:(id)anId forMessage:(id)message;
-(id)loadMeetingExternalIDForMessage:(id)message;
-(void)setMeetingData:(id)data forMessage:(id)message;
-(id)loadMeetingDataForMessage:(id)message;
-(id)bodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available isComplete:(BOOL*)complete;
-(id)bodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available;
-(id)bodyDataForMessage:(id)message;
-(id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id*)available;
-(id)fullBodyDataForMessage:(id)message;
-(id)dataForMimePart:(id)mimePart isComplete:(BOOL*)complete;
-(BOOL)isMessageContentsLocallyAvailable:(id)available;
-(BOOL)hasCacheFileForMessage:(id)message directoryContents:(id)contents;
-(BOOL)hasCacheFileForMessage:(id)message part:(id)part directoryContents:(id)contents;
-(void)sendMessagesMatchingCriterion:(id)criterion to:(id)to options:(unsigned)options range:(NSRange)range;
-(void)sendMessagesMatchingCriterion:(id)criterion to:(id)to options:(unsigned)options;
-(id)messagesMatchingCriterion:(id)criterion options:(unsigned)options range:(NSRange)range;
-(id)messagesMatchingCriterion:(id)criterion options:(unsigned)options;
-(BOOL)libraryExists;
-(int)libraryStatus;
-(BOOL)isBusy;
-(void)setBusyTimeoutInterval:(double)interval;
-(void)cleanOldDatabases;
-(void)closeDatabaseConnections;
-(void)deletePOPUID:(id)popuid inMailbox:(id)mailbox;
-(id)UIDsToDeleteInMailbox:(id)mailbox;
-(id)deletedUIDsInMailbox:(id)mailbox;
-(id)allUIDsInMailbox:(id)mailbox;
-(id)hiddenPOPUIDsInMailbox:(id)mailbox;
-(BOOL)outstandingWritesExist;
-(void)lockDBForWriting;
-(id)filterContiguousMessages:(id)messages forCriterion:(id)criterion options:(unsigned)options;
-(id)accountForMessage:(id)message;
-(id)remoteStoreForMessage:(id)message;
-(id)mailboxUidForMessage:(id)message;
-(id)urlForMailboxID:(unsigned)mailboxID;
-(void)setFlagsForMessages:(id)messages;
-(void)setFlagsForMessages:(id)messages mask:(unsigned long)mask;
@end

