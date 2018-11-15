//
//  MZElectricitySerialModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/19.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"
@interface MZElectricitySerialModel : MZBaseModel
@property (nonatomic, strong) NSArray *data;        //一周使用电量数组
@end


@interface MZElectricitySerialSubModel : MZBaseModel
@property (nonatomic, copy) NSString *reportDate;   //数据日期 
@property (nonatomic, copy) NSString *point20;      //晚上八点电量
@property (nonatomic, copy) NSString *point8;       //八点电量
@property (nonatomic, copy) NSString *snCode;       //设备唯一标识
@end
