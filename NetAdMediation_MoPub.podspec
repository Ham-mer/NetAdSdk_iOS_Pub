Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_MoPub"
  spec.version      = "5.6.0.3"
  spec.summary      = "MoPub Adapters for mediating through NetAdSdk."
  spec.homepage     = "https://github.com/Ham-mer/NetAdSdk_iOS_Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/Ham-mer/NetAdSdk_iOS_Pub.git", :tag => "mopub-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_MoPub/#{spec.version}/NetAdMediation_MoPub.framework"
  spec.dependency 'mopub-ios-sdk', '~> 5.6.0'
  spec.dependency "NetAdSdk", "~> 1.2.5"
end