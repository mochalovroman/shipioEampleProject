//
//  DetailViewController.h
//  shipioEampleProject
//
//  Created by Roman Mochalov on 09.06.15.
//  Copyright (c) 2015 Roman Mochalov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

