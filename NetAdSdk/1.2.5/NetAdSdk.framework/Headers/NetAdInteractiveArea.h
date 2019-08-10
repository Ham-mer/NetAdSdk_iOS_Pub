//
//  NetAdInteractiveArea.h
//  NetAdSdk
//
//  Created by Matthew on 2019/8/7.
//  Copyright © 2019年 NetAd. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_OPTIONS(NSUInteger, NetAdInteractiveView) {
    NETAD_INTERACTIVE_VIEW_TITLE = 1 << 0,
    NETAD_INTERACTIVE_VIEW_SUBTITLE = 1 << 1,
    NETAD_INTERACTIVE_VIEW_BODY =  1 << 2,
    NETAD_INTERACTIVE_VIEW_ADVERTISER = 1 << 3,
    NETAD_INTERACTIVE_VIEW_CALL_TO_ACTION = 1 << 4,
    NETAD_INTERACTIVE_VIEW_ICON = 1 << 5,
    NETAD_INTERACTIVE_VIEW_MEDIAVIEW = 1 << 6,
    NETAD_INTERACTIVE_VIEW_ADCHOICES = 1 << 7,
    NETAD_INTERACTIVE_VIEW_RATING_VIEW = 1 << 8,
    NETAD_INTERACTIVE_VIEW_RATING_LABEL = 1 << 9,
    NETAD_INTERACTIVE_VIEW_PRICE = 1 << 10,
    NETAD_INTERACTIVE_VIEW_STORE = 1 << 11
};

@interface NetAdInteractiveArea : NSObject

+(NetAdInteractiveArea *)builder;
+(NetAdInteractiveArea *)allArea;

-(NetAdInteractiveArea *)addTitle;
-(NetAdInteractiveArea *)addSubTitle;
-(NetAdInteractiveArea *)addBody;
-(NetAdInteractiveArea *)addAdvertiser;
-(NetAdInteractiveArea *)addCallToAction;
-(NetAdInteractiveArea *)addIcon;
-(NetAdInteractiveArea *)addMediaView;
-(NetAdInteractiveArea *)addAdChoices;
-(NetAdInteractiveArea *)addRatingView;
-(NetAdInteractiveArea *)addRatingLabel;
-(NetAdInteractiveArea *)addPrice;
-(NetAdInteractiveArea *)addStore;

-(BOOL)hasTitle;
-(BOOL)hasSubTitle;
-(BOOL)hasBody;
-(BOOL)hasAdvertiser;
-(BOOL)hasCallToAction;
-(BOOL)hasIcon;
-(BOOL)hasMediaView;
-(BOOL)hasAdChoices;
-(BOOL)hasRatingView;
-(BOOL)hasRatingLabel;
-(BOOL)hasPrice;
-(BOOL)hasStore;

@end
