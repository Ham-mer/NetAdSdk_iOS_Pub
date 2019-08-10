Pod::Spec.new do |spec|
  spec.name         = "NetAdMediation_Amazon"
  spec.version      = "2.2.17.1"
  spec.summary      = "Amazon Adapters for mediating through NetAdSdk."
  spec.homepage     = "https://github.com/Ham-mer/NetAdSdk_iOS_Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "10.0"
  spec.source       = { :git => "https://github.com/Ham-mer/NetAdSdk_iOS_Pub.git", :tag => "amazon-#{spec.version}" }
  spec.vendored_frameworks  = "NetAdMediation_Amazon/#{spec.version}/NetAdMediation_Amazon.framework"
  spec.dependency 'AmazonAdSDK', '2.0.16'
  spec.dependency "NetAdSdk", "~> 1.2.5"
end