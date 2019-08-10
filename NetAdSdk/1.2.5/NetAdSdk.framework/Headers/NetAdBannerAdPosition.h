//
//  NetAdBannerAdPosition.h
//

/// Positions to place an banner ad on Unity Platform.
typedef NS_ENUM(NSInteger, NetAdBannerAdPosition) {
    NetAdBannerAdPos_Custom = -1,      // Custom ad position: (x,y)
    NetAdBannerAdPos_Top = 0,          // Top of screen.
    NetAdBannerAdPos_Bottom = 1,       // Bottom of screen.
    NetAdBannerAdPos_TopLeft = 2,      // Top left of screen.
    NetAdBannerAdPos_TopRight = 3,     // Top right of screen.
    NetAdBannerAdPos_BottomLeft = 4,   // Bottom left of screen.
    NetAdBannerAdPos_BottomRight = 5,  // Bottom right of screen.
    NetAdBannerAdPos_Center = 6        // Center of screen.
};
