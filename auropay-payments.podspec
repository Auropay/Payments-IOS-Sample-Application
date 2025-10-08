#
#  Be sure to run `pod spec lint auropay-payments.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|


  spec.name         = "auropay-payments"
  spec.version      = "1.2.0"
  spec.summary      = "AuroPay's Payments SDK."

  spec.description  = <<-DESC
 	AuroPay is a Digital Platform that offers a bouquet of E-PAYMENT options to Receive Payments in SAFE, SECURE and USER-FRIENDLY Manner. The aim is to become a one stop shop,offering a wide range of services in the payment ecosystem globally, catering to the e-commerce businesses as well as the SMEs which are rapidly adopting digital technologies.
                   DESC

  spec.homepage     = "https://github.com/Auropay/Payments-IOS-Sample-Application"

  spec.license      = "MIT"

  spec.author             = { "Auropay Payments" => "info@auropay.net" }

  spec.platform     = :ios, "13.0"

  spec.source       = { :git => "https://github.com/Auropay/Payments-IOS-Sample-Application.git", :tag => "#{spec.version}" }

  spec.vendored_frameworks    = "AuroPayPayments.xcframework"
  spec.swift_version        = "5.7.1"

end
