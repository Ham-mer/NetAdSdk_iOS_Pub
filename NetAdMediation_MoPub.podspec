Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_MoPub"
  spec.version      = "5.6.0.0"
  spec.summary      = "MoPub Adapters for mediating through NetAdSdk."
  spec.homepage     = ""
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "", :tag => "mopub-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_MoPub/#{spec.version}/NetAdMediation_MoPub.framework"
  spec.dependency 'mopub-ios-sdk', '~> 5.6.0'
  spec.dependency "NetAdSdk", "~> 1.0.0"
end