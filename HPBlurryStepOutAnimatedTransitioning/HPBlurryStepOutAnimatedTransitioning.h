//
//  HPBlurryStepOutAnimatedTransitioning.h
//  HPBlurryStepOutAnimatedTransitioning
//
//  Created by Hervé PEROTEAU on 04/01/2014.
//  Copyright (c) 2014 Hervé PEROTEAU. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HPBlurryStepOutAnimatedTransitioning : NSObject<UIViewControllerAnimatedTransitioning>

- (id) initWithPresenting: (BOOL)presenting;
- (NSTimeInterval) transitionDuration:(id<UIViewControllerContextTransitioning>)transitionContext;
- (void) animateTransition:(id<UIViewControllerContextTransitioning>)transitionContext;

@property (nonatomic, assign) NSTimeInterval presentationDuration;
@property (nonatomic, assign) NSTimeInterval dismissalDuration;
@property (nonatomic, assign) BOOL isPresenting;

@property (nonatomic, strong) UIColor *endColorBackground;

@end
