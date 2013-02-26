# DMAFWebViewController & DMWebView

Two classes that together form an attempt to make a simple UIWebView to use as in hybrid web/native apps.

Inspired in part by [Anne Halsall](http://twitter.com/annekate)'s appearance on the [NSBrief](http://nsbrief.com/76-anne-halsall/) podcast, where she explored some of the ways to use UIWebView for interface elements, without falling into the pitfalls experienced by companies like [Facebook](http://arstechnica.com/apple/2012/08/hands-on-facebook-5-0-for-ios-is-as-speedy-as-facebook-claims/).

It is not an attempt to make a full-featured HTML5 app development environemnt, like PhoneGap or Titanium, rather it is a simple view you can use for single-screens of web content. It is intended to be placed in a UINavigationController.

It has the following features / tweaks: 

## DMAFWebViewController

1. All network activity is mediated by AFNetworking.
2. `self.modifyRequest` called before all outgoing requests allowing you to customize requests with a block.
3. A loading.gif page is displayed automatically and immediately (`#define LOADING_GIF`, and `self.loadingPage`)
4. `webView:shouldStartLoadWithRequest:` new page flow control:
    a) allow loading of self.URL (triggered by `loadData:`)
    b) all other `http` or `https` urls will be handed to a new `DMAFWebViewController` and pushed onto the `UINavigationController` stack.
    c) `webview://back` pops the current view controller off the stack.
    d) all other urls are handed to `self.otherSchemeHandler` for custom logic.
5. DOM Manipulation - `self.titleTransformer` is called (via js) on `document.title`, and the output has whitespace trimmed.
6. DOM Manipulation - `document.documentElement.style.webkitTouchCallout = "none"` is called (via js) to disable the standard long-press menu (copy/open url/add to reading list).

## DMWebView

1. `setup` - self.scrollView.decelerationRate = UIScrollViewDecelerationRateNormal;
2. `setup` - make the background white.
3. `layoutSubviews` - remove the linen that is behind the web view.

My philosophy is that these tweaks should, for the most part, be optional, but with sensible defaults. To that end, all the blocks (`self.otherSchemeHandler`, `self.titleTransformer`) have defaults set in `-init`. There is still some work to do making these tweaks optional and inserting customization blocks, but that's the goal.

MIT licensed.

