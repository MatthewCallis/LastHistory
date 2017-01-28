#import "_LHHistoryEntry.h"


@interface LHHistoryEntry : _LHHistoryEntry {
	CALayer *layer;
	BOOL hidden;
	
	// cached values
	NSDate *_day;
	int16_t _year;
	uint8_t _month;
	uint8_t _hour;
	uint8_t _weekday;
}

@property (assign) CALayer *layer;

@property (assign) BOOL hidden;

@property (readonly) NSAttributedString *attributedDisplayName;

- (NSArray *)adjacentEntries:(NSUInteger)numEntries ascending:(BOOL)ascending;

@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSArray *playlists;
- (NSArray *)adjacentEntriesInPlaylists:(NSArray *)playlists ascending:(BOOL)ascending;

@property (readonly) LHHistoryEntry *previousEntry;
@property (readonly) LHHistoryEntry *nextEntry;

@property (readonly) NSDate *day;
@property (readonly) NSInteger year;
@property (readonly) NSInteger month;
@property (readonly) NSInteger hour;
@property (readonly) NSInteger weekday;

@end
