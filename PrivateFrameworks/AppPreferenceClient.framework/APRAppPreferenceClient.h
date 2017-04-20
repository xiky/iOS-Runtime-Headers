/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPreferenceClient.framework/AppPreferenceClient
 */

@interface APRAppPreferenceClient : NSObject <APRAppPreferenceInterface> {
    NSXPCConnection * _xpcConnection;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getAppConnectionAppsInto:(id /* block */)arg1;
- (void)getAppPredictionsForIntent:(id)arg1 reply:(id /* block */)arg2;
- (void)getFeedbackForIntent:(id)arg1 forResponse:(id)arg2 forFeedback:(int)arg3;
- (id)init;

@end