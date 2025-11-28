//
//  FlyVerify.h
//  FlyVerify
//
//  Created by fly on 2020/9/27.
//  Copyright © 2020 fly. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FlyVerifyDefine.h"

//SDK版本号
#define KFLYSDKVersion @"13.7.8"
//产品标识
#define KFLYIdentifier @"FLYVERIFY"


typedef void(^FlySDKVerifyResultHander)(NSDictionary * _Nullable resultDic, NSError * _Nullable error);

@interface FlyVerify : NSObject

#pragma mark - 一键登录
/**
 * 预登录
 *
 * 此调用将有助于提高拉起授权页的速度和成功率
 * 不建议频繁多次调用和拉起授权页后调用
 * 预登录方法回调为dispatch_get_global_queue(0, 0)，非主线程，UI操作请手动切换到主线程
 * 建议在一键登录前提前调用此方法，比如调一键登录的vc的viewdidload中
 * 以 if (error == nil) 为判断成功的依据，而非返回码
 * 预登录成功后，脱敏手机号相关信息在回调的resultDic中获取
 *
 * 成功返回示例:
 * resultDic:
 * {
     operator = CUCC;
     securityPhone = "131****0605";
     uiElement =     {
         privacyName = "联通统一认证服务条款";
         privacyUrl = "https://www.example.com/sdk/agreement";
         slogan = "中国联通提供认证服务";
     };
 }
 * 返回字段说明：
 * securityPhone：脱敏手机号（必须在授权页显示此脱敏手机号）
 * operator：预取号时的当前运营商类型，CTCC：电信、CMCC：移动、CUCC：联通
 * uiElement->privacyName：运营商协议名称（必须在授权页显示此运营商协议，且可查看协议详情）
 * uiElement->privacyUrl：运营商协议链接（用于查看运营商协议web页详情，配合protocolName使用）
 * uiElement->slogan：运营商取号能力标识（建议在授权页显示此标识，否则可能影响一键登录取号能力）

*/
+ (void)preGetPhoneNumber:(nullable FlySDKVerifyResultHander)handler;



/**
 * 获取Token
*/
+(void)getLoginToken:(nullable FlySDKVerifyResultHander)handler;




#pragma mark - 设置超时
/**
 设置预取号超时 单位:s
 大于0有效
 建议4s左右，默认4s
 */
+ (void)setPreGetPhonenumberTimeOut:(NSTimeInterval)preGetPhoneTimeOut;
/**
 设置获取token超时 单位:s
 大于0有效
 建议4s左右，默认4s
 */
+ (void)setGetLoginTokenTimeOut:(NSTimeInterval)loginAuthTimeOut;

#pragma mark - 开启DEBUG
/**
开启debug模式

@param enable 是否开启debug模式
*/
+ (void)setDebug:(BOOL)enable;

/**
 获取当前流量卡运营商（结果仅供参考）
 移动 @"CMCC" 联通 @"CUCC" 电信 @"CTCC" 未识别 @"UNKNOW"
 */
+ (NSString *_Nullable)operatorInfo;

+ (void)setupCurrentOperatorType:(FlyVerifyOperatorType)type;

@end

