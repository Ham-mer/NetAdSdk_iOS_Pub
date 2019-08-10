Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_GoogleAds"
  spec.version      = "7.42.2.0"
  spec.summary      = "GoogleAds Adapters for mediating through NetAdSdk."
  spec.homepage     = ""
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "", :tag => "googleads-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_GoogleAds/#{spec.version}/NetAdMediation_GoogleAds.framework"
  spec.dependency "Google-Mobile-Ads-SDK", "~> 7.42.2"
  spec.dependency "NetAdSdk", "~> 1.0.0"
end