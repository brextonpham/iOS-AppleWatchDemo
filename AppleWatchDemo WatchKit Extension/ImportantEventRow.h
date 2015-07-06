//
//  ImportantEventRow.h
//  AppleWatchDemo
//
//  Created by Brexton Pham on 7/6/15.
//  Copyright (c) 2015 Brexton Pham. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WatchKit/WatchKit.h>

@interface ImportantEventRow : NSObject

@property(nonatomic, weak) IBOutlet WKInterfaceLabel *titleLabel;
@property(nonatomic, weak) IBOutlet WKInterfaceLabel *timeLabel;
@property(nonatomic, weak) IBOutlet WKInterfaceImage *eventImage;

@end
