Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_AppLovin"
  spec.version      = "6.8.0.1"
  spec.summary      = "AppLovin Adapters for mediating through NetAdSdk."
  spec.homepage     = "https://github.com/Ham-mer/NetAdSdk_iOS_Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/Ham-mer/NetAdSdk_iOS_Pub.git", :tag => "applovin-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_AppLovin/#{spec.version}/NetAdMediation_AppLovin.framework"
  spec.dependency 'AppLovinSDK', '~> 6.8.0'
  spec.dependency "NetAdSdk", "~> 1.2.5"
end