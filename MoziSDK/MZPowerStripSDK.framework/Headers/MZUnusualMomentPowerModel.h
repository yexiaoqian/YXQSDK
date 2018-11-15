//
//  MZUnusualMomentPowerModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/19.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"
@class MZUnusualMomentPowerSubModel;
@interface MZUnusualMomentPowerModel : MZBaseModel
@property (nonatomic, strong) NSArray *data;        //异常瞬时功率信息数组
@end

@interface MZUnusualMomentPowerSubModel : NSObject
@property (nonatomic, assign) int mianId;           //主键ID
@property (nonatomic, copy) NSString *snCode;       //设备编码
@property (nonatomic, copy) NSString *datePoint;    //时间戳
@property (nonatomic, assign) double power;         //异常功率值
@end
