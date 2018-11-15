//
//  MZVersionShowModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/25.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZBaseModel.h"

@class MZVersionShowSubModel;
@interface MZVersionShowModel : MZBaseModel
@property (nonatomic, strong) MZVersionShowSubModel *data;
@end


@interface MZVersionShowSubModel : NSObject
@property (nonatomic, copy) NSString *snCode;               //设备唯一标识
@property (nonatomic, copy) NSString *currentVersion;       //设备当前硬件版本号
@property (nonatomic, copy) NSString *latestVersion;        //设备最新硬件版本号
@property (nonatomic, copy) NSString *updateContent;        //设备硬件更新内容
@property (nonatomic, assign) long recordId;                //升级记录Id
@end
