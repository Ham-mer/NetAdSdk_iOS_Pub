//
//  NetAdNativeAdDelegate.h
//  Created by Matthew on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import "NetAdAdError.h"
@class NetAdNativeAd;

@protocol NetAdNativeAdDelegate<NSObject>

@optional
- (void)netAdNativeAdDidReceiveAd:(NetAdNativeAd *)nativeAd;

@optional
- (void)netAdNativeAd:(NetAdNativeAd *)nativeAd didFailToReceiveAdWithError:(NetAdAdError *)adError;

@optional
- (void)netAdNativeAdWillPresentScreen:(NetAdNativeAd *)nativeAd;

@optional
- (void)netAdNativeAdDidDismissScreen:(NetAdNativeAd *)nativeAd;

@optional
- (void)netAdNativeAdWillLeaveApplication:(NetAdNativeAd *)nativeAd;

@end
