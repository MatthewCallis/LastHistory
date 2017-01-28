// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LHArtist.h instead.

#import <CoreData/CoreData.h>


@class LHAlbum;
@class LHTrack;

@interface LHArtistID : NSManagedObjectID {}
@end

@interface _LHArtist : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (NS_NONATOMIC_IOSONLY, readonly, copy) LHArtistID *objectID;



@property (nonatomic, strong) NSString *name;

//- (BOOL)validateName:(id*)value_ error:(NSError**)error_;



@property (nonatomic, strong) NSString *mbid;

//- (BOOL)validateMbid:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) NSSet* albums;
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSMutableSet *albumsSet;



@property (nonatomic, strong) NSSet* tracks;
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSMutableSet *tracksSet;




+ (NSArray*)fetchArtistsWithName:(NSManagedObjectContext*)moc_ name:(NSString*)name_ ;
+ (NSArray*)fetchArtistsWithName:(NSManagedObjectContext*)moc_ name:(NSString*)name_ error:(NSError**)error_;


@end

@interface _LHArtist (CoreDataGeneratedAccessors)

- (void)addAlbums:(NSSet*)value_;
- (void)removeAlbums:(NSSet*)value_;
- (void)addAlbumsObject:(LHAlbum*)value_;
- (void)removeAlbumsObject:(LHAlbum*)value_;

- (void)addTracks:(NSSet*)value_;
- (void)removeTracks:(NSSet*)value_;
- (void)addTracksObject:(LHTrack*)value_;
- (void)removeTracksObject:(LHTrack*)value_;

@end
