//
//  ViewController.h
//  devportal
//
//  Created by Jonathan Hoskin on 16/12/15.
//  Copyright © 2015 Hoskin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@interface ViewController : UIViewController <WKNavigationDelegate>

@property (nonatomic,strong) WKWebView *webView;
@property (nonatomic,strong) UIProgressView *progressView;

@end

