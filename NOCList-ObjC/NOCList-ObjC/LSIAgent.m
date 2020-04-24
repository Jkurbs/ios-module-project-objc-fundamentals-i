//
//  LSIAgent.m
//  NOCList-ObjC
//
//  Created by Kerby Jean on 4/23/20.
//  Copyright © 2020 Kerby Jean. All rights reserved.
//

#import "LSIAgent.h"

@implementation LSIAgent


- (instancetype)initWithCoverName:(NSString *)coverName realName:(NSString *)realName accessLevel:(NSInteger)accessLevel compromised:(Boolean)compromised {
    
   self = [super init];
    if (self) {
        _coverName = coverName;
        _realName = realName;
        _accessLevel = &accessLevel;
    }
    
    return self; 

}


@end
