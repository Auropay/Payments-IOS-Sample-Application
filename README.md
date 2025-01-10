
<p align="center">
  <img src="https://v1-994035768921-hpg-artifactstore.s3.amazonaws.com/merchantsettings/default_invoice_logo.png">
</p>

## iOS Demo Application

This repository contains sample application for Swift and Objective C to demonstrates how to integrate AuroPay payments SDK in your application.

<br/>

### Prerequisite
- You should be onboarded on AuroPay merchant portal.
- You can get your sub domain id, accessKey, secretKey from AuroPay merchant portal.

<br/>

### Demo Project Setup
- Clone the repository through Xcode or Git Bash as per your use case.

- Add `pod 'auropay-payments'` in pod file and run `pod install` from Auropay Swift DemoApp or Auropay ObjC Demo directory. 

- Open the sample project's xcworkspace of your prefered language Swift/Objective C in Xcode.

- If you find any errors clean and build project again.

- Replace the placeholder values  of subdomain id, accessKey and secretKey with your detail in AuroPayBuilder initializer.

- ### Swift
```swift
            AuroPayBuilder()
            .subDomainId("Your Subdomain ID")
            .accessKey("Your Access Key")
            .secretKey("Your Secret Key")
            .customerProfile(self.getCustomerProfile())
            .addEventListener({(eventID, eventDesc) in
                debugPrint("EventID: \(eventID), EventDescription: \(eventDesc)")
            })
            .theme(theme)
            .showReceipt(true)
            .allowCardScan(true)
            .build()
```
- ### Objective C
```objective c 
        [[[[[[[[[[AuroPayBuilder alloc]
                            subDomainId:@"Your Subdomain ID"]                                  
                            accessKey:@"Your Access Key"]
                            secretKey:@"Your Secret Key"]
                            customerProfile:[self getCustomerProfile]]
                            addEventListener:^(NSString* eventID, NSString* eventDesc) {
                              NSLog(@"%@", [NSString stringWithFormat:@"eventID: %@, eventDesc: %@", eventID, eventDesc]);
                            }]
                            theme:theme]
                            showReceipt:YES]
                            allowCardScan:YES]
                            build];
```

- Run the demo application.

<br/>

### About AuroPay Payments SDK
AuroPay Payments iOS SDK allows you to accept in-app payments by providing you with the building blocks you need to create a checkout experience.
