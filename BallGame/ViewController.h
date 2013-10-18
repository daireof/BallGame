//
//  ViewController.h
//  BallGame
//
//  Created by Daire O'Flaherty on 07/10/2013.
//  Copyright (c) 2013 Daire O'Flaherty. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    
    IBOutlet UIButton *startbutton;
    NSTimer * randomMain;
    CGPoint pos;
    IBOutlet UIImageView *player;
    IBOutlet UIImageView *enemy;
}

-(IBAction)start;

@end
