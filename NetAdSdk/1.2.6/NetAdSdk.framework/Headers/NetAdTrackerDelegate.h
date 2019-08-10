//
//  NetAdTrackerDelegate.h
//  Created by Matthew on 2019/7/14.
//

#import "NetAdTrackerInfo.h"

@protocol NetAdTrackerDelegate<NSObject>

// 请求广告
@optional
- (void)netAdTrackAdRequest:(NetAdTrackerInfo *)trackInfo;

// 请求广告成功
@optional
- (void)netAdTrackAdLoaded:(NetAdTrackerInfo *)trackInfo;

// App 展示广告
@optional
- (void)netAdTrackAdCallShow:(NetAdTrackerInfo *)trackInfo;

// 广告得到展示
@optional
- (void)netAdTrackAdShown:(NetAdTrackerInfo *)trackInfo;

// 点击广告
@optional
- (void)netAdTrackAdClicked:(NetAdTrackerInfo *)trackInfo;

// 广告关闭
@optional
- (void)netAdTrackAdClosed:(NetAdTrackerInfo *)trackInfo;

// 请求广告失败
@optional
- (void)netAdTrackAdFailedToLoad:(NetAdTrackerInfo *)trackInfo;

// 激励视频开始播放
@optional
- (void)netAdTrackAdVideoStarted:(NetAdTrackerInfo *)trackInfo;

// 激励视频播放结束
@optional
- (void)netAdTrackAdVideoCompleted:(NetAdTrackerInfo *)trackInfo;

// 激励成功
@optional
- (void)netAdTrackAdRewarded:(NetAdTrackerInfo *)trackInfo;

// 激励失败
@optional
- (void)netAdTrackAdRewardFailed:(NetAdTrackerInfo *)trackInfo;

@end
