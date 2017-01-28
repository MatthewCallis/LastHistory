// DO NOT EDIT. This file is machine-generated and constantly overwritten.
// Make changes to LHTrackTag.h instead.

#import <CoreData/CoreData.h>


@class LHTrack;
@class LHTag;

@interface LHTrackTagID : NSManagedObjectID {}
@end

@interface _LHTrackTag : NSManagedObject {}
+ (id)insertInManagedObjectContext:(NSManagedObjectContext*)moc_;
@property (NS_NONATOMIC_IOSONLY, readonly, copy) LHTrackTagID *objectID;



@property (nonatomic, strong) NSNumber *count;

@property short countValue;
- (short)countValue;
- (void)setCountValue:(short)value_;

//- (BOOL)validateCount:(id*)value_ error:(NSError**)error_;




@property (nonatomic, strong) LHTrack* track;
//- (BOOL)validateTrack:(id*)value_ error:(NSError**)error_;



@property (nonatomic, strong) LHTag* tag;
//- (BOOL)validateTag:(id*)value_ error:(NSError**)error_;



@end

@interface _LHTrackTag (CoreDataGeneratedAccessors)

@end
