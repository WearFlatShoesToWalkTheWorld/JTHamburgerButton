//
//  JTHamburgerButton.h
//  JTHamburgerButton
//
//  Created by Jonathan Tribouharet
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, JTHamburgerButtonMode) {
    JTHamburgerButtonModeHamburger,
    JTHamburgerButtonModeBack,
    JTHamburgerButtonModeCross
};

@interface JTHamburgerButton : UIButton

@property (nonatomic) CGFloat lineHeight;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat lineSpacing;
@property (nonatomic) UIColor *lineColor;

@property (nonatomic) JTHamburgerButtonMode currentMode;

- (void)setCurrentMode:(JTHamburgerButtonMode)currentMode withAnimation:(CGFloat)duration;

- (void)updateAppearance;

@end