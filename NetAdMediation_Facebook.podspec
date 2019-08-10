Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_Facebook"
  spec.version      = "5.4.0.0"
  spec.summary      = "Facebook Adapters for mediating through NetAdSdk."
  spec.homepage     = ""
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "", :tag => "facebook-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_Facebook/#{spec.version}/NetAdMediation_Facebook.framework"
  spec.dependency 'FBAudienceNetwork', '~> 5.4.0'
  spec.dependency "NetAdSdk", "~> 1.0.0"
end