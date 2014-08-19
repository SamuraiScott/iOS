//
//  BIDViewController.h
//  Butt n Stuff
//
//  Created by Scott on 2014-08-19.
//  Copyright (c) 2014 ScottMaile. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BIDViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *statusLabel;
- (IBAction)buttonPressed:(UIButton *)sender;

@end
