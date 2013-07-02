//
//  MasterViewController.h
//  SimpleProject
//
//  Created by Silviu Pop on 7/2/13.
//  Copyright (c) 2013 Silviu Pop. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
