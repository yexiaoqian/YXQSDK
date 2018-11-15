//
//  MZDeviceSettingProtocol.h
//  MZPowerStripSDK
//
//  Created by linbiao on 2018/9/7.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZShowOfPatchPanelSummaryModel.h"
#import "MZNormalModel.h"
#import "MZElectricitySerialModel.h"
#import "MZMomentPowerModel.h"
#import "MZCurrentPowerModel.h"
#import "MZUnusalPowerModel.h"
#import "MZUnusualMomentPowerModel.h"
#import "MZVersionShowModel.h"
#import "MZHubSetModel.h"

typedef void(^moziCallbackBlock)(ResultModel *resultModel);

@protocol MZDeviceSettingProtocol <NSObject>

/**
 *  插线板主页数据展示接口
 *
 *  snCode          设备唯一标识ID
 *
 **/
- (void)mzShowOfPatchPanelSummarySnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZShowOfPatchPanelSummaryModel *model))callBack;


/**
 *  修改设备名称
 *
 *  snCode          设备唯一标识ID
 *  mainName        设备名字
 *
 **/
- (void)mzNameModifySnCode:(NSString *)snCode MainName:(NSString *)mainName MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;



/**
 *  设备总电源开启/关闭
 *
 *  snCode          设备唯一标识ID
 *
 **/
- (void)mzMainSwitchSetShowSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZHubSetModel *model))callBack;

/**
 *  设备某一插口电源开启/关闭
 *
 *  snCode          设备唯一标识ID
 *  hubLable        设备插孔唯一标识ID
 *  state           开关动作，1开启/0关闭
 *
 **/
- (void)mzSingleHubSetSnCode:(NSString *)snCode State:(int)state HubLable:(NSString *)hubLable MoziCallbackBlock:(void(^)(MZHubSetModel *model))callBack;

/**
 *  获取开关设置执行结果
 *
 *  redisKey         轮询 （设备某一插口电源开启/关闭，设备总电源开启/关闭）返回的data为这个值
 *
 *  code             1正在执行，2执行成功，3执行失败，-1执行超时，5请求失败
 **/
- (void)mzGetSwitchSetResult:(NSString *)redisKey SnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(int code))callBack;

/**
 *  设备某一周使用的电量统计展示
 *
 *  snCode          设备唯一标识ID
 *  dateFrom        开始时间
 *  dateTo          结束时间
 *
 **/
- (void)mzElectricitySerialSnCode:(NSString *)snCode DateFrom:(NSString *)dateFrom DateTo:(NSString *)dateTo MoziCallbackBlock:(void(^)(MZElectricitySerialModel *model))callBack;


/**
 *  设备瞬时功率展示
 *
 *  snCode          设备唯一标识ID
 *
 **/
- (void)mzMomentPowerSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZMomentPowerModel *model))callBack;



/**
 *  设备当前功率展示
 *
 *  snCode          设备唯一标识ID
 *
 **/
- (void)mzCurrentPowerSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZCurrentPowerModel *model))callBack;


/**
 *  设备异常功率展示
 *
 *  snCode          设备唯一标识ID
 *
 **/
- (void)mzUnusalPowerSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZUnusalPowerModel *model))callBack;


/**
 *  设备异常功率记录删除
 *
 *  powerIdlist     异常记录id字符串 如：8022,7099,9999
 *
 **/
- (void)mzUnusalPowerIdList:(NSString *)powerIdList MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;


/**
 *  设备异常瞬时功率展示（即展开某条异常功率信息的展示结果）
 *
 *  snCode          设备唯一标识ID
 *  datePoint       异常功率时间
 *
 **/
- (void)mzUnusualMomentPowerSnCode:(NSString *)snCode DatePoint:(NSString *)datePoint MoziCallbackBlock:(void(^)(MZUnusualMomentPowerModel *model))callBack;


/**
 *  固件版本号查询接口
 *
 *  snCode          设备唯一标识ID
 *
 **/
- (void)mzVersionUpgradeShowSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZVersionShowModel *model))callBack;

/**
 *  固件版本号升级接口
 *
 *  snCode          设备唯一标识ID
 *  version         升级版本号
 *  recordId        升级记录Id,通过固件版本号查询接口返回
 *
 **/
- (void)mzVersionUpgradeUpdateSnCode:(NSString *)snCode Version:(NSString *)version RecordId:(long)recordId MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;

@end
