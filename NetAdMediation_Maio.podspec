Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_Maio"
  spec.version      = "1.4.6.2"
  spec.summary      = "Maio Adapters for mediating through NetAdSdk."
  spec.homepage     = "https://github.com/Ham-mer/NetAdSdk_iOS_Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/Ham-mer/NetAdSdk_iOS_Pub.git", :tag => "maio-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_Maio/#{spec.version}/NetAdMediation_Maio.framework"
  spec.dependency 'MaioSDK', '~> 1.4.6'
  spec.dependency "NetAdSdk", "~> 1.2.5"
end