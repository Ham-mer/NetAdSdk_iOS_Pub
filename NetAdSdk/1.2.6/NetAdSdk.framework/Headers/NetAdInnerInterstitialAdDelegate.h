//
//  NetAdInterstitialAdDelegate.h

//

#import <Foundation/Foundation.h>
#import "NetAdAdError.h"

@protocol NetAdInnerInterstitialAdDelegate<NSObject>

- (void)interstitialDidReceiveAd:(NSString *)lineItemId;
- (void)interstitial:(NSString *)lineItemId didFailToReceiveAdWithError:(NetAdAdError *)adError;
- (void)interstitialWillPresentScreen:(NSString *)lineItemId;
- (void)interstitialDidDismissScreen:(NSString *)lineItemId;
- (void)interstitialWillLeaveApplication:(NSString *)lineItemId;

@end
