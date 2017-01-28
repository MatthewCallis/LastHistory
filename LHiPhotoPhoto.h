//
//  LHiPhotoImage.h
//  LastHistory
//
//  Created by Frederik Seiffert on 10.11.09.
//  Copyright 2009 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class LHiPhotoRoll;

@interface LHiPhotoPhoto : NSObject {
	LHiPhotoRoll *_roll;
	
	NSString *_caption;
	NSDate *_timestamp;
	
	NSString *_imagePath;
	NSString *_thumbPath;
}

- (instancetype)initWithDictionary:(NSDictionary *)imageDict inRoll:(LHiPhotoRoll *)roll NS_DESIGNATED_INITIALIZER;

@property (readonly) LHiPhotoRoll *roll;

@property (readonly) NSString *caption;
@property (readonly) NSDate *timestamp;

@property (readonly) NSImage *image;
@property (readonly) NSImage *thumb;

@end
