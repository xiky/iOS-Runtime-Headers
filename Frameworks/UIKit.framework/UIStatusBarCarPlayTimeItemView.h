/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarCarPlayTimeItemView : UIStatusBarButtonActionItemView {
    BOOL  _currentlyGatheringLogs;
    BOOL  _isInternalInstall;
    BOOL  _radarItemEnabled;
    NSString * _timeString;
}

- (void).cxx_destruct;
- (void)_gatheringLogsDidChangeStatusNotification:(id)arg1;
- (BOOL)_isRadarItemEnabled;
- (id)_timeImageSet;
- (BOOL)allowsUserInteraction;
- (int)buttonType;
- (BOOL)canBecomeFocused;
- (id)contentsImage;
- (void)dealloc;
- (float)extraLeftPadding;
- (float)extraRightPadding;
- (id)highlightImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)neededSizeForImageSet:(id)arg1;
- (int)textStyle;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (BOOL)usesAdvancedActions;

@end
