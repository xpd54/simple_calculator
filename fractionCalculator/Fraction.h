//
//  Fraction.h
//  fractionCalculator
//
//  Created by Ravi Prakash on 03/06/14.
//  Copyright (c) 2014 helpshift. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Fraction : NSObject
@property int numerator,denominator;
-(void) print;
-(void) setTo : (int) n over : (int) d;
-(Fraction *) add : (Fraction *) f;
-(Fraction *) subtract : (Fraction *) f;
-(Fraction *) multiply : (Fraction *) f;
-(Fraction *) divide : (Fraction *) f;
-(void) reduce;
-(double) convertToNum;
-(NSString *) convertToString;
@end
