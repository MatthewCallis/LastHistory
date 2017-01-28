//
//  LHTimeEvent.h
//  LastHistory
//
//  Created by Frederik Seiffert on 22.11.09.
//  Copyright 2009 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import "LHEvent.h"


@interface LHTimeEvent : NSObject <LHEvent> {
	NSDate *_startDate;
	NSDate *_endDate;
	NSInteger _startTime;
	NSInteger _endTime;
}

- (instancetype)initWithStartTime:(NSInteger)startTime endTime:(NSInteger)endTime;
- (instancetype)initWithStartDate:(NSDate *)startDate endDate:(NSDate *)endDate startTime:(NSInteger)startTime endTime:(NSInteger)endTime NS_DESIGNATED_INITIALIZER;

@property (readonly) NSDate *eventStart;
@property (readonly) NSDate *eventEnd;

@property (readonly) NSInteger eventStartTime;
@property (readonly) NSInteger eventEndTime;

@end
