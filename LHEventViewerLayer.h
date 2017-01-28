//
//  LHEventViewerLayer.h
//  LastHistory
//
//  Created by Frederik Seiffert on 05.01.10.
//  Copyright 2010 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

@interface LHEventViewerLayer : CALayer {	
	BOOL _isPlaying;
	NSTimer *_playTimer;
}

@property (assign) BOOL isPlaying;

- (BOOL)handleMouseUpAtPoint:(CGPoint)mousePoint;

@end
