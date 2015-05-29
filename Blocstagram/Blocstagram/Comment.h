//
//  Comment.h
//  Blocstagram
//
//  Created by Ben Neely on 5/28/15.
//  Copyright (c) 2015 Ben Neely. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

@end