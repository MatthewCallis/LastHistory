// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LHTrack.h instead.

#import <CoreData/CoreData.h>


@class LHTrackTag;
@class LHAlbum;
@class LHArtist;
@class LHHistoryEntry;

@interface LHTrackID : NSManagedObjectID {}
@end

@interface _LHTrack : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (NS_NONATOMIC_IOSONLY, readonly, copy) LHTrackID *objectID;



@property (nonatomic, strong) NSString *name;

//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;



@property (nonatomic, strong) NSString *mbid;

//- (BOOL)validateMbid:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet* trackTags;
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSMutableSet *trackTagsSet;



@property (nonatomic, strong) LHAlbum* album;
//- (BOOL)validateAlbum:(id*)value_ error:(NSError**)error_;



@property (nonatomic, strong) LHArtist* artist;
//- (BOOL)validateArtist:(id*)value_ error:(NSError**)error_;



@property (nonatomic, strong) NSSet* historyEntries;
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSMutableSet *historyEntriesSet;




+ (NSArray*)fetchTracksWithNameAndArtist:(NSManagedObjectContext*)moc_ name:(NSString*)name_ artist:(LHArtist*)artist_ ;
+ (NSArray*)fetchTracksWithNameAndArtist:(NSManagedObjectContext*)moc_ name:(NSString*)name_ artist:(LHArtist*)artist_ error:(NSError**)error_;


@end

@interface _LHTrack (CoreDataGeneratedAccessors)

- (void)addTrackTags:(NSSet*)value_;
- (void)removeTrackTags:(NSSet*)value_;
- (void)addTrackTagsObject:(LHTrackTag*)value_;
- (void)removeTrackTagsObject:(LHTrackTag*)value_;

- (void)addHistoryEntries:(NSSet*)value_;
- (void)removeHistoryEntries:(NSSet*)value_;
- (void)addHistoryEntriesObject:(LHHistoryEntry*)value_;
- (void)removeHistoryEntriesObject:(LHHistoryEntry*)value_;

@end
