/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Predicate.h"


__attribute__((visibility("hidden")))
@interface ML3UnaryPredicate : ML3Predicate {
@private
	ML3Predicate* _predicate;
}
@property(retain, nonatomic) ML3Predicate* predicate;
+(id)predicateWithPredicate:(id)predicate;
-(instancetype)initWithPredicate:(id)predicate;
-(void)dealloc;
-(id)SQLJoinClausesForClass:(Class)aClass;
-(void)bindToSqlite3Statement:(sqlite3_stmt*)sqlite3Statement bindingIndex:(inout int*)index;
@end

