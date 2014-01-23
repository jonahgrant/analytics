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
[[[GAI sharedInstance] defaultTracker] set:kGAIScreenName value:page]; \
[[[GAI sharedInstance] defaultTracker] send:[[GAIDictionaryBuilder createAppView] build]];

#define SendPageFromClass(id) \
[[[GAI sharedInstance] defaultTracker] set:kGAIScreenName value:NSStringFromClass([id class])]; \
[[[GAI sharedInstance] defaultTracker] send:[[GAIDictionaryBuilder createAppView] build]];
