//
//  MZDeviceManagerProtocol.h
//  MZPowerStripSDK
//
//  Created by linbiao on 2018/9/7.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ResultModel.h"
#import "MZAllDeviceInfoByTypeModel.h"
#import "MZBindingChechModel.h"
#import "MZNormalModel.h"
#import "MZGetDeviceTypeAndCountModel.h"
#import "MZBingingModel.h"

typedef void(^moziCallbackBlock)(ResultModel *resultModel);

@protocol MZDeviceManagerProtocol <NSObject>


#pragma mark ---设备
/**
 *  设备绑定信息查询
 *
 *  userID          用户唯一标识ID
 *  snCode          设备唯一标识ID
 *  longitude       设备所在位置经度
 *  latitude        设备说在位置纬度
 *
 **/
- (void)mzBingingCheckSnCode:(NSString *)snCode Longitude:(NSString *)longitude Latitude:(NSString *)latitude MoziCallbackBlock:(void(^)(MZBindingChechModel *model))callBack;

/**
 *  设备绑定信息录入
 *
 *  snCode          设备唯一标识ID
 *
 **/
- (void)mzBingingSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZBingingModel *model))callBack;


/**
 *  设备解绑
 *
 *  snCode          设备唯一标识ID
 *
 **/
- (void)mzBingingRelieveSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;


/**
 *  用户设备列表展示
 *
 *  deviceTypeCode  设备类型code，展示设备类型下的设备列表
 *
 **/
- (void)mzGetAllDeviceInfoByTypeDeviceTypeCode:(NSString *)deviceTypeCode MoziCallbackBlock:(void(^)(MZAllDeviceInfoByTypeModel *model))callBack;


/**
 *  设备地理位置更新
 *
 *  snCode          设备唯一标识ID
 *  longitude       设备所在位置经度
 *  latitude        设备说在位置纬度
 *
 **/
- (void)mzUpdatePositionSnCode:(NSString *)snCode Longitude:(NSString *)longitude Latitude:(NSString *)latitude MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;


/**
 *  设备类型以及设备个数展示
 *
 *
 **/
- (void)mzGetDeviceTypeAndCountMoziCallbackBlock:(void(^)(MZGetDeviceTypeAndCountModel *model))callBack;


@end
