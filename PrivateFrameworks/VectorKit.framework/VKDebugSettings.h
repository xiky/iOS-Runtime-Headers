/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKDebugSettings : NSObject {
    BOOL  _altitudeDisableC3mTextureLoading;
    float  _altitudeFadeSpeed;
    BOOL  _altitudeFreezeViewNode;
    float  _altitudeHideMeshTime;
    BOOL  _altitudeHighResSatellite;
    float  _altitudeLodScale;
    BOOL  _altitudeMipmapFlyover;
    BOOL  _altitudeMipmapObjectTree;
    BOOL  _altitudeMipmapSatellite;
    BOOL  _altitudePauseLoading;
    BOOL  _altitudePrintRenderedTilesStat;
    BOOL  _altitudeProfilingEnabled;
    unsigned int  _altitudeProfilingType;
    unsigned int  _altitudeProfilingZones;
    BOOL  _altitudeShowNightLight;
    BOOL  _altitudeShowTileBounds;
    BOOL  _altitudeShowTriggerbounds;
    NSString * _altitudeTelemetryURL;
    BOOL  _altitudeTexturePaging;
    float  _altitudeTileQualityThreshold;
    BOOL  _altitudeTourSpeedup;
    float  _altitudeTourSpeedupFactor;
    BOOL  _constantlyChangeTileGroup;
    struct unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> > > > { 
        struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> > > > { 
            struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> *> > > { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> { 
                    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, void *> *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, std::__1::hash<std::__1::basic_string<char> >, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, std::__1::shared_ptr<md::ObjectGroup> >, std::__1::equal_to<std::__1::basic_string<char> >, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    }  _customLandmarks;
    NSMutableDictionary * _customTiles;
    BOOL  _debugStyleAnimations;
    struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { 
        struct StylesheetManager<gss::PropertyID> {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _debugStyleManager;
    BOOL  _disableIntraLinkTransitLineCrossings;
    BOOL  _disableRoadSignLimit;
    BOOL  _disableRoute;
    BOOL  _disableStylesheetAnimations;
    BOOL  _disableTransitLineDrawing;
    BOOL  _disableTransitLineGroupMerging;
    BOOL  _disableTransitLineMerging;
    BOOL  _dontMapMatchToSnappedRouteLine;
    BOOL  _dontMatchRouteLine;
    BOOL  _dontVerifyRouteToTransitSnapping;
    BOOL  _drawContinuously;
    BOOL  _drawDebugTransit;
    BOOL  _drawPerformanceHUD;
    BOOL  _dumpRouteAndPath;
    BOOL  _dumpTransitTileContents;
    BOOL  _enableLoggingInLockScreen;
    BOOL  _enableShieldsOnRouteLine;
    BOOL  _enableSignPostEvents;
    BOOL  _expandedPerformanceHUD;
    NSMutableArray * _footprintsToSuppress;
    BOOL  _forceHiResBuildings;
    BOOL  _hideClientPositionedFeatures;
    BOOL  _hideDirectionalArrows;
    BOOL  _hideServerPositionedRoadFeatures;
    BOOL  _hideServerPositionedTransitFeatures;
    BOOL  _highlightFeaturesOnly;
    BOOL  _highlightUnmatchedRouteLine;
    BOOL  _holdOntoStyleAttributes;
    BOOL  _immediateRasterTextureLoading;
    BOOL  _isInstalledInLockScreen;
    BOOL  _keepTooCloseServerPositionedTransitFeatures;
    BOOL  _labelAllowDefaultStyle;
    BOOL  _labelAutoOffsetRoadText;
    BOOL  _labelCollideContinuously;
    BOOL  _labelCollisionEnabled;
    BOOL  _labelFlipAlternatePositionsEnable;
    BOOL  _labelHideLineFeatures;
    BOOL  _labelHidePointFeatures;
    BOOL  _labelHighlighting;
    BOOL  _labelHighlightingVerboseLoggingEnabled;
    BOOL  _labelTileDecodeEnabled;
    BOOL  _labelTransitLineCollisionEnabled;
    BOOL  _labelUpdateMapTilesContinuously;
    struct { 
        BOOL borders; 
        BOOL folds; 
        BOOL angles; 
        float minAngle; 
        float maxAngle; 
    }  _landmark2DStrokeSettings;
    BOOL  _layoutContinuously;
    BOOL  _loadGreenTraffic;
    BOOL  _newRouteTraffic;
    BOOL  _paintBuildingNormals;
    BOOL  _paintCoastlines;
    BOOL  _paintJunctions;
    BOOL  _paintLabelBounds;
    BOOL  _paintLabelCollisionLines;
    BOOL  _paintLabelCounts;
    BOOL  _paintLabelRoadFeatures;
    BOOL  _paintMapTiles;
    BOOL  _paintPoiTiles;
    BOOL  _paintPointTiles;
    BOOL  _paintPolygonTiles;
    BOOL  _paintRoadBoundaries;
    BOOL  _paintRoadSigns;
    BOOL  _paintRoadTiles;
    BOOL  _paintRoadsStitchedByName;
    BOOL  _paintRouteDebugMarkers;
    BOOL  _paintSelectedMapTiles;
    BOOL  _paintTiles;
    BOOL  _paintTrafficSkeleton;
    BOOL  _paintTransitCounts;
    BOOL  _paintVertices;
    BOOL  _prioritizeTrafficSkeleton;
    BOOL  _readLandmarksFromDisk;
    BOOL  _realisticWireframeEnabled;
    BOOL  _renderInSeparateThread;
    float  _ribbonCrispness;
    float  _routeCoarsenThreshold;
    float  _routeRefineThreshold;
    BOOL  _shouldUseTestTileLoader;
    BOOL  _showNavCameraDebugConsole;
    BOOL  _showNavCameraDebugConsoleAttributes;
    BOOL  _showNavCameraDebugConsoleProperties;
    BOOL  _showNavCameraDebugLegend;
    BOOL  _showNavCameraDebugOverlay;
    BOOL  _showTrafficCasing;
    BOOL  _trackingCameraZoomFurther;
    BOOL  _transitHighlighting;
    BOOL  _useBuildingShadowTexture;
    BOOL  _useMetalRenderer;
    BOOL  _useStaticTrafficFeed;
    BOOL  _useTransactionManager;
}

@property (nonatomic) BOOL altitudeDisableC3mTextureLoading;
@property (nonatomic) float altitudeFadeSpeed;
@property (nonatomic) BOOL altitudeFreezeViewNode;
@property (nonatomic) float altitudeHideMeshTime;
@property (nonatomic) BOOL altitudeHighResSatellite;
@property (nonatomic) float altitudeLodScale;
@property (nonatomic) BOOL altitudeMipmapFlyover;
@property (nonatomic) BOOL altitudeMipmapObjectTree;
@property (nonatomic) BOOL altitudeMipmapSatellite;
@property (nonatomic) BOOL altitudePauseLoading;
@property (nonatomic) BOOL altitudePrintRenderedTilesStat;
@property (nonatomic) BOOL altitudeProfilingEnabled;
@property (nonatomic) unsigned int altitudeProfilingType;
@property (nonatomic) unsigned int altitudeProfilingZones;
@property (nonatomic) BOOL altitudeShowNightLight;
@property (nonatomic) BOOL altitudeShowTileBounds;
@property (nonatomic) BOOL altitudeShowTriggerBounds;
@property (nonatomic, retain) NSString *altitudeTelemetryURL;
@property (nonatomic) BOOL altitudeTexturePaging;
@property (nonatomic) float altitudeTileQualityThreshold;
@property (nonatomic) BOOL altitudeTourSpeedup;
@property (nonatomic) float altitudeTourSpeedupFactor;
@property (nonatomic) BOOL constantlyChangeTileGroup;
@property (nonatomic) BOOL debugStyleAnimations;
@property (nonatomic) struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; } debugStyleManager;
@property (nonatomic) BOOL disableIntraLinkTransitLineCrossings;
@property (nonatomic) BOOL disableRoadSignLimit;
@property (nonatomic) BOOL disableRoute;
@property (nonatomic) BOOL disableStylesheetAnimations;
@property (nonatomic) BOOL disableTransitLineDrawing;
@property (nonatomic) BOOL disableTransitLineGroupMerging;
@property (nonatomic) BOOL disableTransitLineMerging;
@property (nonatomic) BOOL dontMapMatchToSnappedRouteLine;
@property (nonatomic) BOOL dontMatchRouteLine;
@property (nonatomic) BOOL dontVerifyRouteToTransitSnapping;
@property (nonatomic) BOOL drawContinuously;
@property (nonatomic) BOOL drawDebugTransit;
@property (nonatomic) BOOL drawPerformanceHUD;
@property (nonatomic) BOOL dumpRouteAndPath;
@property (nonatomic) BOOL dumpTransitTileContents;
@property (nonatomic) BOOL enableLoggingInLockScreen;
@property (nonatomic) BOOL enableShieldsOnRouteLine;
@property (nonatomic) BOOL enableSignPostEvents;
@property (nonatomic) BOOL expandedPerformanceHUD;
@property (nonatomic, retain) NSMutableArray *footprintsToSuppress;
@property (nonatomic) BOOL forceHiResBuildings;
@property (nonatomic) BOOL hideClientPositionedFeatures;
@property (nonatomic) BOOL hideDirectionalArrows;
@property (nonatomic) BOOL hideServerPositionedRoadFeatures;
@property (nonatomic) BOOL hideServerPositionedTransitFeatures;
@property (nonatomic) BOOL highlightFeaturesOnly;
@property (nonatomic) BOOL highlightUnmatchedRouteLine;
@property (nonatomic) BOOL holdOntoStyleAttributes;
@property (nonatomic) BOOL immediateRasterTextureLoading;
@property (nonatomic) BOOL isInstalledInLockScreen;
@property (nonatomic) BOOL keepTooCloseServerPositionedTransitFeatures;
@property (nonatomic) BOOL labelAllowDefaultStyle;
@property (nonatomic) BOOL labelAutoOffsetRoadText;
@property (nonatomic) BOOL labelCollideContinuously;
@property (nonatomic) BOOL labelCollisionEnabled;
@property (nonatomic) BOOL labelFlipAlternatePositionsEnable;
@property (nonatomic) BOOL labelHideLineFeatures;
@property (nonatomic) BOOL labelHidePointFeatures;
@property (nonatomic) BOOL labelHighlighting;
@property (nonatomic) BOOL labelHighlightingVerboseLoggingEnabled;
@property (nonatomic) BOOL labelTileDecodeEnabled;
@property (nonatomic) BOOL labelTransitLineCollisionEnabled;
@property (nonatomic) BOOL labelUpdateMapTilesContinuously;
@property (nonatomic) struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; } landmark2DStrokeSettings;
@property (nonatomic) BOOL layoutContinuously;
@property (nonatomic) BOOL loadGreenTraffic;
@property (nonatomic) BOOL newRouteTraffic;
@property (nonatomic) BOOL paintBuildingNormals;
@property (nonatomic) BOOL paintCoastlines;
@property (nonatomic) BOOL paintJunctions;
@property (nonatomic) BOOL paintLabelBounds;
@property (nonatomic) BOOL paintLabelCollisionLines;
@property (nonatomic) BOOL paintLabelCounts;
@property (nonatomic) BOOL paintLabelRoadFeatures;
@property (nonatomic) BOOL paintMapTiles;
@property (nonatomic) BOOL paintPoiTiles;
@property (nonatomic) BOOL paintPointTiles;
@property (nonatomic) BOOL paintPolygonTiles;
@property (nonatomic) BOOL paintRoadBoundaries;
@property (nonatomic) BOOL paintRoadSigns;
@property (nonatomic) BOOL paintRoadTiles;
@property (nonatomic) BOOL paintRoadsStitchedByName;
@property (nonatomic) BOOL paintRouteDebugMarkers;
@property (nonatomic) BOOL paintSelectedMapTiles;
@property (nonatomic) BOOL paintTiles;
@property (nonatomic) BOOL paintTrafficSkeleton;
@property (nonatomic) BOOL paintTransitCounts;
@property (nonatomic) BOOL paintVertices;
@property (nonatomic) BOOL prioritizeTrafficSkeleton;
@property (nonatomic) BOOL readLandmarksFromDisk;
@property (nonatomic) BOOL realisticWireframeEnabled;
@property (nonatomic) BOOL renderInSeparateThread;
@property (nonatomic) float ribbonCrispness;
@property (nonatomic) float routeCoarsenThreshold;
@property (nonatomic) float routeRefineThreshold;
@property (nonatomic) BOOL shouldUseTestTileLoader;
@property (nonatomic) BOOL showNavCameraDebugConsole;
@property (nonatomic) BOOL showNavCameraDebugConsoleAttributes;
@property (nonatomic) BOOL showNavCameraDebugConsoleProperties;
@property (nonatomic) BOOL showNavCameraDebugLegend;
@property (nonatomic) BOOL showNavCameraDebugOverlay;
@property (nonatomic) BOOL showTrafficCasing;
@property (nonatomic) BOOL trackingCameraZoomFurther;
@property (nonatomic) BOOL transitHighlighting;
@property (nonatomic) BOOL useBuildingShadowTexture;
@property (nonatomic) BOOL useMetalRenderer;
@property (nonatomic) BOOL useStaticTrafficFeed;
@property (nonatomic) BOOL useTransactionManager;

+ (id)sharedSettings;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFootprintToSuppress:(id)arg1;
- (BOOL)altitudeDisableC3mTextureLoading;
- (float)altitudeFadeSpeed;
- (BOOL)altitudeFreezeViewNode;
- (float)altitudeHideMeshTime;
- (BOOL)altitudeHighResSatellite;
- (float)altitudeLodScale;
- (BOOL)altitudeMipmapFlyover;
- (BOOL)altitudeMipmapObjectTree;
- (BOOL)altitudeMipmapSatellite;
- (BOOL)altitudePauseLoading;
- (BOOL)altitudePrintRenderedTilesStat;
- (BOOL)altitudeProfilingEnabled;
- (unsigned int)altitudeProfilingType;
- (unsigned int)altitudeProfilingZones;
- (BOOL)altitudeShowNightLight;
- (BOOL)altitudeShowTileBounds;
- (BOOL)altitudeShowTriggerBounds;
- (id)altitudeTelemetryURL;
- (BOOL)altitudeTexturePaging;
- (float)altitudeTileQualityThreshold;
- (BOOL)altitudeTourSpeedup;
- (float)altitudeTourSpeedupFactor;
- (void)clearFootprintsToSuppress;
- (BOOL)constantlyChangeTileGroup;
- (struct shared_ptr<md::ObjectGroup> { struct ObjectGroup {} *x1; struct __shared_weak_count {} *x2; }*)customLandmarkObjectGroupForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)dealloc;
- (BOOL)debugStyleAnimations;
- (struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })debugStyleManager;
- (BOOL)disableIntraLinkTransitLineCrossings;
- (BOOL)disableRoadSignLimit;
- (BOOL)disableRoute;
- (BOOL)disableStylesheetAnimations;
- (BOOL)disableTransitLineDrawing;
- (BOOL)disableTransitLineGroupMerging;
- (BOOL)disableTransitLineMerging;
- (BOOL)dontMapMatchToSnappedRouteLine;
- (BOOL)dontMatchRouteLine;
- (BOOL)dontVerifyRouteToTransitSnapping;
- (BOOL)drawContinuously;
- (BOOL)drawDebugTransit;
- (BOOL)drawPerformanceHUD;
- (BOOL)dumpRouteAndPath;
- (BOOL)dumpTransitTileContents;
- (BOOL)enableLoggingInLockScreen;
- (BOOL)enableShieldsOnRouteLine;
- (BOOL)enableSignPostEvents;
- (BOOL)expandedPerformanceHUD;
- (id)footprintsToSuppress;
- (BOOL)forceHiResBuildings;
- (BOOL)hideClientPositionedFeatures;
- (BOOL)hideDirectionalArrows;
- (void)hidePerformanceGroup:(unsigned int)arg1;
- (BOOL)hideServerPositionedRoadFeatures;
- (BOOL)hideServerPositionedTransitFeatures;
- (BOOL)highlightFeaturesOnly;
- (BOOL)highlightUnmatchedRouteLine;
- (BOOL)holdOntoStyleAttributes;
- (BOOL)immediateRasterTextureLoading;
- (id)init;
- (BOOL)isInstalledInLockScreen;
- (BOOL)isPerformanceGroupShown:(unsigned int)arg1;
- (BOOL)keepTooCloseServerPositionedTransitFeatures;
- (BOOL)labelAllowDefaultStyle;
- (BOOL)labelAutoOffsetRoadText;
- (BOOL)labelCollideContinuously;
- (BOOL)labelCollisionEnabled;
- (BOOL)labelFlipAlternatePositionsEnable;
- (BOOL)labelHideLineFeatures;
- (BOOL)labelHidePointFeatures;
- (BOOL)labelHighlighting;
- (BOOL)labelHighlightingVerboseLoggingEnabled;
- (BOOL)labelTileDecodeEnabled;
- (BOOL)labelTransitLineCollisionEnabled;
- (BOOL)labelUpdateMapTilesContinuously;
- (struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; })landmark2DStrokeSettings;
- (BOOL)layoutContinuously;
- (BOOL)loadGreenTraffic;
- (id)nameForPerformanceGroup:(unsigned int)arg1;
- (BOOL)newRouteTraffic;
- (unsigned int)numPerformanceGroups;
- (BOOL)overlaysShouldDrawDebug;
- (BOOL)paintBuildingNormals;
- (BOOL)paintCoastlines;
- (BOOL)paintJunctions;
- (BOOL)paintLabelBounds;
- (BOOL)paintLabelCollisionLines;
- (BOOL)paintLabelCounts;
- (BOOL)paintLabelRoadFeatures;
- (BOOL)paintMapTiles;
- (BOOL)paintPoiTiles;
- (BOOL)paintPointTiles;
- (BOOL)paintPolygonTiles;
- (BOOL)paintRoadBoundaries;
- (BOOL)paintRoadSigns;
- (BOOL)paintRoadTiles;
- (BOOL)paintRoadsStitchedByName;
- (BOOL)paintRouteDebugMarkers;
- (BOOL)paintSelectedMapTiles;
- (BOOL)paintTiles;
- (BOOL)paintTrafficSkeleton;
- (BOOL)paintTransitCounts;
- (BOOL)paintVertices;
- (BOOL)prioritizeTrafficSkeleton;
- (BOOL)readLandmarksFromDisk;
- (BOOL)realisticWireframeEnabled;
- (BOOL)renderInSeparateThread;
- (float)ribbonCrispness;
- (float)routeCoarsenThreshold;
- (float)routeRefineThreshold;
- (void)setAltitudeDisableC3mTextureLoading:(BOOL)arg1;
- (void)setAltitudeFadeSpeed:(float)arg1;
- (void)setAltitudeFreezeViewNode:(BOOL)arg1;
- (void)setAltitudeHideMeshTime:(float)arg1;
- (void)setAltitudeHighResSatellite:(BOOL)arg1;
- (void)setAltitudeLodScale:(float)arg1;
- (void)setAltitudeMipmapFlyover:(BOOL)arg1;
- (void)setAltitudeMipmapObjectTree:(BOOL)arg1;
- (void)setAltitudeMipmapSatellite:(BOOL)arg1;
- (void)setAltitudePauseLoading:(BOOL)arg1;
- (void)setAltitudePrintRenderedTilesStat:(BOOL)arg1;
- (void)setAltitudeProfilingEnabled:(BOOL)arg1;
- (void)setAltitudeProfilingType:(unsigned int)arg1;
- (void)setAltitudeProfilingZones:(unsigned int)arg1;
- (void)setAltitudeShowNightLight:(BOOL)arg1;
- (void)setAltitudeShowTileBounds:(BOOL)arg1;
- (void)setAltitudeShowTriggerBounds:(BOOL)arg1;
- (void)setAltitudeTelemetryURL:(id)arg1;
- (void)setAltitudeTexturePaging:(BOOL)arg1;
- (void)setAltitudeTileQualityThreshold:(float)arg1;
- (void)setAltitudeTourSpeedup:(BOOL)arg1;
- (void)setAltitudeTourSpeedupFactor:(float)arg1;
- (void)setConstantlyChangeTileGroup:(BOOL)arg1;
- (void)setCustomLandmarkFromData:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)setCustomLandmarkFromDisk:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2;
- (void)setCustomLandmarkFromDisk:(id)arg1 tileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg2 styleKey:(unsigned int)arg3 styleValue:(int)arg4;
- (void)setDebugStyleAnimations:(BOOL)arg1;
- (void)setDebugStyleManager:(struct shared_ptr<gss::StylesheetManager<gss::PropertyID> > { struct StylesheetManager<gss::PropertyID> {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setDisableIntraLinkTransitLineCrossings:(BOOL)arg1;
- (void)setDisableRoadSignLimit:(BOOL)arg1;
- (void)setDisableRoute:(BOOL)arg1;
- (void)setDisableStylesheetAnimations:(BOOL)arg1;
- (void)setDisableTransitLineDrawing:(BOOL)arg1;
- (void)setDisableTransitLineGroupMerging:(BOOL)arg1;
- (void)setDisableTransitLineMerging:(BOOL)arg1;
- (void)setDontMapMatchToSnappedRouteLine:(BOOL)arg1;
- (void)setDontMatchRouteLine:(BOOL)arg1;
- (void)setDontVerifyRouteToTransitSnapping:(BOOL)arg1;
- (void)setDrawContinuously:(BOOL)arg1;
- (void)setDrawDebugTransit:(BOOL)arg1;
- (void)setDrawPerformanceHUD:(BOOL)arg1;
- (void)setDumpRouteAndPath:(BOOL)arg1;
- (void)setDumpTransitTileContents:(BOOL)arg1;
- (void)setEnableLoggingInLockScreen:(BOOL)arg1;
- (void)setEnableShieldsOnRouteLine:(BOOL)arg1;
- (void)setEnableSignPostEvents:(BOOL)arg1;
- (void)setExpandedPerformanceHUD:(BOOL)arg1;
- (void)setFootprintsToSuppress:(id)arg1;
- (void)setForceHiResBuildings:(BOOL)arg1;
- (void)setHideClientPositionedFeatures:(BOOL)arg1;
- (void)setHideDirectionalArrows:(BOOL)arg1;
- (void)setHideServerPositionedRoadFeatures:(BOOL)arg1;
- (void)setHideServerPositionedTransitFeatures:(BOOL)arg1;
- (void)setHighlightFeaturesOnly:(BOOL)arg1;
- (void)setHighlightUnmatchedRouteLine:(BOOL)arg1;
- (void)setHoldOntoStyleAttributes:(BOOL)arg1;
- (void)setImmediateRasterTextureLoading:(BOOL)arg1;
- (void)setIsInstalledInLockScreen:(BOOL)arg1;
- (void)setKeepTooCloseServerPositionedTransitFeatures:(BOOL)arg1;
- (void)setLabelAllowDefaultStyle:(BOOL)arg1;
- (void)setLabelAutoOffsetRoadText:(BOOL)arg1;
- (void)setLabelCollideContinuously:(BOOL)arg1;
- (void)setLabelCollisionEnabled:(BOOL)arg1;
- (void)setLabelFlipAlternatePositionsEnable:(BOOL)arg1;
- (void)setLabelHideLineFeatures:(BOOL)arg1;
- (void)setLabelHidePointFeatures:(BOOL)arg1;
- (void)setLabelHighlighting:(BOOL)arg1;
- (void)setLabelHighlightingVerboseLoggingEnabled:(BOOL)arg1;
- (void)setLabelTileDecodeEnabled:(BOOL)arg1;
- (void)setLabelTransitLineCollisionEnabled:(BOOL)arg1;
- (void)setLabelUpdateMapTilesContinuously:(BOOL)arg1;
- (void)setLandmark2DStrokeSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; float x5; })arg1;
- (void)setLayoutContinuously:(BOOL)arg1;
- (void)setLoadGreenTraffic:(BOOL)arg1;
- (void)setNewRouteTraffic:(BOOL)arg1;
- (void)setPaintBuildingNormals:(BOOL)arg1;
- (void)setPaintCoastlines:(BOOL)arg1;
- (void)setPaintJunctions:(BOOL)arg1;
- (void)setPaintLabelBounds:(BOOL)arg1;
- (void)setPaintLabelCollisionLines:(BOOL)arg1;
- (void)setPaintLabelCounts:(BOOL)arg1;
- (void)setPaintLabelRoadFeatures:(BOOL)arg1;
- (void)setPaintMapTiles:(BOOL)arg1;
- (void)setPaintPoiTiles:(BOOL)arg1;
- (void)setPaintPointTiles:(BOOL)arg1;
- (void)setPaintPolygonTiles:(BOOL)arg1;
- (void)setPaintRoadBoundaries:(BOOL)arg1;
- (void)setPaintRoadSigns:(BOOL)arg1;
- (void)setPaintRoadTiles:(BOOL)arg1;
- (void)setPaintRoadsStitchedByName:(BOOL)arg1;
- (void)setPaintRouteDebugMarkers:(BOOL)arg1;
- (void)setPaintSelectedMapTiles:(BOOL)arg1;
- (void)setPaintTiles:(BOOL)arg1;
- (void)setPaintTrafficSkeleton:(BOOL)arg1;
- (void)setPaintTransitCounts:(BOOL)arg1;
- (void)setPaintVertices:(BOOL)arg1;
- (void)setPrioritizeTrafficSkeleton:(BOOL)arg1;
- (void)setReadLandmarksFromDisk:(BOOL)arg1;
- (void)setRealisticWireframeEnabled:(BOOL)arg1;
- (void)setRenderInSeparateThread:(BOOL)arg1;
- (void)setRibbonCrispness:(float)arg1;
- (void)setRouteCoarsenThreshold:(float)arg1;
- (void)setRouteRefineThreshold:(float)arg1;
- (void)setShouldUseTestTileLoader:(BOOL)arg1;
- (void)setShowNavCameraDebugConsole:(BOOL)arg1;
- (void)setShowNavCameraDebugConsoleAttributes:(BOOL)arg1;
- (void)setShowNavCameraDebugConsoleProperties:(BOOL)arg1;
- (void)setShowNavCameraDebugLegend:(BOOL)arg1;
- (void)setShowNavCameraDebugOverlay:(BOOL)arg1;
- (void)setShowTrafficCasing:(BOOL)arg1;
- (void)setTrackingCameraZoomFurther:(BOOL)arg1;
- (void)setTransitHighlighting:(BOOL)arg1;
- (void)setUseBuildingShadowTexture:(BOOL)arg1;
- (void)setUseMetalRenderer:(BOOL)arg1;
- (void)setUseStaticTrafficFeed:(BOOL)arg1;
- (void)setUseTransactionManager:(BOOL)arg1;
- (BOOL)shouldDrawDebug;
- (BOOL)shouldUseTestTileLoader;
- (BOOL)showNavCameraDebugConsole;
- (BOOL)showNavCameraDebugConsoleAttributes;
- (BOOL)showNavCameraDebugConsoleProperties;
- (BOOL)showNavCameraDebugLegend;
- (BOOL)showNavCameraDebugOverlay;
- (void)showPerformanceGroup:(unsigned int)arg1;
- (BOOL)showTrafficCasing;
- (BOOL)trackingCameraZoomFurther;
- (BOOL)transitHighlighting;
- (BOOL)useBuildingShadowTexture;
- (BOOL)useMetalRenderer;
- (BOOL)useStaticTrafficFeed;
- (BOOL)useTransactionManager;

@end
