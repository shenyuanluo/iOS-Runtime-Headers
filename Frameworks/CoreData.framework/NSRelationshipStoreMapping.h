/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString, NSArray;



@interface NSRelationshipStoreMapping : NSPropertyStoreMapping 
{
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    NSUInteger _joinSemantic;
}


- (id)destinationEntityExternalName;
- (void)setDestinationEntityExternalName:(id)arg1;
- (id)foreignKeys;
- (void)setForeignKeys:(id)arg1;
- (void)setJoins:(id)arg1;
- (NSUInteger)joinSemantic;
- (void)setJoinSemantic:(NSUInteger)arg1;
- (id)columnDefinitions;
- (id)constraintDefinitions;
- (id)relationship;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)joins;

@end