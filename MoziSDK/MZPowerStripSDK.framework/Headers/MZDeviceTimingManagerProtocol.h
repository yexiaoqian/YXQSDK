//
//  MZDeviceTimingManagerProtocol.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/7.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZTasksAddModel.h"
#import "MZTasksShowModel.h"
#import "MZNormalModel.h"
#import "MZAddCountDownModel.h"
#import "MZCountDownInfoModel.h"

typedef void(^moziCallbackBlock)(ResultModel *resultModel);

@protocol MZDeviceTimingManagerProtocol <NSObject>


#pragma mark ---定时相关
/**
 *  设备增加定时任务
 *
 *  taskEventType       表示定时器执行的动作，1开启插孔电源，0关闭插孔电源
 *  snCode              设备唯一标识ID
 *  execTarget          执行对象 如：01234（1-4表示插孔，0表示usb）
 *  weekDay             执行日期，周一到周天 如：1234567
 *  timeRules           时间点 如：12：30
 *  cancelFlag          取消标识（1关闭，0打开）默认传0
 *
 **/
- (void)mzTasksAddSnCode:(NSString *)snCode TaskEventType:(NSString *)taskEventType ExecTarget:(NSString *)execTarget WeekDay:(NSString *)weekDay TimeRules:(NSString *)timeRules CancelFlag:(int)cancelFlag MoziCallbackBlock:(void(^)(MZTasksAddModel *model))callBack;



/**
 *  展示设备定时任务
 *
 *  snCode              设备唯一标识ID
 *
 **/
- (void)mzTasksShowSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZTasksShowModel *model))callBack;


/**
 *   删除设备指定定时任务
 *
 *  snCode              设备唯一标识ID
 *  taskUuid            任务唯一标识ID
 *
 **/
- (void)mzTasksDeleteSnCode:(NSString *)snCode TaskUuid:(NSString *)taskUuid MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;


/**
 *   修改设备指定定时任务
 *
 *  taskEventType       表示定时器执行的动作，1开启插孔电源，0关闭插孔电源
 *  snCode              设备唯一标识ID
 *  execTarget          执行对象 如：01234（1-4表示插孔，0表示usb）
 *  weekDay             执行日期，周一到周天 如：1234567
 *  timeRules           时间点 如：12：30
 *  cancelFlag          取消标识（1关闭，0打开）
 *
 **/
- (void)mzTasksModifySnCode:(NSString *)snCode taskUuid:(NSString *)taskUuid TaskEventType:(NSString *)taskEventType ExecTarget:(NSString *)execTarget WeekDay:(NSString *)weekDay TimeRules:(NSString *)timeRules CancelFlag:(int)cancelFlag MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;

/**
 *   设备指定定时任务开关
 *
 *  cancelFlag          取消标识（1关闭，0打开）
 *
 **/
- (void)mzTasksModifySwitchSnCode:(NSString *)snCode taskUuid:(NSString *)taskUuid CancelFlag:(int)cancelFlag MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;


#pragma mark ---设备倒计时相关
/**
 *  设备增加倒计时任务
 *
 *  snCode              设备唯一标识ID
 *  countdownTime       倒计时时间 （秒）
 *  countdownStartTime  倒计时开始的时间，即当前时间
 *  taskEventType       动作类型（1开启、0关闭）
 *  execTraget          执行对象（012345）0表示usb，其他正常插孔
 *  cancelFlag          取消标识（1暂停，0开始）
 *
 **/
- (void)mzAddCountDownSnCode:(NSString *)snCode CountdownTime:(NSString *)countdownTime TaskEventType:(NSString *)taskEventType ExecTarget:(NSString *)execTarget CancelFlag:(int)cancelFlag MoziCallbackBlock:(void(^)(MZAddCountDownModel *model))callBack;


/**
 *  设备倒计时任务暂停
 *
 *  snCode              设备唯一标识ID
 *  taskUuid            倒计时任务ID
 *  countDownTime       倒计时时间
 *
 **/
- (void)mzCountDownPauseSnCode:(NSString *)snCode TaskUuid:(NSString *)taskUuid CountDownTime:(NSString *)countDownTime MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;


/**
 *  设备暂停状态倒计时任务继续
 *
 *  snCode              设备唯一标识ID
 *  taskUuid            倒计时暂停时的时间
 *
 **/
- (void)mzCountDownContinueSnCode:(NSString *)snCode TaskUuid:(NSString *)taskUuid MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;
/**
 *  设备倒计时任务终止
 *
 *  snCode              设备唯一标识ID
 *  taskUuid            倒计时任务ID
 *
 **/
- (void)mzCountDownDeleteSnCode:(NSString *)snCode TaskUuid:(NSString *)taskUuid MoziCallbackBlock:(void(^)(MZNormalModel *model))callBack;

/**
 *  设备倒计时任务展示
 *
 *  snCode                设备唯一标识ID
 *  taskUuid              倒计时任务ID
 *
 **/
- (void)mzGetCountDownInfoSnCode:(NSString *)snCode MoziCallbackBlock:(void(^)(MZCountDownInfoModel *model))callBack;
@end
