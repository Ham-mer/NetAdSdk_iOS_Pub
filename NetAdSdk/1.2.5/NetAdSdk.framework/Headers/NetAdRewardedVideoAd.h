//
//  NetAdRewardedVideoAd.h

//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NetAdTypes.h"
#import "NetAdRewardedVideoAdDelegate.h"
#import "NetAdInnerRewardedVideoAdDelegate.h"

@interface NetAdRewardedVideoAd : NSObject<NetAdInnerRewardedVideoAdDelegate>

@property(nonatomic, readonly, nonnull) NSString *adUnitId;

/// iOS Start
- (nonnull id)initWithAdUnitId:(nonnull NSString *)adUnitId;
@property(nonatomic, weak, nullable) id<NetAdRewardedVideoAdDelegate> delegate;
/// iOS End

/// Unity Start
- (nonnull id)initWithRewardedVideoClientReference:(NetAdTypeRewardedVideoClientRef *)rewardedVideoClient adUnitId:(NSString *)adUnitId;
@property(nonatomic, assign) NetAdTypeRewardedVideoClientRef *rewardedVideoClient;
/// The ad callback into Unity.
@property(nonatomic, assign, nullable) NetAdRewardVideoDidReceiveAdCallback didReceivedCallback;
@property(nonatomic, assign, nullable) NetAdRewardVideoDidOpenCallback didOpenCallback;
@property(nonatomic, assign, nullable) NetAdRewardVideoWillLeaveApplicationCallback willLeaveCallback;
@property(nonatomic, assign, nullable) NetAdRewardVideoDidCloseCallback didCloseCallback;
@property(nonatomic, assign, nullable) NetAdRewardVideoDidFailToReceiveAdWithErrorCallback didFailToReceiveAdCallback;
@property(nonatomic, assign, nullable) NetAdRewardVideoDidStartCallback didStartCallback;
@property(nonatomic, assign, nullable) NetAdRewardVideoDidCompleteCallback didCompleteCallback;
@property(nonatomic, assign, nullable) NetAdRewardVideoDidRewardCallback didRewardCallback;
@property(nonatomic, assign, nullable) NetAdRewardVideoDidFailedToRewardCallback didFailedToRewardCallback;
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
