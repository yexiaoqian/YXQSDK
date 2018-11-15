//
//  MZAllDeviceInfoByTypeModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/19.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"

@class MZAllDeviceInfoByTypeSubModel;

@interface MZAllDeviceInfoByTypeModel : MZBaseModel
@property (nonatomic, strong) NSArray *data;            //设备信息列表数据数组

@end


@interface MZAllDeviceInfoByTypeSubModel : NSObject
@property (nonatomic, assign) int onLineStatus;         //设备是否在线
@property (nonatomic, copy) NSString *deviceTypeCode;   //设备类型
@property (nonatomic, copy) NSString *snCode;           //设备唯一标识
@property (nonatomic, copy) NSString *defaultlName;     //设备名称
@property (nonatomic, copy) NSString *userId;           //用户Id
@end
