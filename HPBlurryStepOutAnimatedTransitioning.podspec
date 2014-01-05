Pod::Spec.new do |s|
  s.name     = 'HPBlurryStepOutAnimatedTransitioning'
  s.version  = '1.0.0'
  s.license  = 'MIT'
  s.summary  = 'Modal transition like Tweetbot (update of NRBlurryStepOutAnimatedTransitioning)'
  s.author   = { 'Herve Peroteau' => 'herve.peroteau@gmail.com' }
  s.description = 'Modal transition like Tweetbot'
  s.platform = :ios
  s.source = { :git => "https://github.com/herveperoteau/HPBlurryStepOutAnimatedTransitioning.git"}
  s.source_files = 'HPBlurryStepOutAnimatedTransitioning'
  s.requires_arc = true
end
