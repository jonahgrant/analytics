//
//  JGAnalyticsWrapper.h
//
//  Created by Jonah Grant on 1/23/14.
//  Copyright (c) 2014 Jonah Grant. All rights reserved.
//

#import "GAI.h"
#import "GAIFields.h"
#import "GAITracker.h"
#import "GAIDictionaryBuilder.h"

#define SendEvent(category, event) [[[GAI sharedInstance] defaultTracker] send:[[GAIDictionaryBuilder createEventWithCategory:category action:action label:@"event" value:nil] build]];

#define SendError(category, error) [[[GAI sharedInstance] defaultTracker] send:[[GAIDictionaryBuilder createEventWithCategory:category action:label label:@"error" value:nil] build]];

#define SendPage(page) \
id tracker = [[GAI sharedInstance] defaultTracker]; \
[tracker set:kGAIScreenName value:page]; \
[tracker send:[[GAIDictionaryBuilder createAppView] build]];

#define SendPageFromClass(class) \
id tracker = [[GAI sharedInstance] defaultTracker]; \
[tracker set:kGAIScreenName value:NSStringFromClass(class)]; \
[tracker send:[[GAIDictionaryBuilder createAppView] build]];