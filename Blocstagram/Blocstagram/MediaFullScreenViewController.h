//
//  MediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Ben Neely on 6/24/15.
//  Copyright (c) 2015 Ben Neely. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;
@property (nonatomic, strong) UITapGestureRecognizer *tap;
@property (nonatomic, strong) UITapGestureRecognizer *doubleTap;

- (instancetype) initWithMedia:(Media *)media;

- (void) centerScrollView;

@end