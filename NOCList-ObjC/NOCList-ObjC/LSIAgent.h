//
//  LSIAgent.h
//  NOCList-ObjC
//
//  Created by Kerby Jean on 4/23/20.
//  Copyright © 2020 Kerby Jean. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIAgent : NSObject

@property NSString *coverName;
@property NSString *realName;
@property NSInteger *accessLevel;
@property Boolean *compromised;

-(instancetype)initWithCoverName:(NSString *)coverName realName:(NSString *)realName accessLevel:(NSInteger)accessLevel compromised:(Boolean)compromised;

@end

NS_ASSUME_NONNULL_END
