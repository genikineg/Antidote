//
//  AppearanceManager.h
//  Antidote
//
//  Created by Dmitry Vorobyov on 07.08.14.
//  Copyright (c) 2014 dvor. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AppearanceManagerColorscheme) {
    AppearanceManagerColorschemeIce = 0,
    __AppearanceManagerColorschemeCount,
};

@interface AppearanceManager : NSObject

@property (assign, nonatomic, readonly) AppearanceManagerColorscheme colorscheme;

- (instancetype)initWithColorscheme:(AppearanceManagerColorscheme)colorscheme;

- (UIFont *)fontHelveticaNeueWithSize:(CGFloat)size;
- (UIFont *)fontHelveticaNeueLightWithSize:(CGFloat)size;
- (UIFont *)fontHelveticaNeueBoldWithSize:(CGFloat)size;

- (UIColor *)linkYellowColor;

- (UIColor *)textMainColor;
- (UIColor *)lightGrayBackground;

- (UIColor *)statusOfflineColor;
- (UIColor *)statusOnlineColor;
- (UIColor *)statusAwayColor;
- (UIColor *)statusBusyColor;

- (UIColor *)bubbleIncomingColor;
- (UIColor *)bubbleOutgoingColor;

- (UIColor *)unreadChatCellBackground;
- (UIColor *)unreadChatCellBackgroundWithAlpha:(CGFloat)alpha;

- (UIColor *)textMainColorForScheme:(AppearanceManagerColorscheme)scheme;
- (UIColor *)bubbleIncomingColorForScheme:(AppearanceManagerColorscheme)scheme;

- (UIColor *)callRedColor;
- (UIColor *)callGreenColor;

- (UIColor *)loginBackgroundColor;
- (UIColor *)loginButtonColor;
- (UIColor *)loginNavigationBarColor;
- (UIColor *)loginDescriptionTextColor;

@end
