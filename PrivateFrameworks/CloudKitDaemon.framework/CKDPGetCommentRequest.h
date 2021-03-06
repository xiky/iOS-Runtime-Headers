/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetCommentRequest : PBRequest <NSCopying> {
    CKDPIdentifier * _commentId;
}

@property (nonatomic, retain) CKDPIdentifier *commentId;
@property (nonatomic, readonly) BOOL hasCommentId;

+ (id)options;

- (void).cxx_destruct;
- (id)commentId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCommentId;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setCommentId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
