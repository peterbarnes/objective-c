//
//  BNRPerson.h
//  BMITime
//
//  Created by Peter Barnes on 7/7/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRPerson : NSObject

// BNRPerson has two properties
@property (nonatomic) float heightInMeters;
@property (nonatomic) int weightInKilos;

// BNRPerson has a method that calculates Body Mass Index
- (float)bodyMassIndex;

@end
