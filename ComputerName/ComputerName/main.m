//
//  main.m
//  ComputerName
//
//  Created by Peter Barnes on 6/25/14.
//  Copyright (c) 2014 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSHost *name = [NSHost currentHost];
        NSString *realName = [name localizedName];
        NSLog(@"The name of this computer is %@", realName);
        
        
    }
    return 0;
}

