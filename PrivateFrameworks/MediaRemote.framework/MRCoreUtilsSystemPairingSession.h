/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCoreUtilsSystemPairingSession : MRCoreUtilsPairingSession

+ (id)globalPairingQueue;
+ (id)pairingManager;
+ (BOOL)systemPairingAvailable;

- (id)addPeer;
- (id)initializePairingSession:(struct PairingSessionPrivate { }*)arg1;
- (struct NSMutableDictionary { Class x1; }*)mediaRemotePairedDevices;
- (void*)pairedPeerDevice;
- (id)pairedPeerDevices;
- (id)pairedPeerFromPeerDevice:(void*)arg1;
- (void*)peerDeviceFromPairedPeer:(id)arg1;
- (id)removePeer;
- (BOOL)shouldAutoRetryPairingExchange:(id)arg1;
- (BOOL)shouldRetry;
- (id)updateMediaRemotePairedDevice:(void*)arg1;
- (id)updatePeer;

@end