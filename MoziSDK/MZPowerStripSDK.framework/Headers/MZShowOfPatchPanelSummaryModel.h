//
//  MZShowOfPatchPanelSummaryModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/19.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"

@class MZShowOfPatchPanelSummarySubModel;
@class MZShowOfPatchPanelSummaryCurrentPowerModel;
@class MZShowOfPatchPanelSummarySwitchStateModel;

@interface MZShowOfPatchPanelSummaryModel : MZBaseModel
@property (nonatomic, strong) MZShowOfPatchPanelSummarySubModel *data;
@end


@interface MZShowOfPatchPanelSummarySubModel : NSObject
@property (nonatomic, strong) MZShowOfPatchPanelSummaryCurrentPowerModel *currentPower;     //当前功率model
@property (nonatomic, strong) MZShowOfPatchPanelSummarySwitchStateModel *switchState;       //开关状态model
@property (nonatomic, assign) int tasksCount;                                               //定时任务个数（开启的）
@property (nonatomic, assign) BOOL isOnline;                                                //设备是否在线
@property (nonatomic, assign) long bindingTime;                                             //绑定时间
@end


@interface MZShowOfPatchPanelSummaryCurrentPowerModel : NSObject
@property (nonatomic, assign) int powerType;        //功率类型，0正常；异常1
@property (nonatomic, assign) int powerTime;        //功率时间戳
@property (nonatomic, assign) double powerValue;    //功率值
@end


@interface MZShowOfPatchPanelSummarySwitchStateModel : NSObject
@property (nonatomic, copy) NSString *snCode;
@property (nonatomic, assign) int usbSwitch;        //usb插孔状态，同时名字也是插孔唯一标识
@property (nonatomic, assign) int mainSwitch;       //主状态，同时名字也是插孔唯一标识
@property (nonatomic, assign) int hub1Switch;       //正常插孔状态，同时名字也是插孔唯一标识
@property (nonatomic, assign) int hub2Switch;
@property (nonatomic, assign) int hub3Switch;
@property (nonatomic, assign) int hub4Switch;
@property (nonatomic, assign) int hub5Switch;
@property (nonatomic, assign) int hub6Switch;
@property (nonatomic, assign) int hub7Switch;
@property (nonatomic, assign) int hub8Switch;
@property (nonatomic, assign) int hub9Switch;
@property (nonatomic, assign) int hub10Switch;
@end
