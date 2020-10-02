//
//  VRTAnimatedComponent.h
//  React
//
//  Created by Vik Advani on 2/19/16.
//  Copyright © 2016 Viro Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>
#import "VRTView.h"
#import "VRTNode.h"

@interface VRTAnimatedComponent : VRTView
@property (nonatomic, copy) NSString *animation;
@property (nonatomic, assign) float delay;
@property (nonatomic, assign) BOOL loop;
@property (nonatomic, assign) BOOL run;
@property (nonatomic, strong) VRTNode *vroSubview;

@property (nonatomic, copy) RCTDirectEventBlock onAnimationStartViro;
@property (nonatomic, copy) RCTDirectEventBlock onAnimationFinishViro;

- (instancetype)initWithBridge:(RCTBridge *)bridge;

@end
