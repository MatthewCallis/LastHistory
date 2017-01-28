//
//  LHDocument.h
//  LastHistory
//
//  Created by Frederik Seiffert on 04.10.09.
//  Copyright Frederik Seiffert 2009 . All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "LHEvent.h"


extern NSString *LHDocumentWillOpenNotification;
extern NSString *LHDocumentDidOpenNotification;
extern NSString *LHDocumentDidCloseNotification;


@class LHHistoryView;
@class LHTrack;
@class LHHistoryEntry;
@class LHOperation;

@interface LHDocument : NSPersistentDocument
#ifdef MAC_OS_X_VERSION_10_6
<NSSoundDelegate>
#endif
{
	IBOutlet LHHistoryView *__weak historyView;
	
	IBOutlet NSTokenField *searchField;
	
	IBOutlet NSWindow *usernameSheet;
	IBOutlet NSTextField *usernameField;
	
	IBOutlet NSWindow *playlistNameSheet;
	IBOutlet NSTextField *playlistNameField;
	
	int _operationMode; // Analysis/Personal
	BOOL _chartsMode;
	NSArray *_playlist;
	
	LHHistoryEntry *_firstHistoryEntry;
	LHHistoryEntry *_lastHistoryEntry;
	NSArray *_cachedHistoryEntries;
	NSUInteger _hiddenHistoryEntriesCount;
	NSUInteger _hiddenTracksCount;
	
	LHHistoryEntry *_currentHistoryEntry;
	id <LHEvent> _currentEvent;
	
	NSSound *_currentSound;
	BOOL _currentSoundIsPaused;
	
	NSOperationQueue *_queue;
	LHOperation *_currentOperation;
}

@property (weak, readonly) LHHistoryView *historyView;

@property (assign) int operationMode;
@property (assign) BOOL chartsMode;
@property (strong) NSArray *playlist;

@property (strong) LHHistoryEntry *currentHistoryEntry;
@property (strong) id <LHEvent> currentEvent;
@property (strong) NSSound *currentSound;

@property (weak, readonly) NSString *infoString;

@property (weak, readonly) NSArray *tracks;
@property (readonly) NSUInteger tracksCount;

@property (weak, readonly) NSArray *historyEntries;
@property (readonly) NSUInteger historyEntriesCount;

@property (weak, readonly) LHHistoryEntry *firstHistoryEntry;
@property (weak, readonly) LHHistoryEntry *lastHistoryEntry;

@property (strong) LHOperation *currentOperation;


- (void)setUsername:(NSString *)username;


- (void)updateOperation:(LHOperation *)op;
- (void)mergeChanges:(NSNotification *)notification;


- (NSArray *)objectsForEntity:(NSString *)entityName
				withPredicate:(NSPredicate *)predicate
				   fetchLimit:(NSUInteger)fetchLimit
					ascending:(BOOL)ascending
					inContext:(NSManagedObjectContext *)context;
- (NSArray *)objectsForEntity:(NSString *)entityName;

- (NSUInteger)countForEntity:(NSString *)entityName
			   withPredicate:(NSPredicate *)predicate
				   inContext:(NSManagedObjectContext *)context;
- (NSUInteger)countForEntity:(NSString *)entityName;


// Actions

- (IBAction)updateFilter:(id)sender;

- (void)performFindPanelAction:(id)sender;
- (IBAction)toggleFullScreenMode:(id)sender;

- (IBAction)showTrackIniTunes:(id)sender;
- (IBAction)createPlaylistIniTunes:(id)sender;
- (IBAction)closePlaylistNameSheet:(id)sender;

- (IBAction)stop:(id)sender;
- (IBAction)pause:(id)sender;

- (IBAction)skipBackwards:(id)sender;
- (IBAction)skipForward:(id)sender;

- (BOOL)playHistoryEntry:(LHHistoryEntry *)historyEntry;
- (BOOL)playHistoryEntriesForEvent:(id <LHEvent>)event;
- (NSUInteger)numberOfHistoryEntriesForEvent:(id <LHEvent>)event;

// History Loading

- (IBAction)loadHistory:(id)sender;
- (IBAction)closeUsernameSheet:(id)sender;

// Last.fm Tag Loading

- (IBAction)retrieveTags:(id)sender;
- (IBAction)showTopTags:(id)sender;

@end
