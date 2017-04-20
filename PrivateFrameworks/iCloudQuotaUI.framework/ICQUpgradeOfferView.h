/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

@interface ICQUpgradeOfferView : ICQPageView <UITextViewDelegate> {
    UILayoutGuide * _abovePurchaseLayoutGuide;
    NSArray * _activeConstraints;
    UILayoutGuide * _belowPurchaseLayoutGuide;
    UIButton * _bottomButton;
    ICQLink * _bottomLink;
    <ICQPageDelegate> * _delegate;
    _ICQTextView * _finePrintView;
    float  _iconTitleSpacing;
    NSLayoutConstraint * _iconTopMarginConstraint;
    UIImageView * _iconView;
    BOOL  _isResizingFonts;
    BOOL  _layoutGuideProblem;
    UILabel * _messageLabel;
    UILayoutGuide * _navigationBarLayoutGuide;
    UIButton * _purchaseButton;
    ICQLink * _purchaseLink;
    NSArray * _serviceViews;
    UIActivityIndicatorView * _spinner;
    BOOL  _suppressResizingFonts;
    float  _tippyTopMargin;
    UILabel * _titleLabel;
    NSLayoutConstraint * _titleTopMarginConstraint;
    int  _upgradeMode;
    _ICQUpgradeOfferPageSpecification * _upgradeOfferPageSpecification;
}

@property (nonatomic, readonly) UILayoutGuide *abovePurchaseLayoutGuide;
@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, readonly) UILayoutGuide *belowPurchaseLayoutGuide;
@property (nonatomic, retain) UIButton *bottomButton;
@property (nonatomic, readonly) ICQLink *bottomLink;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ICQPageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _ICQTextView *finePrintView;
@property (readonly) unsigned int hash;
@property (nonatomic) float iconTitleSpacing;
@property (nonatomic, readonly) NSLayoutConstraint *iconTopMarginConstraint;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UILabel *messageLabel;
@property (nonatomic, readonly) UILayoutGuide *navigationBarLayoutGuide;
@property (nonatomic, retain) UIButton *purchaseButton;
@property (nonatomic, readonly) ICQLink *purchaseLink;
@property (nonatomic, retain) NSArray *serviceViews;
@property (nonatomic, retain) UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;
@property (nonatomic) float tippyTopMargin;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, readonly) NSLayoutConstraint *titleTopMarginConstraint;
@property (nonatomic) int upgradeMode;
@property (nonatomic, retain) _ICQUpgradeOfferPageSpecification *upgradeOfferPageSpecification;

- (void).cxx_destruct;
- (id)_imageForBundleIdentifier:(id)arg1;
- (id)_imageForGenericCloud;
- (void)_resetAdjustableItems;
- (BOOL)_shrinkFontOfLabel:(id)arg1;
- (void)_shrinkTopMargin;
- (float)_superGetTopMargin;
- (id)abovePurchaseLayoutGuide;
- (id)activeConstraints;
- (id)belowPurchaseLayoutGuide;
- (id)bottomButton;
- (void)bottomButtonTapped:(id)arg1;
- (id)bottomLink;
- (id)delegate;
- (id)finePrintAttributes;
- (id)finePrintParagraphStyle;
- (id)finePrintParagraphStyleAttributes;
- (id)finePrintView;
- (id)finePrintViewAttributedText;
- (float)iconTitleSpacing;
- (id)iconTopMarginConstraint;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)messageLabel;
- (id)navigationBarLayoutGuide;
- (id)purchaseButton;
- (void)purchaseButtonTapped:(id)arg1;
- (id)purchaseLink;
- (id)serviceViews;
- (void)setActiveConstraints:(id)arg1;
- (void)setBottomButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFinePrintView:(id)arg1;
- (void)setIconTitleSpacing:(float)arg1;
- (void)setIconView:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (void)setPurchaseButton:(id)arg1;
- (void)setServiceViews:(id)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTippyTopMargin:(float)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUpgradeMode:(int)arg1;
- (void)setUpgradeOfferPageSpecification:(id)arg1;
- (id)spinner;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (float)tippyTopMargin;
- (id)titleLabel;
- (id)titleTopMarginConstraint;
- (void)updateConstraints;
- (int)upgradeMode;
- (id)upgradeOfferPageSpecification;
- (id)upgradeOfferSpecification;

@end