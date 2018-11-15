//
//  MZSaveManagerProtocol.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/12.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MZAuthorizationModel.h"

@protocol MZSaveManagerProtocol <NSObject>

/**
 *
 *  存储   userID         用户唯一标识ID
 *
 */
- (BOOL)saveUserID:(NSString *)userID;



/**
 *
 *  0,开发环境 1,测试环境 2，预生产环境 3，生产环境
 *
 */
- (void)changeBaseUrl:(int)urlType;

@end
