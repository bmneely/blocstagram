//
//  DataSource.h
//  Blocstagram
//
//  Created by Ben Neely on 5/28/15.
//  Copyright (c) 2015 Ben Neely. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(Media *)item;

@end
