//
//  LHiPhotoRoll.h
//  LastHistory
//
//  Created by Frederik Seiffert on 10.11.09.
//  Copyright 2009 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "LHEvent.h"

@class LHiPhotoLibrary;
@class LHiPhotoPhoto;


@interface LHiPhotoRoll : NSObject <LHEvent> {
	LHiPhotoLibrary *_library;
	
	NSString *_name;
	NSDate *_timestamp;
	
	NSString *_keyPhotoKey;
	NSArray *_photoKeys;
	
	NSArray *_photos; // garbage-collected cache
}

- (instancetype)initWithDictionary:(NSDictionary *)rollDict forLibrary:(LHiPhotoLibrary *)library NS_DESIGNATED_INITIALIZER;

@property (readonly) LHiPhotoLibrary *library;

@property (readonly) NSString *name;
@property (readonly) NSDate *timestamp;

@property (readonly) LHiPhotoPhoto *keyPhoto;
@property (readonly) NSArray *photos;

@property (readonly) NSDate *eventStart;
@property (readonly) NSDate *eventEnd;

@end
