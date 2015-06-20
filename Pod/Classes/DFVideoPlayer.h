//
//  ViewController.h
//  DFVitamioVideoPlayer
//
//  Created by zhudf on 15/5/29.
//  Copyright (c) 2015年 朱东方. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DFVideoPlayer;
@class DFVideoControlView;

@protocol DFVideoPlayerDelegate <NSObject>

@optional
- (void)videoPlayer:(DFVideoPlayer *)player didCompleted:(BOOL)complete;
- (void)videoPlayer:(DFVideoPlayer *)player didError:(NSError *)error;

@end

@interface DFVideoPlayer :NSObject

@property (nonatomic, readonly) UIView  *view;
@property (nonatomic, copy)     NSURL   *videoUrl;

@property (nonatomic, weak) id<DFVideoPlayerDelegate>       delegate;

- (instancetype)initWithURL:(NSURL *)url;

- (void)showInWindow;
- (void)showInView:(UIView *)view;
- (void)showInView:(UIView *)view inset:(UIEdgeInsets)inset;

- (void)dismiss;

@end