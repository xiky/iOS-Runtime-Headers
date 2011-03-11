/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

@class NSString;

@interface IMKeychainPasswordFetcher : IMThreadedWorkUnit  {
    NSString *_service;
    NSString *_username;
    NSString *_password;
}


- (void)dealloc;
- (void)_workerThreadFinished;
- (id)initWithUsername:(id)arg1 service:(id)arg2;
- (void)_workerThread;

@end