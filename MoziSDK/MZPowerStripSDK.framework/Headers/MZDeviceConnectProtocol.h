//
//  MZDeviceConnectProtocol.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/8.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^moziCallbackBlock)(ResultModel *resultModel);

@protocol MZDeviceConnectProtocol <NSObject>

#pragma mark ---AP连接
/**
 *  AP连接
 *
 *  wifiName        wifi名称
 *  wifiPwd         wifi密码
 *  token
 *
 **/
- (void)mzDeviceAPConnectWifiName:(NSString *)wifiName WifiPwd:(NSString *)wifiPwd Token:(NSString *)token MoziCallbackBlock:(moziCallbackBlock)callbackBlock;


#pragma mark - 一键连接
/**
 *  一键连接
 *
 *  wifiName        wifi名称
 *  wifiPwd         wifi密码
 *  token
 *
 **/
- (void)mzDeviceOneConnectWifiName:(NSString *)wifiName WifiPwd:(NSString *)wifiPwd Token:(NSString *)token MoziCallbackBlock:(moziCallbackBlock)callbackBlock;


@end

