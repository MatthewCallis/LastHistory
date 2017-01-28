//
//  NSDate-Extras.h
//  LastHistory
//
//  Created by Frederik Seiffert on 13.12.09.
//  Copyright 2009 Frederik Seiffert. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface NSDate (Extras)

@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSDate *day;
@property (NS_NONATOMIC_IOSONLY, readonly) NSInteger year;
@property (NS_NONATOMIC_IOSONLY, readonly) NSInteger month;
@property (NS_NONATOMIC_IOSONLY, readonly) NSInteger hour;
@property (NS_NONATOMIC_IOSONLY, readonly) NSInteger weekday;

@end
