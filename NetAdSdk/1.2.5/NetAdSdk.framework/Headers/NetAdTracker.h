//
//  NetAdTracker.h
//  Created by Matthew on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "NetAdTrackerDelegate.h"
#import "NetAdILineItem.h"
#import "NetAdTypes.h"

@interface NetAdTracker : NSObject

+ (NetAdTracker *)getInstance;

/// iOS Start
- (void)registerDelegate: (id <NetAdTrackerDelegate>)delegate;
- (void)unRegisterDelegate: (id <NetAdTrackerDelegate>)delegate;
/// iOS End

/// Unity Start
/// A reference to the Unity tracker client.
@property(nonatomic, assign) NetAdTypeTrackerClientRef *trackerClient;
/// The tracker callback into Unity.
@property(nonatomic, assign) NetAdTrackAdRequestCallback adRequestCallback;
@property(nonatomic, assign) NetAdTrackAdLoadedCallback adLoadedCallback;
@property(nonatomic, assign) NetAdTrackAdCallShowCallback adCallShowCallback;
@property(nonatomic, assign) NetAdTrackAdShownCallback adShownCallback;
@property(nonatomic, assign) NetAdTrackAdClickedCallback adClickedCallback;
@property(nonatomic, assign) NetAdTrackAdClosedCallback adClosedCallback;
@property(nonatomic, assign) NetAdTrackAdFailedToLoadCallback adFailedToLoadCallback;
@property(nonatomic, assign) NetAdTrackVideoStartedCallback videoStartedCallback;
@property(nonatomic, assign) NetAdTrackVideoCompletedCallback videoCompletedCallback;
@property(nonatomic, assign) NetAdTrackRewardedCallback rewardedCallback;
@property(nonatomic, assign) NetAdTrackRewardFailedCallback rewardFailedCallback;
/// Unity End

/// Common Start
- (void)trackAdRequest:(NetAdILineItem *)lineItem;
- (void)trackAdLoaded:(NetAdILineItem *)lineItem;
- (void)trackAdCallShow:(NetAdILineItem *)lineItem;
- (void)trackAdShown:(NetAdILineItem *)lineItem;
- (void)trackAdClicked:(NetAdILineItem *)lineItem;
- (void)trackAdClosed:(NetAdILineItem *)lineItem;
- (void)trackAdFailedToLoad:(NetAdILineItem *)lineItem;
- (void)trackVideoStarted:(NetAdILineItem *)lineItem;
- (void)trackVideoCompleted:(NetAdILineItem *)lineItem;
- (void)trackRewarded:(NetAdILineItem *)lineItem;
- (void)trackRewardFailed:(NetAdILineItem *)lineItem;
/// Common End

@end
