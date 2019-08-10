//
//  NetAdTrackerInfo.h
//  Created by Matthew on 2019/7/14.
//

#import <Foundation/Foundation.h>
#import "NetAdILineItem.h"

@interface NetAdTrackerInfo : NSObject

@property float eCPM;
@property int networkId;
@property NSString *lineItemAdUnitId;
@property NSString *adUnitId;
@property int adType;

- (NetAdTrackerInfo *)initWithLineItem:(NetAdILineItem *)lineItem;

@end
