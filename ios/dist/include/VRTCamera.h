//
//  VRTCamera.h
//  React
//
//  Created by Raj Advani on 10/5/16.
//  Copyright © 2016 Viro Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>
#import "VRTNode.h"


@interface VRTCamera : VRTNode

- (instancetype)initWithBridge:(RCTBridge *)bridge;

- (VROCameraRotationType)rotationType;

- (void)setPosition:(NSArray<NSNumber *> *)position;

@property (nonatomic, assign) float fieldOfView;
@property (nonatomic, copy) NSArray<NSNumber *> *position;
@property (readonly, nonatomic) std::shared_ptr<VRONodeCamera> nodeCamera;
@property (readonly, nonatomic) std::shared_ptr<VRONode> nodeRootTransformCamera;

@end
