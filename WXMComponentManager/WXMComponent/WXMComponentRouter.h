//
//  WQComponentRouter.h
//  ModulesProject
//
//  Created by edz on 2019/4/24.
//  Copyright © 2019年 wq. All rights reserved.
/** 建议不同模块以NSDictionary作为参数传递 由模型转字典传递出去 接收方字典转模型 */
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface WXMComponentRouter : NSObject

typedef void (^RouterCallBack)(NSDictionary *_Nullable);

+ (instancetype)sharedInstance;

/** 判断url是否可以打开 */
- (BOOL)canOpenUrl:(NSString *)url;

/** 打开url 例 push直接跳转 */
- (void)openUrl:(NSString *)url;
- (void)openUrl:(NSString *)url params:(NSDictionary *_Nullable)params;
- (void)openUrl:(NSString *)url callBack:(RouterCallBack _Nullable)callBack;

/** 返回结果(模块实现类实现协议) */
- (id)resultsOpenUrl:(NSString *)url;
- (id)resultsOpenUrl:(NSString *)url params:(NSDictionary * _Nullable)params;
- (id)resultsOpenUrl:(NSString *)url callBack:(RouterCallBack _Nullable)callBack;

/** controller作为实现协议对象 */
- (UIViewController *)viewControllerWithUrl:(NSString *)url;
- (UIViewController *)viewControllerWithUrl:(NSString *)url params:(NSDictionary * _Nullable)params;
- (UIViewController *)viewControllerWithUrl:(NSString *)url callBack:(RouterCallBack)callBack;

/** 发消息 */
- (void)sendMessageWithUrl:(NSString *)url;
- (void)sendMessageWithUrl:(NSString *)url params:(NSDictionary * _Nullable)params;
- (void)sendMessageWithUrl:(NSString *)url callBack:(RouterCallBack)callBack;

NS_ASSUME_NONNULL_END

@end

/**
 ** parameter获取数据
 NSString * url = @"parameter://WXMPhotoInterFaceProtocol/photoPermission";
 
 ** present push跳转
 NSString * url = @"present://WXMPhotoInterFaceProtocol/routeAchieveWXMPhotoViewController";
 NSString * url = @"push://WXMPhotoInterFaceProtocol/routeAchieveWXMPhotoViewController";
 
 ** component组件
 NSString * url = @"component://WXMPhotoInterFaceProtocol";
 
 ** sendMessage发消息
 NSString * url = @"sendMessage://WXMPhotoInterFaceProtocol/100";
 */

