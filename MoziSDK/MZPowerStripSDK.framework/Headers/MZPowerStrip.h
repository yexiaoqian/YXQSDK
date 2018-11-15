//
//  MZPowerStrip.h
//  MZPowerStripSDK
//
//  Created by linbiao on 2018/9/7.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZDeviceManagerProtocol.h"
#import "MZDeviceSettingProtocol.h"
#import "MZDeviceTimingManagerProtocol.h"
#import "MZDeviceConnectProtocol.h"
#import "MZAuthorizationProtocol.h"
#import "MZSaveManagerProtocol.h"
#import "ResultModel.h"
#import "MZAuthorizationModel.h"


@interface MZPowerStrip : NSObject

// 调用者可以直接使用这部分宏
#define MZPowerStrip_Instance ([MZPowerStrip getInstance])
#define MZPowerStrip_DeviceManager ([MZPowerStrip_Instance deviceManager])
#define MZPowerStrip_DeviceSetting ([MZPowerStrip_Instance deviceSetting])
#define MZPowerStrip_DeviceTiming ([MZPowerStrip_Instance deviceTiming])
#define MZPowerStrip_DeviceConnet ([MZPowerStrip_Instance deviceConnet])
//  sdk授权
#define MZPowerStrip_Authorization ([MZPowerStrip_Instance authorization])

#define MZPowerStrip_Save ([MZPowerStrip_Instance save])


+ (MZPowerStrip *)getInstance;

/**
 获取SDK版本号
 
 @return sdk版本号
 */
- (NSString *)getSDKVersion;

/**
 获取设备管理类
 
 @return 设备管理类对象
 */
- (id<MZDeviceManagerProtocol>)deviceManager;

/**
 获取设备设置类
 
 @return 设备设置类
 */
- (id<MZDeviceSettingProtocol>)deviceSetting;


/**
 获取设备设置定时、倒计时类
 
 @return 设备时间相关类
 */
- (id<MZDeviceTimingManagerProtocol>)deviceTiming;

/**
 获取设备连接
 
 @return 设备连接类
 */
- (id<MZDeviceConnectProtocol>)deviceConnet;


/**
 sdk授权
 
 @return 授权
 */
- (id<MZAuthorizationProtocol>)authorization;


/**
 存储
 
 @return 存储
 */
- (id<MZSaveManagerProtocol>)save;

@end
