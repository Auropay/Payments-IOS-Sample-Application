//
//  AppDelegate.m
//  Auropay ObjC Demo
//
//  Created by AuroPay on 05/07/23.
//

#import "AppDelegate.h"
#import <IQKeyboardManager/IQKeyboardManager.h>

@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    [[IQKeyboardManager sharedManager] setEnable:YES];
    [[IQKeyboardManager sharedManager] setShouldResignOnTouchOutside:YES];
    [_window makeKeyAndVisible];
    return YES;
}
@end
