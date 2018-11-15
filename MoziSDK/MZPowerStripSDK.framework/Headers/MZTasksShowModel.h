//
//  MZTasksShowModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/19.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"

@interface MZTasksShowModel : MZBaseModel
@property (nonatomic, strong) NSArray *data;
@end

@interface MZTasksShowSubModel : NSObject
@property (nonatomic, assign) int mianId;                   //主键ID
@property (nonatomic, copy) NSString *snCode;               //设备唯一标识
@property (nonatomic, copy) NSString *taskEventType;        //定时器执行动作，1开启插孔电源；0关闭插孔电源
@property (nonatomic, copy) NSString *execTarget;           //执行对象 如：@"01234"；0表示usb口，其他表示正常插孔
@property (nonatomic, copy) NSString *weekDay;              //执行日期，周一到周天 如：@"1234567"
@property (nonatomic, copy) NSString *timeRules;            //时间点
@property (nonatomic, assign) int cancelFlag;               //取消标识
@property (nonatomic, copy) NSString *taskUuid;             //任务uuid
@end
