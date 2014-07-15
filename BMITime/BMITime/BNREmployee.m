//
//  BNREmployee.m
//  BMITime
//
//  Created by Peter Barnes on 7/9/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import "BNREmployee.h"
#import "BNRAsset.h"

@interface BNREmployee ()
{
    NSMutableArray *_assets;
}


@property (nonatomic) unsigned int officeAlarmCode;

@end

@implementation BNREmployee

- (void)setAssets:(NSArray *)a
{
    _assets = [a mutableCopy];
}

- (NSArray *)assets
{
    return [_assets copy];
}

- (void)addAsset:(BNRAsset *)a
{
    if (!_assets) {
        _assets = [[NSMutableArray alloc] init];
    }
    [_assets addObject:a];
}

- (unsigned int)valueOfAssets
{
    unsigned int sum = 0;
    for (BNRAsset *a in _assets) {
        sum += [a resaleValue];
    }
    return sum;
}

- (double)yearsOfEmployment
{
    // Do I have a non-nil hireDate?
    if (self.hireDate) {
        // NSTimeInterval is the same as double
        NSDate *now = [NSDate date];
        NSTimeInterval secs = [now timeIntervalSinceDate:self.hireDate];
        return secs / 31557600.0; // Seconds per year
    } else {
        return 0;
    }
}

- (float)bodyMassIndex
{
    float normalBMI = [super bodyMassIndex];
    return normalBMI * 0.9;
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<Employee %d: $%d in assets>", self.employeeID, self.valueOfAssets];
}

- (void)dealloc
{
    NSLog(@"deallocating %@", self);
}

@end
