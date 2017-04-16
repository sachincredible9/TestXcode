//
//  AppDelegate.h
//  TestXcode
//
//  Created by Sharma, Sachinkumar on 4/15/17.
//  Copyright © 2017 Sharma, Sachinkumar. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

