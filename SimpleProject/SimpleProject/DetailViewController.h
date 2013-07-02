//
//  DetailViewController.h
//  SimpleProject
//
//  Created by Silviu Pop on 7/2/13.
//  Copyright (c) 2013 Silviu Pop. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
