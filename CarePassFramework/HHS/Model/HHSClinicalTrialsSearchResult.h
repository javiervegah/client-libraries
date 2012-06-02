/*
 * Copyright 2012 Aetna, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0.html
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

#import <Foundation/Foundation.h>
#import "HHSClinicalTrialsResult.h"

@interface HHSClinicalTrialsSearchResult : NSObject {
    NSString *page;
    NSString *totalResults;
    NSString *totalPages;
    NSMutableArray *trials;
}

/** Gets and sets the lastModified property */
@property (nonatomic, retain) NSString *page;
@property (nonatomic, retain) NSString *totalResults;
@property (nonatomic, retain) NSString *totalPages;
@property (nonatomic, retain) NSMutableArray *trials;

/**
 * Returns a value from the subscriptions array for the specified index
 */
-(HHSClinicalTrialsResult *)trialObjectAtIndex:(int)index;

@end