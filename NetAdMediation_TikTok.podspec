Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_TikTok"
  spec.version      = "2.1.0.1.5"
  spec.summary      = "TikTok Adapters for mediating through NetAdSdk."
  spec.homepage     = "https://github.com/Ham-mer/NetAdSdk_iOS_Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/Ham-mer/NetAdSdk_iOS_Pub.git", :tag => "tiktok-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_TikTok/#{spec.version}/NetAdMediation_TikTok.framework"
  spec.dependency 'Bytedance-UnionAD', '~> 2.1.0.1'
  spec.dependency "NetAdSdk", "~> 1.2.5"
end