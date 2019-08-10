//
//  AdError.h
//

#import "NetAdNetwork.h"

typedef NS_ENUM(NSUInteger, NetAdAdErrorCode) {
    NETAD_ADERROR_INTERNAL_ERROR = 0, // 内部错误
    NETAD_ADERROR_INVALID_REQUEST = 1, // 无效请求，请求过于频繁等，广告位无效等
    NETAD_ADERROR_NETWORK_ERROR = 2, // 网络错误
    NETAD_ADERROR_NO_FILL = 3, // 无广告填充
    NETAD_ADERROR_TIMEOUT = 4 // 超时
};

@interface NetAdAdError : NSObject

+(NetAdAdError *)InternalError;
+(NetAdAdError *)InvalidRequest;
+(NetAdAdError *)NetworkError;
+(NetAdAdError *)NoFill;
+(NetAdAdError *)TimeOut;

-(NetAdAdErrorCode)getCode;
-(NetAdAdError *)appendErrorCode:(int)errorCode;
-(NetAdAdError *)appendErrorMessage:(NSString *)message;
-(NetAdAdError *)appendErrorCode:(int)errorCode withMessage:(NSString *)message;

-(NetAdAdError *)innerMessage:(NSString *)message;
-(NetAdAdError *)innerNetwork:(NetAdNetwork *)network;
-(NetAdAdError *)innerAdUnitName:(NSString *)adUnitName;
-(NetAdAdError *)innerAdUnitId:(NSString *)adUnitId;
-(NetAdAdError *)innerLineItemParams:(NSString *)lineItemParams;

@end
