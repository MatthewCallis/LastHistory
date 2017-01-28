#import "_LHTrack.h"

#define TRACK_GENRE_UNKNOWN @"unknown"
#define TRACK_GENRE_UNKNOWN_INDEX -1

@interface LHTrack : _LHTrack {
	NSString *_genre;
}

+ (NSArray *)genreTagsMappings;
+ (NSArray *)genres;
+ (NSUInteger)genreIndexForGenre:(NSString *)genre;

@property (weak, readonly) NSString *displayName;
@property (weak, readonly) NSString *trackID;

@property (readonly) NSUInteger trackCount;

@property (weak, readonly) NSArray *sortedTrackTags;

- (NSString *)tagsStringWrappedAt:(NSUInteger)numWrapChars;
@property (weak, readonly) NSString *tagsString;

@property (weak, readonly) NSString *genre;

@end
