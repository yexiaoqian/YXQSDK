//
//  MZAuthorizationModel.h
//  MZPowerStripSDK
//
//  Created by mozi on 2018/9/14.
//  Copyright © 2018年 MoZi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MZAuthorizationModel : NSObject <NSCoding>
@property (nonatomic, copy) NSString *access_token;
@property (nonatomic, copy) NSString *token_type;
@property (nonatomic, copy) NSString *refresh_token;
@property (nonatomic, copy) NSString *scope;
@property (nonatomic, copy) NSString *userName;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic, copy) NSString *tid;
@property (nonatomic, copy) NSString *jti;
@property (nonatomic, copy) NSString *expires_in;
@property (nonatomic, copy) NSString *openId;
@end
