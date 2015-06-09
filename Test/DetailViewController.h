//
//  DetailViewController.h
//  Test
//
//  Created by Xibin Gao on 11/29/14.
//  Copyright (c) 2014 Xibin Gao. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

