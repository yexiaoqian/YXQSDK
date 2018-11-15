//
//  MZGetDeviceTypeAndCountModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/27.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"

@class MZGetDeviceTypeAndCountSubModel;

@interface MZGetDeviceTypeAndCountModel : MZBaseModel
@property (nonatomic, strong) NSArray *data;
@end


@interface MZGetDeviceTypeAndCountSubModel : NSObject
@property (nonatomic, assign) int userId;                   //用户id
@property (nonatomic, copy) NSString *deviceName;           //设备名字
@property (nonatomic, copy) NSString *deviceTypeCode;       //设备类型
@property (nonatomic, assign) int deviceCount;              //设备个数
@end
