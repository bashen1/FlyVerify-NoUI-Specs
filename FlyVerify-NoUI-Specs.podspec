Pod::Spec.new do |s|
    s.name             = 'FlyVerify-NoUI-Specs'
    s.version          = '1.0.0'
    s.summary          = 'Specs for FlyVerify'
    s.description      = 'Specs for FlyVerify.'
    s.homepage         = 'https://github.com/bashen1/FlyVerify-NoUI-Specs'
    s.license          = { :type => 'MIT', :file => 'LICENSE' }
    s.author           = { '孑愁' => 'maochunjie@gmail.com' }
    s.source           = { :git => 'https://github.com/bashen1/FlyVerify-NoUI-Specs.git', :tag => s.version.to_s }

    s.ios.deployment_target = "11.0"
    s.frameworks = "NetWork"

    s.pod_target_xcconfig = {
      "VALID_ARCHS" => "x86_64 arm64"
    }
    s.libraries = "c++"
    # s.source_files = "*.h"
    s.vendored_frameworks = "FlyVerify.xcframework", "FlyVerifyCSDK.xcframework"
    # s.vendored_libraries = "*.a"
end