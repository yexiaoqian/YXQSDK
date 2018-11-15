//
//  MZAuthorizationProtocol.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/11.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^moziCallbackBlock)(ResultModel *resultModel);

@protocol MZAuthorizationProtocol <NSObject>

#pragma mark ---用户登录
/**
 *  用户登录
 *
 *  username            用户名（手机号）
 *  password            密码
 *  clientid            客户端id
 *  clientsecret        客户端密码
 *
 **/
- (void)mzAuthorizationUsername:(NSString *)username Password:(NSString *)password Clientid:(NSString *)clientid Clientsecret:(NSString *)clientsecret MoziCallbackBlock:(moziCallbackBlock)callbackBlock;

/**
 *  用户查询token
 *
 **/
- (NSString *)mzAuthorizationToken;
/**
 *  用户清除token
 *
 **/
- (void)mzClearAuthorizationToken;
@end
