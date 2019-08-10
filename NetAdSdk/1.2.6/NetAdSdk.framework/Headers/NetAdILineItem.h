//
//  NetAdILinItem.h
//  Created by Matthew on 2019/6/24.
//

#import <Foundation/Foundation.h>
#import "NetAdNetwork.h"
#import "NetAdBannerAdSize.h"

@interface NetAdILineItem : NSObject

-(NSString *)getName;

-(NetAdNetwork *)getNetwork;

-(int)getPriority;

-(float)getEcpm;

-(NetAdBannerAdSize)getBannerAdSize;

-(NSDictionary *)getServerExtras;

@end
