//
//  FlyVerifyDefine.h
//  FlyVerifyDefine
//
//  Created by fly on 2019/5/17.
//  Copyright © 2019 fly. All rights reserved.
//

#ifndef FlyVerifyDefine_h
#define FlyVerifyDefine_h

#import <Foundation/Foundation.h>
/**
 获取的运营商类型
 **/
typedef NS_ENUM(NSUInteger, FlyVerifyOperatorType) {
    FlyVerifyOperatorUnkown = 0,  //未知
    FlyVerifyOperatorMobile = 1, //移动
    FlyVerifyOperatorUnion = 2,  //联通
    FlyVerifyOperatorTelecom = 3, //电信
    FlyVerifyOperatorMobileHK = 4, //香港移动
    FlyVerifyOperatorNone = 999 //无运营商
};


#endif /* FlyVerifyDefine_h */
