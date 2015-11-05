/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIButton.h>
#import "MediaPlayer-Structs.h"

@class UIImage, NSURL;
@protocol MPNowPlayingItemQueueInfoButtonDelegate;

@interface MPNowPlayingItemQueueInfoButton : UIButton {
	UIImage* _infoCircleImage;
	NSURL* _infoURL;
	unsigned _infoFeederCount;
	float _minSizingTextWidth;
	unsigned _minSizingPositionInQueue;
	int _layoutDisabledCount;
	unsigned _allowedDisplayTypes;
	int _infoTypeForLayout;
	id<MPNowPlayingItemQueueInfoButtonDelegate> _delegate;
}
@property(retain, nonatomic) NSURL* infoURL;
@property(assign, nonatomic) unsigned allowedDisplayTypes;
@property(assign, nonatomic) id<MPNowPlayingItemQueueInfoButtonDelegate> delegate;
@property(readonly, assign, nonatomic) int infoDisplayType;
-(instancetype)init;
-(void)dealloc;
-(int)buttonType;
-(int)_infoDisplayTypeForURL:(id)url feederCount:(unsigned)count askDelegate:(BOOL)delegate;
-(float)_minSizingTextWidth;
-(void)_updateFeederCountInfo:(id)info;
-(CGSize)sizeThatFits:(CGSize)fits;
-(CGRect)titleRectForContentRect:(CGRect)contentRect;
-(CGRect)imageRectForContentRect:(CGRect)contentRect;
-(void)layoutSubviews;
-(int)_activeDisplayType;
-(BOOL)_shouldDisplaysInfoCircleImage;
-(BOOL)configureForItem:(id)item atTime:(double)time;
-(void)configureForItem:(id)item;
-(void)updateForItemCrossedTimeMarkerNotification:(id)itemCrossedTimeMarkerNotification currentTime:(double)time;
-(void)clicked:(id)clicked;
@end

