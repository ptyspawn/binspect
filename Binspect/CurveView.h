//
//  CurveView.h
//  Binspect
//
//  Created by Joe Savage on 26/10/2014.
//  Copyright (c) 2014 Joe Savage. All rights reserved.
//

#import <Cocoa/Cocoa.h>

typedef NS_ENUM(NSInteger, CurveViewType) {
    CurveViewTypeBlank,
    CurveViewTypeHilbert,
    CurveViewTypeZigzag
};

typedef NS_ENUM(NSInteger, CurveViewColourMode) {
    CurveViewColourModeBlank,
    CurveViewColourModeSimilarity,
    CurveViewColourModeEntropy,
    CurveViewColourModeStructural
};

@interface CurveView : NSOpenGLView
{
    NSData    *_data;
    NSInteger _type, _colourMode, _pointSize;
    CGSize    _viewBounds;
    float     *_vertexArray, *_colourArray;
}

// TODO: Update the method prototypes shown here.

- (void) setCurveType:(CurveViewType)type;
- (void) setCurveColourMode:(CurveViewColourMode)mode;
- (void) setDataSource:(NSData *)data;
- (void) drawRect: (NSRect) bounds;
- (void) redraw;
- (void) clearMemoryFingerprint;

@end
