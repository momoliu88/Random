//
//  RandomController.m
//  Random
//
//  Created by xiaoqinliu on 13-6-7.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import "RandomController.h"

@implementation RandomController

- (id)init
{
    self = [super init];
    if (self) {
        // Initialization code here.
    }
    
    return self;
}
-(IBAction)seed:(id)sender{
    srand((unsigned int)time(NULL));
    [textField setStringValue:@"Generator seeded."];
}
-(IBAction)generate:(id)sender{
    int generate = (int)(random()%100);
    [textField setIntValue:generate];
}
-(void)awakeFromNib{
    NSDate *now = [NSDate date];
    [textField setObjectValue:now];
}
@end
