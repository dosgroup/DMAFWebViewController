Pod::Spec.new do |s|
  s.name = "DMAFWebViewController"
  s.version = "0.0.1"
  s.platform = :ios, '4.3'
  s.source = {:git => 'https://github.com/coryalder/DMAFWebViewController.git'}
  s.source_files = 'DMAFWebViewController.{h,m}', 'DMWebView.{h,m}'
end
