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

@property (strong, nonatomic) BOOL(^httpHttpsHandler)(NSURL *url, UINavigationController *navController); // navController is the controller that will be pushed any new view.

@property (strong, nonatomic) void(^modifyRequest)(NSMutableURLRequest *url);

@property (strong, nonatomic) void(^completion)(DMWebView *webView, NSError *error, NSURLRequest *request, NSURLResponse *response, NSData *responseData);

@property (strong, nonatomic) BOOL(^webViewURLHandler)(NSURL *url);

@property (strong, nonatomic) NSString *loadingPage;

-(id)initWithURL:(NSURL *)url;
-(void)configWithURL:(NSURL *)url;
-(void)startLoadingRequest:(NSURLRequest*)request;

@end
