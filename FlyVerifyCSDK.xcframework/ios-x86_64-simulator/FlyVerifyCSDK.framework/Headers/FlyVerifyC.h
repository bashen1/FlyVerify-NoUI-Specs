//
//  FlyVerifyC.h
//  FlyVerifyCSDK
//
//  Created by flyverify on 17/2/23.
//  Copyright © 2017年 FlyVerify. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 FlyVerifyC
 */
@interface FlyVerifyC : NSObject

/**
 获取版本号

 @return 版本号
 */
+ (NSString * _Nonnull)version;

/**
 获取应用标识
 
 @return 应用标识
 */
+ (NSString * _Nullable)flyVerifyKey;

/**
 获取应用密钥

 @return 应用密钥
 */
+ (NSString * _Nullable)flyVerifySecret;

/**
 初始化key、secret

 @param key key
 @param secret secret
 */
+ (void)initKey:(NSString * _Nonnull)key
         secret:(NSString * _Nonnull)secret;

/**
 注册key、secret

 @param key key
 @param secret secret
 @param level 隐私协议级别(需要同意一次=2,不需要同意=0,建议使用2,避免政策变动，功能不可用)
 */
+ (void)initKey:(NSString * _Nonnull)key
         secret:(NSString * _Nonnull)secret
      privacyLevel:(int)level;

@end
