//
//  ViewController.h
//  BareMinimum
//
//  Created by Shigeru Kobayashi on 2013/05/12.
//  Copyright (c) 2013年 Shigeru Kobayashi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UISegmentedControl *digitalInputControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *digitalOutputControl;

@property (nonatomic, retain) NSTimer *sendKnockStartTimer;
@property (nonatomic, retain) NSTimer *receiveKnockStartTimer;

@property (nonatomic, assign) int isKnockStart;
@property (nonatomic, retain) NSDate *startDate;

- (IBAction)digitalOutputControlChanged:(id)sender;

@end
