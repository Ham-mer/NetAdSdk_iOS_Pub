//
//  NetAdNativeAd.h
//  Created by Matthew on 2019/6/20.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NetAdNativeAdDelegate.h"
#import "NetAdNativeAdLayout.h"

NS_ASSUME_NONNULL_BEGIN

@interface NetAdNativeAd : NSObject

@property(nonatomic, readonly, nonnull) NSString *adUnitId;

- (NetAdNativeAd *)initWithAdUnitId:(NSString *)adUnitId;
@property(nonatomic, weak, nullable) id<NetAdNativeAdDelegate> delegate;

- (void)setNativeAdLayout:(NetAdNativeAdLayout *)layout;
- (void)setHE;
- (void)loadAd;
- (BOOL)isReady;
- (UIView *)getAdView;
- (UIView *)getAdView:(NetAdNativeAdLayout *)layout;
- (void)destroy;

@end

NS_ASSUME_NONNULL_END
