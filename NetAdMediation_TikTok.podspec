Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_TikTok"
  spec.version      = "2.1.0.1.0"
  spec.summary      = "TikTok Adapters for mediating through NetAdSdk."
  spec.homepage     = ""
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "", :tag => "tiktok-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_TikTok/#{spec.version}/NetAdMediation_TikTok.framework"
  spec.dependency 'Bytedance-UnionAD', '~> 2.1.0.1'
  spec.dependency "NetAdSdk", "~> 1.0.0"
end