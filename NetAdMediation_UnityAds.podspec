Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_UnityAds"
  spec.version      = "3.1.0.0"
  spec.summary      = "UnityAds Adapters for mediating through NetAdSdk."
  spec.homepage     = ""
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "8.1"
  spec.source       = { :git => "", :tag => "unityads-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_UnityAds/#{spec.version}/NetAdMediation_UnityAds.framework"
  spec.dependency 'UnityAds', '~> 3.1.0'
  spec.dependency "NetAdSdk", "~> 1.0.0"
end