//
//  VRTController.h
//  React
//
//  Copyright © 2017 Viro Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>
#import "VRTView.h"


@interface VRTController : VRTView<VROEventDelegateProtocol>

@property (nonatomic, copy, nullable) RCTDirectEventBlock onClickViro;
@property (nonatomic, copy, nullable) RCTDirectEventBlock onFuseViro;
@property (nonatomic, copy, nullable) RCTDirectEventBlock onRotateViro;
@property (nonatomic, copy, nullable) RCTDirectEventBlock onPinchViro;

@property (nonatomic, assign) BOOL canClick;
@property (nonatomic, assign) BOOL canFuse;
@property (nonatomic, assign) BOOL canRotate;
@property (nonatomic, assign) BOOL canPinch;

- (instancetype) initWithBridge:(RCTBridge *)bridge;
- (void) onClick:(int)source node:(std::shared_ptr<VRONode>)node clickState:(VROEventDelegate::ClickState)clickState;
- (NSArray<NSNumber *> *) getControllerForwardVector;

@end
