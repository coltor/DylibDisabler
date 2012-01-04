//
//  DylibDisablerAppDelegate.h
//  Dylib Disabler
//
//  Created by James Emrich on 1/2/11.
//  Copyright 2011 James Emrich. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RootViewController.h"

@interface DylibDisablerAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow				*window;
    UINavigationController	*navigationController;
	RootViewController		*rootView;
}
@property (nonatomic, retain) UIWindow					*window;
@property (nonatomic, retain) UINavigationController	*navigationController;
@property (nonatomic, retain) RootViewController		*rootView;

@end

