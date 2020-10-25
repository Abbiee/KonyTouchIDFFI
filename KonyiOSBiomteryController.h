//
//  KonyiOSBiomteryController.h
//  TouchId
//
//  Created by State Bank Of India on 27/04/17.
//  Copyright © 2017 UST. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "lglobals.h"
NS_ASSUME_NONNULL_BEGIN

@interface KonyiOSBiomteryController : UIViewController
- (void)authenicateButtonTapped:(CallBack*)callBack;
+(id)sharedManager;

@end

NS_ASSUME_NONNULL_END
