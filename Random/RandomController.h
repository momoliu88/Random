//
//  RandomController.h
//  Random
//
//  Created by xiaoqinliu on 13-6-7.
//  Copyright 2013年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RandomController : NSObject{
    IBOutlet NSTextField *textField;
}
-(IBAction)seed:(id)sender;
-(IBAction)generate:(id)sender;
@end
