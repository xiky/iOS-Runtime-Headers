/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUItemContentRating, NSArray, NSDate, SUItemReviewStatistics, SUItemLink, NSDictionary, SSItemImageCollection, SUItem, NSString, SSItemOffer;

@interface SUItem : NSObject <NSCopying> {
    NSString *_artistName;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_collectionName;
    SUItem *_containerItem;
    NSString *_containerName;
    SUItemContentRating *_contentRating;
    NSString *_copyrightString;
    SSItemOffer *_defaultStoreOffer;
    NSDictionary *_dictionary;
    NSString *_disclaimerString;
    BOOL _gameCenterEnabled;
    NSString *_genreName;
    NSString *_humanReadableDescription;
    int _itemDisplayType;
    unsigned long long _itemIdentifier;
    SSItemImageCollection *_itemImageCollection;
    NSArray *_itemLinks;
    NSString *_itemMediaKind;
    int _itemType;
    NSDate *_releaseDate;
    NSString *_releaseDateString;
    int _representedItemCount;
    SUItemReviewStatistics *_reviewStatistics;
    NSString *_secondaryTitle;
    NSArray *_storeOffers;
    NSString *_title;
    NSString *_unmodifiedTitle;
}

@property(getter=isDownloadable,readonly) BOOL downloadable;
@property(readonly) SUItemLink * externalArtistPageLink;
@property(readonly) NSString * itemTypeString;
@property(copy) NSString * unmodifiedTitle;
@property(copy) NSString * title;
@property(copy) NSArray * storeOffers;
@property(copy) NSString * secondaryTitle;
@property(copy) SUItemReviewStatistics * reviewStatistics;
@property int representedItemCount;
@property(retain) NSDate * releaseDate;
@property int itemType;
@property(copy) NSString * itemMediaKind;
@property(copy) NSArray * itemLinks;
@property(copy) SSItemImageCollection * itemImageCollection;
@property unsigned long long itemIdentifier;
@property int itemDisplayType;
@property(readonly) NSDictionary * itemDictionary;
@property(copy) NSString * humanReadableDescription;
@property(copy) NSString * genreName;
@property(getter=isGameCenterEnabled) BOOL gameCenterEnabled;
@property(copy) NSString * disclaimerString;
@property(readonly) SSItemOffer * defaultStoreOffer;
@property(copy) NSString * copyrightString;
@property(copy) SUItemContentRating * contentRating;
@property(copy) NSString * containerName;
@property(retain) SUItem * containerItem;
@property(copy) NSString * collectionName;
@property(copy) NSString * bundleVersion;
@property(copy) NSString * bundleIdentifier;
@property(copy) NSString * artistName;


- (void)_reloadProperties;
- (id)valueForProperty:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)bundleIdentifier;
- (id)title;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setTitle:(id)arg1;
- (int)itemType;
- (int)itemDisplayType;
- (id)containerName;
- (id)humanReadableDescription;
- (id)containerItem;
- (id)copyrightString;
- (id)defaultStoreOffer;
- (id)genreName;
- (id)itemImageCollection;
- (id)itemLinks;
- (id)storeOffers;
- (id)itemTypeString;
- (id)externalArtistPageLink;
- (BOOL)boolValueForProperty:(id)arg1;
- (id)copyReleaseDateStringWithStyle:(long)arg1;
- (id)dateValueForProperty:(id)arg1;
- (int)integerValueForProperty:(id)arg1;
- (BOOL)isDownloadable;
- (void)setStoreOffers:(id)arg1;
- (id)storeOfferForIdentifier:(id)arg1;
- (int)_linkTargetForTargetString:(id)arg1 typeString:(id)arg2;
- (int)_linkTypeForString:(id)arg1;
- (id)_newItemLinkWithType:(int)arg1 dictionary:(id)arg2;
- (id)_newItemLinkWithType:(int)arg1 URLKey:(id)arg2 titleKey:(id)arg3;
- (id)_newPrimaryItemLink;
- (void)_reloadDefaultStoreOffer;
- (void)_reloadImagesAndLinksFromSquishes:(id)arg1;
- (void)_reloadItemImages;
- (void)_reloadItemLinks;
- (void)_reloadStoreOffers;
- (id)_squishImageForSquishDictionary:(id)arg1;
- (id)_valueForFirstAvailableKey:(id)arg1;
- (void)setUnmodifiedTitle:(id)arg1;
- (id)secondaryTitle;
- (void)setSecondaryTitle:(id)arg1;
- (void)setReviewStatistics:(id)arg1;
- (int)representedItemCount;
- (void)setRepresentedItemCount:(int)arg1;
- (id)releaseDate;
- (void)setReleaseDate:(id)arg1;
- (void)setItemMediaKind:(id)arg1;
- (void)setItemLinks:(id)arg1;
- (void)setItemImageCollection:(id)arg1;
- (void)setItemIdentifier:(unsigned long long)arg1;
- (void)setItemDisplayType:(int)arg1;
- (void)setHumanReadableDescription:(id)arg1;
- (void)setGenreName:(id)arg1;
- (BOOL)isGameCenterEnabled;
- (void)setGameCenterEnabled:(BOOL)arg1;
- (id)disclaimerString;
- (void)setDisclaimerString:(id)arg1;
- (void)setCopyrightString:(id)arg1;
- (void)setContentRating:(id)arg1;
- (void)setContainerName:(id)arg1;
- (id)collectionName;
- (void)setCollectionName:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setItemType:(int)arg1;
- (id)unmodifiedTitle;
- (id)itemDictionary;
- (id)contentRating;
- (id)itemMediaKind;
- (void)setBundleIdentifier:(id)arg1;
- (unsigned long long)itemIdentifier;
- (id)artistName;
- (BOOL)isDisplayable:(id*)arg1;
- (id)itemLinksForType:(int)arg1;
- (id)firstItemLinkForType:(int)arg1;
- (id)bundleVersion;
- (id)reviewStatistics;
- (id)stringValueForProperty:(id)arg1;
- (void)setContainerItem:(id)arg1;

@end