//
//  MZBingingModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/10/8.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"


@class MZBingingSubModel;
@interface MZBingingModel : MZBaseModel
@property (nonatomic, strong) MZBingingSubModel *data;     //设备data
@end


@interface MZBingingSubModel : NSObject
@property (nonatomic, copy) NSString *deviceName;       //设备名称
@property (nonatomic, assign) int mianId;               //设备id
@end

