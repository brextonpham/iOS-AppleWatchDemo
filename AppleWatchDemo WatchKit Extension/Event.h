//
//  Event.h
//  AppleWatchDemo
//
//  Created by Brexton Pham on 7/6/15.
//  Copyright (c) 2015 Brexton Pham. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Event : NSObject

@property (nonatomic, strong) NSString *eventTitle;
@property (nonatomic, strong) NSString *eventTime;
@property (nonatomic, strong) NSString *eventImageName;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
+ (NSArray *)eventsList;

@end



