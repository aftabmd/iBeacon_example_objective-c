//
//  AppDelegate.h
//  GCell_Example_Objective-C_iBeacon
//
//  Created by David Pugh on 15/09/2015.
//  Copyright (c) 2015 G24 Power Ltd David Pugh. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate>



@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) CLLocationManager *locationManager;
@property CLProximity lastProximity;



@end

