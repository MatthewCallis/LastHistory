//
//  LHiTunesLibrary.h
//  LastHistory
//
//  Created by Frederik Seiffert on 08.11.09.
//  Copyright 2009 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class SBiTunesApplication;
@class SBiTunesPlaylist;


@interface LHiTunesLibrary : NSObject {
	NSURL *_libraryURL;
	NSDictionary *_tracks;
	
	SBiTunesApplication *_app;
	SBiTunesPlaylist *_masterPlaylist;
}

+ (LHiTunesLibrary *)defaultLibrary;

- (instancetype)initWithURL:(NSURL *)libraryURL NS_DESIGNATED_INITIALIZER;

@property (readonly) NSURL *libraryURL;
@property (weak, readonly) NSDictionary *tracks;

- (NSDictionary *)trackForTrack:(NSString *)name artist:(NSString *)artist;


// iTunes Scripting

- (void)revealTrack:(NSDictionary *)track;
- (void)createPlaylist:(NSString *)name withTracks:(NSArray *)tracks;

@end
