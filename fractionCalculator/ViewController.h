//
//  ViewController.h
//  fractionCalculator
//
//  Created by Ravi Prakash on 02/06/14.
//  Copyright (c) 2014 helpshift. All rights reserved.
//

#import <UIKit/UIKit.h>
@interface ViewController : UIViewController
@property (strong,nonatomic) IBOutlet UILabel *display;
-(void) processDigit : (int) digit;
-(void) processOp : (char) theOp;
-(void) storeFracPart;
// numeric keys

-(IBAction) ClickDigit: (UIButton *) sender;
// Arithmetic Operation keys
-(IBAction) clickPlus;
-(IBAction) ClickMinus;
-(IBAction) clickMultiply;
-(IBAction) clickDivide;

// Misc keys

-(IBAction) clickOver;
-(IBAction) clickEquals;
-(IBAction) clickClear;
@end
