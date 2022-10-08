//
//  ZZSwitch.h
//
//  Created by LXJ on 2017/11/24.
//

#import <UIKit/UIKit.h>

@protocol ZZSwitchDelegate;

@interface ZZSwitch : UIView

/**
 switch on color
 */
@property (nonatomic, strong) UIColor *onColor;

/**
 switch off color
 */
@property (nonatomic, strong) UIColor *offColor;

/**
 dot on color
 */
@property (nonatomic, strong) UIColor *circleOnColor;

/**
 dot off color
 */
@property (nonatomic, strong) UIColor *circleOffColor;


/**
 border on color
 */
@property (nonatomic, strong) UIColor *borderOnColor;

/**
 border off color
 */
@property (nonatomic, strong) UIColor *borderOffColor;

/**
 dot moving time
 */
@property (nonatomic, assign) CGFloat animationDuration;


/**
 the switch status is or isn't on
 */
@property (nonatomic, assign) BOOL on;


@property (nonatomic, weak) id <ZZSwitchDelegate> delegate;

@end

@protocol ZZSwitchDelegate <NSObject>

@optional

- (void)animationDidStopForSwitch:(ZZSwitch *)switchView;

- (void)valueDidChanged:(ZZSwitch *)switchView on:(BOOL)on;

@end
