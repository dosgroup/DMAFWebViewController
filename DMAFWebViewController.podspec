Pod::Spec.new do |s|
  s.name = "DMAFWebViewController"
  s.version = "0.0.1"
  s.summary          = "placeholder"
  s.homepage         = "https://github.com/dosgroup/"
  s.license          = "Apache License, Version 2.0"
  s.author           = { "Tilo Westermann" => "tilo.westermann@tu-berlin.de" }
  s.platform = :ios, '4.3'
  s.source = {:git => 'https://github.com/coryalder/DMAFWebViewController.git'}
  s.source_files = 'DMAFWebViewController.{h,m}', 'DMWebView.{h,m}'
  s.dependency 'AFNetworking', '1.3.4'
  s.requires_arc = true
end
