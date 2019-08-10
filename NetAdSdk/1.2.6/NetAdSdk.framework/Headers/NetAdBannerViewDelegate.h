//
//  NetAdBannerViewDelegate.h
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "NetAdAdError.h"
@class NetAdBannerView;

@protocol NetAdBannerViewDelegate<NSObject>

@optional
- (void)netAdBannerDidReceiveAd:(NetAdBannerView *)bannerView;

@optional
- (void)netAdBanner:(NetAdBannerView *)bannerView didFailToReceiveAdWithError:(NetAdAdError *)adError;

@optional
- (void)netAdBannerWillPresentScreen:(NetAdBannerView *)bannerView;

@optional
- (void)netAdBannerDidDismissScreen:(NetAdBannerView *)bannerView;

@optional
- (void)netAdBannerWillLeaveApplication:(NetAdBannerView *)bannerView;

@end
