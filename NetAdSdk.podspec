Pod::Spec.new do |spec|
  spec.name         = "NetAdSdk"
  spec.version      = "1.2.5"
  spec.summary      = "NetAdSdk is Access Mobile Ad Sdk."
  spec.homepage     = "https://github.com/Ham-mer/NetAdSdk_iOS_Pub"
  spec.license      = { :type => 'MIT' }
  spec.author       = "Access"
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/Ham-mer/NetAdSdk_iOS_Pub.git", :tag => "#{spec.version}" }
  spec.vendored_frameworks  = "NetAdSdk/#{spec.version}/NetAdSdk.framework"
  spec.resource = "NetAdSdk/#{spec.version}/NetAdSdk.bundle"
end