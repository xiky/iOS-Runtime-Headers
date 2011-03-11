/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSMutableArray, WebBookmarkCollection;

@interface WebBookmarkList : NSObject  {
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    BOOL _includeHidden;
    unsigned int _folderID;
    WebBookmarkCollection *_collection;
}

@property(readonly) unsigned int folderID;


- (unsigned int)folderID;
- (void)dealloc;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (id)initWithFolderID:(unsigned int)arg1 inCollection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4 includeHidden:(BOOL)arg5;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (BOOL)stepThroughIndex:(unsigned int)arg1;
- (unsigned int)bookmarkCount;

@end