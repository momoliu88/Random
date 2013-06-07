//
//  RandomAppDelegate.h
//  Random
//
//  Created by xiaoqinliu on 13-6-7.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface RandomAppDelegate : NSObject <NSApplicationDelegate> {
    NSWindow *_window;
}

@property (strong) IBOutlet NSWindow *window;

@end
