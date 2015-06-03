//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Ben Neely on 5/28/15.
//  Copyright (c) 2015 Ben Neely. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
