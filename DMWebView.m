
#import "DMWebView.h"

@implementation DMWebView

- (id)initWithFrame:(CGRect)frame {
    if (!(self = [super initWithFrame:frame])) return self;
    [self setup];
    return self;
}

- (id)initWithCoder:(NSCoder*)coder {
    if (!(self = [super initWithCoder:coder])) return self;
    [self setup];
    return self;
}

-(void)setup {
    if ([self respondsToSelector:@selector(scrollView)]) {
        UIScrollView *scrollView = [self scrollView];
        [scrollView setDelaysContentTouches:NO];
        scrollView.decelerationRate = UIScrollViewDecelerationRateNormal;
    }
    self.backgroundColor = [UIColor whiteColor];
}

- (void)layoutSubviews {
    [super layoutSubviews];
    if ([self respondsToSelector:@selector(scrollView)]) {
        for (UIView *subview in self.scrollView.subviews) {
            if ([subview isKindOfClass:[UIImageView class]]) {
                subview.hidden = YES;
            }
        }
    }
}



@end
