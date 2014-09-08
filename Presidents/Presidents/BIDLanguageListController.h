//
//  BIDLanguageListController.h
//  Presidents
//
//  Created by Scott on 2014-09-08.
//  Copyright (c) 2014 ScottMaile. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BIDDetailViewController;

@interface BIDLanguageListController : UITableViewController

@property (weak, nonatomic) BIDDetailViewController *detailViewController;
@property (copy, nonatomic) NSArray *languageNames;
@property (copy, nonatomic) NSArray *languageCodes;

@end
