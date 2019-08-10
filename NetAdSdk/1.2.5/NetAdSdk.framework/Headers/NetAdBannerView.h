//
//  NetAdBannerAd.h
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NetAdTypes.h"
#import "NetAdBannerViewDelegate.h"
#import "NetAdBannerAdPosition.h"
#import "NetAdILineItem.h"

NS_ASSUME_NONNULL_BEGIN

@interface NetAdBannerView : UIView

@property(nonatomic, readonly) NSString *adUnitId;

/// iOS Start
- (id)initWithAdUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
@property(nonatomic, weak) id<NetAdBannerViewDelegate> delegate;
/// iOS End

/// Unity Start
- (id)initWithBannerClientReference:(NetAdTypeBannerClientRef *)bannerClient adUnitId:(NSString *)adUnitId rootViewController:(UIViewController *)viewController;
// 引用 Unity 的 BannerClient
@property(nonatomic, assign) NetAdTypeBannerClientRef *bannerClient;
// 广告加载后，回调到 Unity 的接口
@property(nonatomic, assign) NetAdBannerAdDidReceiveAdCallback adReceivedCallback;
@property(nonatomic, assign) NetAdBannerAdDidFailToReceiveAdWithErrorCallback adFailedCallback;
@property(nonatomic, assign) NetAdBannerAdWillPresentScreenCallback willPresentCallback;
@property(nonatomic, assign) NetAdBannerAdDidDismissScreenCallback didDismissCallback;
@property(nonatomic, assign) NetAdBannerAdWillLeaveApplicationCallback willLeaveCallback;
/// Unity End

- (void)setHE;
- (BOOL)isReady;
- (NetAdILineItem *)getReadyLineItem;
- (void)destroy;

/// iOS Start
- (void)loadAd;
/// iOS End

/// Unity Start
- (void)loadAdUnity;

- (void)showUnity:(NetAdBannerAdPosition)position;
- (void)showUnityWithX:(int)x andY:(int)y;

- (void)showUnity:(NetAdBannerAdPosition)position inNetworks:(nonnull int[])networkIds;
- (void)showUnityWithX:(int)x andY:(int)y inNetworks:(nonnull int[])networkIds;

- (void)setUnityPosition:(NetAdBannerAdPosition)position;
- (void)setUnityPositionWithX:(int)x andY:(int)y;

- (void)hideUnity;

- (void)removeUnity;
/// Unity End

@end

NS_ASSUME_NONNULL_END
