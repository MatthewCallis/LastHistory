//
//  LHOperation.h
//  LastHistory
//
//  Created by Frederik Seiffert on 20.11.09.
//  Copyright 2009 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@class LHDocument;


@interface LHOperation : NSOperation {
	LHDocument *_document;
	NSManagedObjectContext *_context;
	
	NSString *_progressMessage;
	float _progress;
	BOOL _progressIndeterminate;
}

@property (readonly) LHDocument *document;
@property (readonly) NSManagedObjectContext *context;

@property (retain) NSString *progressMessage;
@property (assign) float progress;
@property (assign) BOOL progressIndeterminate;

- (instancetype)initWithDocument:(LHDocument *)document NS_DESIGNATED_INITIALIZER;

@property (NS_NONATOMIC_IOSONLY, readonly) BOOL saveContext;

@end
