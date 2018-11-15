


Pod::Spec.new do |s|
  s.name         = "YXQSDK"
  s.version      = "0.0.2"
  s.summary      = "this is test pod trunk"
  s.homepage     = "https://github.com/yexiaoqian/YXQSDK"
  s.license      = "MIT"
  s.author       = { "yexiaoqian" => "nancy.ye@mozi.top" }
  s.source       = { :git => "https://github.com/yexiaoqian/YXQSDK.git", :tag => '0.0.2' }
  s.source_files = "MoziSDK/MZPowerStripSDK.framework/Headers/*.{h}"
  s.vendored_frameworks = "MoziSDK/MZPowerStripSDK.framework"
  s.public_header_files = "MoziSDK/MZPowerStripSDK.framework/Headers/MZPowerStripSDK.h"

  s.requires_arc = true
  s.platform     = :ios
end

