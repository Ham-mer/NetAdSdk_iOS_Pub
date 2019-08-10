//
//  NetAdInterstitialAd.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NetAdTypes.h"
#import "NetAdInterstitialAdDelegate.h"
#import "NetAdInnerInterstitialAdDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@interface NetAdInterstitialAd : NSObject<NetAdInnerInterstitialAdDelegate>

@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
- (NetAdInterstitialAd *)initWithAdUnitId:(NSString *)adUnitId;
@property(nonatomic, weak) id<NetAdInterstitialAdDelegate> delegate;
/// iOS End

/// Unity Start
- (id)initWithInterstitialClientReference:(NetAdTypeInterstitialClientRef *)interstitialClient adUnitId:(NSString *)adUnitId;
/// A reference to the Unity interstitial client.
@property(nonatomic, assign) NetAdTypeInterstitialClientRef *interstitialClient;
/// The ad callback into Unity.
@property(nonatomic, assign) NetAdInterstitialDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) NetAdInterstitialDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) NetAdInterstitialWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) NetAdInterstitialDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) NetAdInterstitialWillLeaveApplicationCallback willLeaveCallback;
/// Unity End

- (void)setHE;
- (void)setCL:(int)cacheCount;
- (void)loadAd;
- (BOOL)isReady;
- (void)destroy;

/// iOS Start
- (void)showFromViewController:(nullable UIViewController *)viewController;
/// iOS End

/// Unity Start
- (void)showUnity;
- (void)showUnity:(nullable int [])networkIds;
/// Unity End

@end

NS_ASSUME_NONNULL_END
