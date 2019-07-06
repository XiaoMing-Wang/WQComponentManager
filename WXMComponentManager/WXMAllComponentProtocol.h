//
//  WXMAllComponentProtocol.h
//  Multi-project-coordination
//
//  Created by wq on 2019/6/7.
//  Copyright © 2019年 wxm. All rights reserved.
//
#import <Foundation/Foundation.h>

typedef NSString *WXM_MESSAGE NS_STRING_ENUM;
@protocol WXMAllComponentProtocol <NSObject>

@end

static WXM_MESSAGE const WXM_MESSAGE_PHOTO_HEAD = @"PHOTO_HEAD";
@protocol WXMPhotoComponentProtocol <NSObject>

@end
