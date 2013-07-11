//
//  HistoryViewController.h
//  Pandemobium
//
//  Created by Thomas Salazar on 6/28/13.
//  Copyright (c) 2013 Thomas Salazar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ECSlidingViewController.h"
#import "MenuViewController.h"

@interface HistoryViewController : UITableViewController < UITableViewDataSource, UITableViewDelegate>
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@property (strong, nonatomic) NSArray *history;
@property (strong, nonatomic) NSArray *tips;

- (IBAction)revealMenu:(id)sender;
@end