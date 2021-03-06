//
//  WQComponentManager.h
//  ModulesProject
//
//  Created by wq on 2019/4/19.
//  Copyright © 2019年 wq. All rights reserved.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "WXMComponentConfiguration.h"

NS_ASSUME_NONNULL_BEGIN
@interface WXMComponentManager : NSObject

+ (instancetype)sharedInstance;

/* 注册target 和 protocol */
- (void)addService:(NSString *)target protocol:(NSString *)protocol;

/** 获取target对象(多个service)*/
- (id)serviceProvideForProtocol:(Protocol *)protocol;
- (id)serviceCacheProvideForProtocol:(Protocol *)protocol;

/** 删除target对象 */
- (void)removeServiceCacheForProtocol:(Protocol *)protocol;
- (void)removeServiceCache:(id)service;

/** 是否存在缓存 */
- (BOOL)exsitCacheServiceCache:(id)service;
@end

NS_ASSUME_NONNULL_END
