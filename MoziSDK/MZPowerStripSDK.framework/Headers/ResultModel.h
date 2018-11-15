//
//  ResultModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/14.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ResultModel : NSObject
@property (nonatomic,copy) NSString *message;
@property (nonatomic,assign) int code;
@property (nonatomic,strong) NSDictionary *data;
@end
