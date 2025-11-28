//
//  FlyVerifyCSDK+Privacy.h
//  FlyVerifyCSDK
//
//  Created by flyverify on 2020/1/21.
//  Copyright © 2020 flyverify. All rights reserved.
//

#import <FlyVerifyCSDK/FlyVerifyC.h>
#import <UIKit/UIKit.h>

#ifndef FlyVerifyCSDK_Privacy_h
#define FlyVerifyCSDK_Privacy_h

@interface FlyVerifyC (Privacy)

/**
 同意隐私协议授权状态
 @param isAgree 是否同意（用户授权后的结果）
 */
+ (void)agreePrivacy:(BOOL)isAgree
            onResult:(void (^_Nullable)(BOOL success))handler;
@end


#endif /* FlyVerifyCSDK_Privacy_h */
