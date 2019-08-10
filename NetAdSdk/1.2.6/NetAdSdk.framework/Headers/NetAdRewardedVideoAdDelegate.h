//
//  NetAdRewardedVideoAdDelegate.h

//
//  iOS 广告回调。

#import <Foundation/Foundation.h>
#import "NetAdAdError.h"
#import "NetAdRewardItem.h"
@class NetAdRewardedVideoAd;

@protocol NetAdRewardedVideoAdDelegate<NSObject>

@optional
- (void)netAdRewardedVideoDidReceiveAd:(NetAdRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)netAdRewardedVideoDidOpen:(NetAdRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)netAdRewardedVideoWillLeaveApplication:(NetAdRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)netAdRewardedVideoDidClose:(NetAdRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)netAdRewardedVideo:(NetAdRewardedVideoAd *)rewardedVideoAd didFailToReceiveAdWithError:(NetAdAdError *)adError;

@optional
- (void)netAdRewardedVideoDidStart:(NetAdRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)netAdRewardedVideoDidComplete:(NetAdRewardedVideoAd *)rewardedVideoAd;

@optional
- (void)netAdRewardedVideo:(NetAdRewardedVideoAd *)rewardedVideoAd didReward:(NetAdRewardItem *)item;

@optional
- (void)netAdRewardedVideoDidFailedToReward:(NetAdRewardedVideoAd *)rewardedVideoAd;

@end
