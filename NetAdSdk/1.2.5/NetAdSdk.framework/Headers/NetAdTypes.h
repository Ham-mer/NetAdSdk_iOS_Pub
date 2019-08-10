//
//  NetAdTypes.h

//
// 定义了与 Unity 交互的一些类型和广告回调接口。


/// Common
typedef const void *NetAdTypeRef;


/// BannerAd
// 对 Unity 中 BannerAd 和 BannerAdClient 的引用。
typedef const void *NetAdTypeBannerClientRef;
typedef const void *NetAdTypeBannerAdRef;
// iOS NetAdBannerAd 加载后回调 Unity 的接口。
typedef void (*NetAdBannerAdDidReceiveAdCallback)(NetAdTypeBannerClientRef *bannerClient);
typedef void (*NetAdBannerAdDidFailToReceiveAdWithErrorCallback)(NetAdTypeBannerClientRef *bannerClient, int error, char *message);
typedef void (*NetAdBannerAdWillPresentScreenCallback)(NetAdTypeBannerClientRef *bannerClient);
typedef void (*NetAdBannerAdDidDismissScreenCallback)(NetAdTypeBannerClientRef *bannerClient);
typedef void (*NetAdBannerAdWillLeaveApplicationCallback)(NetAdTypeBannerClientRef *bannerClient);


/// InterstitialAd
// 对 Unity 中 InterstitialAd 和 InterstitialClient 的引用。
typedef const void *NetAdTypeInterstitialClientRef;
typedef const void *NetAdTypeInterstitialAdRef;
// iOS NetAdInterstitialAd 加载后回调 Unity 的接口。
typedef void (*NetAdInterstitialDidReceiveAdCallback)(NetAdTypeInterstitialClientRef *interstitialClient);
typedef void (*NetAdInterstitialDidFailToReceiveAdWithErrorCallback)(NetAdTypeInterstitialClientRef *interstitialClient, int error, char *message);
typedef void (*NetAdInterstitialWillPresentScreenCallback)(NetAdTypeInterstitialClientRef *interstitialClient);
typedef void (*NetAdInterstitialDidDismissScreenCallback)(NetAdTypeInterstitialClientRef *interstitialClient);
typedef void (*NetAdInterstitialWillLeaveApplicationCallback)(NetAdTypeInterstitialClientRef *interstitialClient);


/// RewardedVideoAd
// 对 Unity 中 RewardedVideoAd 和 RewardedVideoClient 的引用。
typedef const void *NetAdTypeRewardedVideoClientRef;
typedef const void *NetAdTypeRewardedVideoAdRef;
// iOS NetAdRewardedVideoAd 加载后回调 Unity 的接口。
typedef void (*NetAdRewardVideoDidReceiveAdCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*NetAdRewardVideoDidOpenCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*NetAdRewardVideoWillLeaveApplicationCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*NetAdRewardVideoDidCloseCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*NetAdRewardVideoDidFailToReceiveAdWithErrorCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient, int error, char *message);
typedef void (*NetAdRewardVideoDidStartCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*NetAdRewardVideoDidCompleteCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient);
typedef void (*NetAdRewardVideoDidRewardCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient, char *rewardType, int rewardAmount);
typedef void (*NetAdRewardVideoDidFailedToRewardCallback)(NetAdTypeRewardedVideoClientRef *rewardedVideoClient);

/// NetAdTracker
typedef const void *NetAdTypeTrackerClientRef;
typedef const void *NetAdTypeTrackerRef;
typedef void (*NetAdTrackAdRequestCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackAdLoadedCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackAdCallShowCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackAdShownCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackAdClickedCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackAdClosedCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackAdFailedToLoadCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackVideoStartedCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackVideoCompletedCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackRewardedCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
typedef void (*NetAdTrackRewardFailedCallback)(NetAdTypeTrackerClientRef *trackerClientRef,
											 float eCPM, int networkId, char *lineItemAdUnitId, char *adUnitId, int adType);
