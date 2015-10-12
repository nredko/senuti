/* 
 * The FadingRed Shared Framework (FSFramework) is the legal property of its developers, whose names
 * are listed in the copyright file included with this source distribution.
 * 
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU
 * General Public License as published by the Free Software Foundation; either version 2 of the License,
 * or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 * Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with this program; if not,
 * write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

/* This code is taken from Sean Patrick O'Brien's iLife Controls
 * and has been minimally modified */

#import "NSTitledFrame.h"

@class NSButton, NSImage, NSString;

@interface NSThemeFrame : NSTitledFrame
{
    NSButton *toolbarButton;
    int toolbarVisibleStatus;
    NSImage *showToolbarTransitionImage;
    NSSize showToolbarPreWindowSize;
    NSButton *modeButton;
    int leftGroupTrackingTagNum;
    int rightGroupTrackingTagNum;
    BOOL mouseInsideLeftGroup;
    BOOL mouseInsideRightGroup;
    int widgetState;
    NSString *displayName;
}

+ (void)initialize;
+ (void)drawBevel:(NSRect)fp8 inFrame:(NSRect)fp24 topCornerRounded:(BOOL)fp40;
+ (float)_windowBorderThickness:(unsigned int)fp8;
+ (float)_minXWindowBorderWidth:(unsigned int)fp8;
+ (float)_maxXWindowBorderWidth:(unsigned int)fp8;
+ (float)_minYWindowBorderHeight:(unsigned int)fp8;
+ (float)_windowTitlebarButtonSpacingWidth:(unsigned int)fp8;
+ (float)_windowFileButtonSpacingWidth:(unsigned int)fp8;
+ (float)_minXTitlebarWidgetInset:(unsigned int)fp8;
+ (float)_maxXTitlebarWidgetInset:(unsigned int)fp8;
+ (float)minFrameWidthWithTitle:(id)fp8 styleMask:(unsigned int)fp12;
+ (float)_windowSideTitlebarTitleMinWidth:(unsigned int)fp8;
+ (float)_windowTitlebarTitleMinHeight:(unsigned int)fp8;
+ (float)_sideTitlebarWidth:(unsigned int)fp8;
+ (float)_titlebarHeight:(unsigned int)fp8;
+ (float)_resizeHeight:(unsigned int)fp8;
+ (BOOL)_resizeFromEdge;
+ (NSSize)sizeOfTitlebarButtons:(unsigned int)fp8;
+ (float)_contentToFrameMinXWidth:(unsigned int)fp8;
+ (float)_contentToFrameMaxXWidth:(unsigned int)fp8;
+ (float)_contentToFrameMinYHeight:(unsigned int)fp8;
+ (float)_contentToFrameMaxYHeight:(unsigned int)fp8;
+ (unsigned int)_validateStyleMask:(unsigned int)fp8;
- (NSSize)_topCornerSize;
- (NSSize)_bottomCornerSize;
- (void *)_createWindowOpaqueShape;
- (void)shapeWindow;
- (void)_recursiveDisplayRectIfNeededIgnoringOpacity:(NSRect)fp8 isVisibleRect:(BOOL)fp24 rectIsVisibleRectForView:(id)fp28 topView:(BOOL)fp32;
- (void *)_regionForOpaqueDescendants:(NSRect)fp8 forMove:(BOOL)fp24;
- (void)_drawFrameInterior:(NSRect *)fp8 clip:(NSRect)fp12;
- (void)_setTextShadow:(BOOL)fp8;
- (BOOL)_isOnePieceTitleAndToolbar;
- (void)_drawUnifiedToolbarBackgroundInRect:(NSRect)fp8 withState:(int)fp24;
- (void)_drawUnifiedToolbar:(int)fp8;
- (void)_drawTitleBar:(NSRect)fp8;
- (void)_drawResizeIndicators:(NSRect)fp8;
- (void)_drawFrameRects:(NSRect)fp8;
- (void)drawFrame:(NSRect)fp8;
- (id)contentFill;
- (void)viewDidEndLiveResize;
- (float)contentAlpha;
- (void)setThemeFrameWidgetState:(int)fp8;
- (BOOL)constrainResizeEdge:(int *)fp8 withDelta:(NSSize)fp12 elapsedTime:(float)fp20;
- (void)addFileButton:(id)fp8;
- (void)_updateButtons;
- (void)_updateButtonState;
- (id)newCloseButton;
- (id)newZoomButton;
- (id)newMiniaturizeButton;
- (id)newToolbarButton;
- (id)newFileButton;
- (void)_resetTitleBarButtons;
- (void)setDocumentEdited:(BOOL)fp8;
- (id)toolbarButton;
- (id)modeButton;
- (id)initWithFrame:(NSRect)fp8 styleMask:(unsigned int)fp24 owner:(id)fp28;
- (void)setIsResizable:(BOOL)fp8;
- (void)dealloc;
- (void)finalize;
- (BOOL)preservesContentDuringLiveResize;
- (void)setFrameSize:(NSSize)fp8;
- (BOOL)_canHaveToolbar;
- (BOOL)_toolbarIsInTransition;
- (BOOL)_toolbarIsShown;
- (BOOL)_toolbarIsHidden;
- (id)_toolbarView;
- (id)_toolbar;
- (float)_distanceFromToolbarBaseToTitlebar;
- (unsigned int)_shadowFlags;
- (NSRect)frameRectForContentRect:(NSRect)fp8 styleMask:(unsigned int)fp24;
- (NSRect)contentRectForFrameRect:(NSRect)fp8 styleMask:(unsigned int)fp24;
- (NSSize)minFrameSizeForMinContentSize:(NSSize)fp8 styleMask:(unsigned int)fp16;
- (NSRect)contentRect;
- (NSRect)_contentRectExcludingToolbar;
- (NSRect)_contentRectIncludingToolbarAtHome;
- (void)_setToolbarShowHideResizeWeightingOptimizationOn:(BOOL)fp8;
- (BOOL)_usingToolbarShowHideWeightingOptimization;
- (void)handleSetFrameCommonRedisplay;
- (void)_startLiveResizeAsTopLevel;
- (void)_endLiveResizeAsTopLevel;
- (void)_growContentReshapeContentAndToolbarView:(int)fp8 animate:(BOOL)fp12;
- (BOOL)_growWindowReshapeContentAndToolbarView:(int)fp8 animate:(BOOL)fp12;
- (void)_reshapeContentAndToolbarView:(int)fp8 resizeWindow:(BOOL)fp12 animate:(BOOL)fp16;
- (void)_toolbarFrameSizeChanged:(id)fp8 oldSize:(NSSize)fp12;
- (void)_syncToolbarPosition;
- (void)_showHideToolbar:(int)fp8 resizeWindow:(BOOL)fp12 animate:(BOOL)fp16;
- (void)_showToolbarWithAnimation:(BOOL)fp8;
- (void)_hideToolbarWithAnimation:(BOOL)fp8;
- (void)_drawToolbarTransitionIfNecessary;
- (void)drawRect:(NSRect)fp8;
- (void)resetCursorRects;
- (BOOL)shouldBeTreatedAsInkEvent:(id)fp8;
- (BOOL)_shouldBeTreatedAsInkEventInInactiveWindow:(id)fp8;
- (id)hitTest:(NSPoint)fp8;
- (NSRect)_leftGroupRect;
- (NSRect)_rightGroupRect;
- (void)_updateWidgets;
- (void)_updateMouseTracking;
- (void)mouseEntered:(id)fp8;
- (void)mouseExited:(id)fp8;
- (void)_setMouseEnteredGroup:(BOOL)fp8 entered:(BOOL)fp12;
- (BOOL)_mouseInGroup:(id)fp8;
- (NSSize)miniaturizedSize;
- (float)_minXTitlebarDecorationMinWidth;
- (float)_maxXTitlebarDecorationMinWidth;
- (NSSize)minFrameSize;
- (float)_windowBorderThickness;
- (float)_windowTitlebarXResizeBorderThickness;
- (float)_windowTitlebarYResizeBorderThickness;
- (float)_windowResizeBorderThickness;
- (float)_minXWindowBorderWidth;
- (float)_maxXWindowBorderWidth;
- (float)_minYWindowBorderHeight;
- (float)_maxYWindowBorderHeight;
- (float)_minYTitlebarButtonsOffset;
- (float)_minYTitlebarTitleOffset;
- (float)_sideTitlebarWidth;
- (float)_titlebarHeight;
- (NSRect)_defaultTitlebarTitleRect;
- (NSRect)_titlebarTitleRect;
- (NSRect)titlebarRect;
- (float)_windowTitlebarTitleMinHeight;
- (NSSize)_sizeOfTitlebarFileButton;
- (NSSize)sizeOfTitlebarToolbarButton;
- (float)_windowTitlebarButtonSpacingWidth;
- (float)_windowFileButtonSpacingWidth;
- (float)_minXTitlebarWidgetInset;
- (float)_maxXTitlebarWidgetInset;
- (float)_minXTitlebarButtonsWidth;
- (float)_maxXTitlebarButtonsWidth;
- (NSPoint)_closeButtonOrigin;
- (NSPoint)_zoomButtonOrigin;
- (NSPoint)_collapseButtonOrigin;
- (NSPoint)_toolbarButtonOrigin;
- (NSPoint)_fileButtonOrigin;
- (void)_tileTitlebarAndRedisplay:(BOOL)fp8;
- (NSRect)_commandPopupRect;
- (void)_resetDragMargins;
- (float)_maxYTitlebarDragHeight;
- (float)_minXTitlebarDragWidth;
- (float)_maxXTitlebarDragWidth;
- (float)_contentToFrameMinXWidth;
- (float)_contentToFrameMaxXWidth;
- (float)_contentToFrameMinYHeight;
- (float)_contentToFrameMaxYHeight;
- (float)_windowResizeCornerThickness;
- (NSRect)_minYResizeRect;
- (NSRect)_minYminXResizeRect;
- (NSRect)_minYmaxXResizeRect;
- (NSRect)_minXResizeRect;
- (NSRect)_minXminYResizeRect;
- (NSRect)_minXmaxYResizeRect;
- (NSRect)_maxYResizeRect;
- (NSRect)_maxYminXResizeRect;
- (NSRect)_maxYmaxXResizeRect;
- (NSRect)_maxXResizeRect;
- (NSRect)_maxXminYResizeRect;
- (NSRect)_maxXmaxYResizeRect;
- (NSRect)_minXTitlebarResizeRect;
- (NSRect)_maxXTitlebarResizeRect;
- (NSRect)_minXBorderRect;
- (NSRect)_maxXBorderRect;
- (NSRect)_maxYBorderRect;
- (NSRect)_minYBorderRect;
- (void)_setUtilityWindow:(BOOL)fp8;
- (BOOL)_isUtility;
- (float)_sheetHeightAdjustment;
- (void)_setSheet:(BOOL)fp8;
- (BOOL)_isSheet;
- (BOOL)_isResizable;
- (BOOL)_isClosable;
- (BOOL)_isMiniaturizable;
- (BOOL)_hasToolbar;
- (NSRect)_growBoxRect;
- (void)_drawGrowBoxWithClip:(NSRect)fp8;
- (BOOL)_inactiveButtonsNeedMask;
- (void)mouseDown:(id)fp8;
- (id)_displayName;
- (void)_setDisplayName:(id)fp8;

@end

