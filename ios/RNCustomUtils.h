//
//  RNCustomUtils.h
//  RNAdMobManager
//
//  Created by Vitali on 17/01/2020.
//  Copyright © 2020 accosine. All rights reserved.
//

#ifndef RNCustomUtils_h
#define RNCustomUtils_h

#import <Foundation/Foundation.h>

@interface RNCustomUtils : NSObject
+ (UIViewController*)topViewController;
+ (UIViewController*)topViewControllerWithRootViewController:(UIViewController*)viewController;

@end

#endif /* RNCustomUtils_h */
