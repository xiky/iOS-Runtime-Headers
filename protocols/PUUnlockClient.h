/* Generated by RuntimeBrowser.
 */

@protocol PUUnlockClient <NSObject>

@required

- (void)didDisableOnlyRemoteUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didEnableOnlyRemoteUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didGetRemoteDeviceHasPasscode:(BOOL)arg1 isLocked:(BOOL)arg2 isUnlockOnly:(BOOL)arg3 error:(NSError *)arg4;
- (void)didPairForUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)didUnpairForUnlock:(BOOL)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidCompletePasscodeAction:(BOOL)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidRemoveLockout:(BOOL)arg1 error:(NSError *)arg2;
- (void)remoteDeviceDidUnlock;

@end