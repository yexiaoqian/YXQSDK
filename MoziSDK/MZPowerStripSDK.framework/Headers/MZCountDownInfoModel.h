//
//  MZCountDownInfoModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/26.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"

@class MZCountDownInfoSubModel;
@interface MZCountDownInfoModel : MZBaseModel
@property (nonatomic, strong) MZCountDownInfoSubModel *data;
@end

@interface MZCountDownInfoSubModel : NSObject
@property (nonatomic, assign) int mianId;                       //主键ID
@property (nonatomic, copy) NSString *snCode;                   //设备唯一标识
@property (nonatomic, copy) NSString *snFake;                   //snCode加密后的
@property (nonatomic, assign) int tenantId;                     //租户id
@property (nonatomic, copy) NSString *taskName;                 //任务名字
@property (nonatomic, copy) NSString *userId;                   //用户id
@property (nonatomic, copy) NSString *taskUuid;                 //任务uuid
@property (nonatomic, copy) NSString *taskEventType;            //定时器执行动作，1开启插孔电源；0关闭插孔电源
@property (nonatomic, assign) int countdownTime;                //倒计时时间
@property (nonatomic, copy) NSString *countdownStartTime;       //倒计时任务开始时间
@property (nonatomic, copy) NSString *execTarget;               //执行对象 如：@"01234"；0表示usb口，其他表示正常插孔
@property (nonatomic, assign) int cancelFlag;                   //取消标识
@end
