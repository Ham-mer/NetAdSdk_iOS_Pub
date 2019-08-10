//
//  NetAdRewardedVideoAdDelegate.h

//

#import <Foundation/Foundation.h>
#import "NetAdAdError.h"
#import "NetAdRewardItem.h"

@protocol NetAdInnerRewardedVideoAdDelegate<NSObject>

- (void)rewardedVideoDidReceiveAd:(NSString *)lineItemId;
- (void)rewardedVideoDidOpen:(NSString *)lineItemId;
- (void)rewardedVideoWillLeaveApplication:(NSString *)lineItemId;
- (void)rewardedVideoDidClose:(NSString *)lineItemId;
- (void)rewardedVideo:(NSString *)lineItemId didFailToReceiveAdWithError:(NetAdAdError *)adError;
- (void)rewardedVideoDidStart:(NSString *)lineItemId;
- (void)rewardedVideoDidComplete:(NSString *)lineItemId;
- (void)rewardedVideo:(NSString *)lineItemId didReward:(NetAdRewardItem *)item;
- (void)rewardedVideoDidFailedToReward:(NSString *)lineItemId;

@end
