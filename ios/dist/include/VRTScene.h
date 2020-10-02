//
//  VRTScene.h
//  React
//
//  Created by Vik Advani on 12/11/15.
//  Copyright © 2015 Viro Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTBridge.h>
#import "VRTNode.h"
#import "VRTCamera.h"

@interface VRTScene : VRTNode<VROSceneDelegateProtocol>

@property (nonatomic, assign) BOOL recticleEnabled;
@property (nonatomic, copy, nullable) RCTDirectEventBlock onPlatformUpdateViro;
@property (nonatomic, copy) NSDictionary *physicsWorld;
@property (nonatomic, readwrite) std::shared_ptr<VROSceneControllerDelegateiOS> delegate;
@property (nonatomic, readwrite) std::shared_ptr<VROSceneController> sceneController;
@property (nonatomic, copy, nullable) NSArray<NSString *> *postProcessEffects;
@property (nonatomic, copy, nullable) RCTDirectEventBlock onCameraTransformUpdateViro;
@property (nonatomic, assign) BOOL canCameraTransformUpdate;

- (instancetype)initWithBridge:(RCTBridge *)bridge;
- (void) initSceneController;

- (std::shared_ptr<VROSceneController>)sceneController;
- (NSArray<NSNumber *> *)cameraOrientation;

- (void)setView:(id <VROView>)view;
- (id<VROView>)getVROView;
- (void)setCamera:(VRTCamera *)camera;
- (void)removeCamera:(VRTCamera *)camera;
- (void)setSoundRoom:(NSDictionary *)soundRoom;

@end
