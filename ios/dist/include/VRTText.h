//
//  VRTText.h
//  React
//
//  Created by Vik Advani on 1/12/16.
//  Copyright © 2017 Viro Media. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <React/RCTTextDecorationLineType.h>
#import <React/RCTConvert.h>
#import "VRTControl.h"


@interface VRTText : VRTControl

- (instancetype)initWithBridge:(RCTBridge *)bridge;

@property (nonatomic, strong) UIColor *color;
@property (nonatomic, copy) NSString *fontFamily;
@property (nonatomic, assign) CGFloat fontSize;
@property (nonatomic, assign) VROFontWeight fontWeight;
@property (nonatomic, assign) VROFontStyle fontStyle;
@property (nonatomic, assign) NSUInteger maxLines;
@property (nonatomic, assign) VROTextHorizontalAlignment textAlign;
@property (nonatomic, assign) VROTextVerticalAlignment textAlignVertical;
@property (nonatomic, assign) VROLineBreakMode textLineBreakMode;
@property (nonatomic, assign) VROTextClipMode textClipMode;
@property (nonatomic, assign) float width;
@property (nonatomic, assign) float height;
@property (nonatomic, assign) float extrusionDepth;
@property (nonatomic, assign) VROTextOuterStroke outerStrokeType;
@property (nonatomic, assign) int outerStrokeWidth;
@property (nonatomic, strong) UIColor *outerStrokeColor;
@property (readwrite, nonatomic) NSDictionary *outerStroke;

@end

@interface RCTConvert (VRTText)

+ (VROTextHorizontalAlignment)VROTextHorizontalAlignment:(id)json;
+ (VROTextVerticalAlignment)VROTextVerticalAlignment:(id)json;
+ (VROLineBreakMode)VROLineBreakMode:(id)json;
+ (VROTextClipMode)VROTextClipMode:(id)json;
+ (VROFontStyle)VROFontStyle:(id)json;
+ (VROFontWeight)VROFontWeight:(id)json;

@end
