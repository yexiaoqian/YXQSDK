//
//  MZBindingChechModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/19.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "MZBaseModel.h"

@class MZBindingChechSubModel;

@interface MZBindingChechModel : MZBaseModel

@property (nonatomic, strong) MZBindingChechSubModel *data;     //data为空，即失败

@end


@interface MZBindingChechSubModel : NSObject

@property (nonatomic, assign) BOOL online;                  //true标识在线，false标识不在线
@property (nonatomic, assign) int bindingStatus;            //0表示预绑定状态，1表示已绑定状态
@property (nonatomic, copy) NSString *openId;
@property (nonatomic, copy) NSString *snCode;               //设备唯一标识
@end
