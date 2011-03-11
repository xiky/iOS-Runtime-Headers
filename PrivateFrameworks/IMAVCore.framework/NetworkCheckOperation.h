/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class IMAVChatParticipant;

@interface NetworkCheckOperation : IMExtendedOperation  {
    IMAVChatParticipant *_participant;
    unsigned int _foundActiveWiFi : 1;
    unsigned int _foundUsableNetwork : 1;
}


- (void)main;
- (void)dealloc;
- (BOOL)hasActiveWiFi;
- (BOOL)hasValidNetwork;
- (id)initWithParticipant:(id)arg1;

@end