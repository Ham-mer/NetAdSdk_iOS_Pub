//
//  NetAdInterstitialAdDelegate.h
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "NetAdAdError.h"
@class NetAdInterstitialAd;

@protocol NetAdInterstitialAdDelegate<NSObject>

@optional
- (void)netAdInterstitialDidReceiveAd:(NetAdInterstitialAd *)interstitialAd;

@optional
- (void)netAdInterstitial:(NetAdInterstitialAd *)interstitialAd didFailToReceiveAdWithError:(NetAdAdError *)adError;

@optional
- (void)netAdInterstitialWillPresentScreen:(NetAdInterstitialAd *)interstitialAd;

@optional
- (void)netAdInterstitialDidDismissScreen:(NetAdInterstitialAd *)interstitialAd;

@optional
- (void)netAdInterstitialWillLeaveApplication:(NetAdInterstitialAd *)interstitialAd;

@end
