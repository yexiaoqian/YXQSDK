//
//  MZMomentPowerModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/14.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"
@class MZMomentPowerSubModel;
@interface MZMomentPowerModel : MZBaseModel
@property (nonatomic, strong) NSArray *data;            //瞬时功率数组
@end

@interface MZMomentPowerSubModel : NSObject
@property (nonatomic,assign) int powerType;             //功率类型，0正常；1异常
@property (nonatomic,assign) NSUInteger powerTime;      //功率时间戳
@property (nonatomic,assign) double powerValue;         //功率值
@end
