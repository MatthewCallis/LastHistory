#import "_LHHistoryEntry.h"


@interface LHHistoryEntry : _LHHistoryEntry {
	CALayer *__weak layer;
	BOOL hidden;
	
	// cached values
	NSDate *_day;
	int16_t _year;
	uint8_t _month;
	uint8_t _hour;
	uint8_t _weekday;
}

@property (weak) CALayer *layer;

@property (assign) BOOL hidden;

@property (weak, readonly) NSAttributedString *attributedDisplayName;

- (NSArray *)adjacentEntries:(NSUInteger)numEntries ascending:(BOOL)ascending;

@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSArray *playlists;
- (NSArray *)adjacentEntriesInPlaylists:(NSArray *)playlists ascending:(BOOL)ascending;

@property (weak, readonly) LHHistoryEntry *previousEntry;
@property (weak, readonly) LHHistoryEntry *nextEntry;

@property (weak, readonly) NSDate *day;
@property (readonly) NSInteger year;
@property (readonly) NSInteger month;
@property (readonly) NSInteger hour;
@property (readonly) NSInteger weekday;

@end
