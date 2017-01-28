//
//  LHiPhotoLibrary.h
//  LastHistory
//
//  Created by Frederik Seiffert on 08.11.09.
//  Copyright 2009 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "LHiPhotoRoll.h"
#import "LHiPhotoPhoto.h"


#define USE_IMAGE_CACHE 0


@interface LHiPhotoLibrary : NSObject {
	NSURL *_libraryURL;
	
	NSArray *_rolls;
	NSDictionary *_imageDictsByKey;
	
#if USE_IMAGE_CACHE
	NSMapTable *_imageCache;
#endif
}

+ (LHiPhotoLibrary *)defaultLibrary;

- (instancetype)initWithURL:(NSURL *)libraryURL NS_DESIGNATED_INITIALIZER;

- (LHiPhotoPhoto *)imageForKey:(NSString *)key inRoll:(LHiPhotoRoll *)roll;

@property (NS_NONATOMIC_IOSONLY, readonly) BOOL loadLibrary;

@property (readonly) NSURL *libraryURL;

@property (readonly) NSArray *rolls;

@end
