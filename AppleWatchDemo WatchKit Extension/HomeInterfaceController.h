//
//  InterfaceController.h
//  AppleWatchDemo WatchKit Extension
//
//  Created by Brexton Pham on 7/6/15.
//  Copyright (c) 2015 Brexton Pham. All rights reserved.
//

#import <WatchKit/WatchKit.h>
#import <Foundation/Foundation.h>

@interface HomeInterfaceController : WKInterfaceController

@property(nonatomic, weak) IBOutlet WKInterfaceTable *tableView;

@end
