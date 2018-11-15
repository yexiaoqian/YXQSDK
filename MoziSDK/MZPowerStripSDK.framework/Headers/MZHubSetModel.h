//
//  MZHubSetModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/10/8.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"

@interface MZHubSetModel : MZBaseModel
@property (nonatomic, copy) NSString *data;     //redisKey,用于轮询
@end
