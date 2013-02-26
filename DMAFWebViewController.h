//
//  DMAFWebViewController.h
//  EBCupping
//
//  Created by Cory Alder on 2013-01-08.
//  Copyright (c) 2013 Davander Mobile Corporation. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DMWebView;

@interface DMAFWebViewController : UIViewController <UIWebViewDelegate>

@property (nonatomic, strong) DMWebView *webView;

@property (strong, nonatomic) NSURL *URL;

@property (strong, nonatomic) NSString *(^titleTransformer)(NSString *input);

@property (strong, nonatomic) void(^otherSchemeHandler)(NSURL *url);

@property (strong, nonatomic) void(^modifyRequest)(NSMutableURLRequest *url);

@property (strong, nonatomic) NSString *loadingPage;

-(id)initWithURL:(NSURL *)url;

@end
