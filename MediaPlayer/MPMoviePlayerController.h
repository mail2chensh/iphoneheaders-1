/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <Foundation/NSObject.h>

@class UIView;

@interface MPMoviePlayerController : NSObject {
@private
	id _internal;
}
@property(assign, nonatomic) int scalingMode;
@property(assign, nonatomic, getter=isFullscreen) BOOL fullscreen;
@property(assign, nonatomic) BOOL useApplicationAudioSession;
@property(assign, nonatomic) BOOL shouldAutoplay;
@property(assign, nonatomic) int repeatMode;
@property(assign, nonatomic) int controlStyle;
@property(readonly, assign, nonatomic) int loadState;
@property(readonly, assign, nonatomic) int playbackState;
@property(readonly, assign, nonatomic) UIView* backgroundView;
@property(readonly, assign, nonatomic) UIView* view;
-(instancetype)init;
-(instancetype)initWithContentURL:(id)contentURL;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)selector;
-(void)forwardInvocation:(id)invocation;
-(id)contentURL;
-(void)setContentURL:(id)url;
-(void)setFullscreen:(BOOL)fullscreen animated:(BOOL)animated;
-(void)prepareToPlay;
-(BOOL)isPreparedToPlay;
-(void)play;
-(void)pause;
-(void)stop;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(int)movieMediaTypes;
-(void)setMovieSourceType:(int)type;
-(int)movieSourceType;
-(double)duration;
-(double)playableDuration;
-(CGSize)naturalSize;
-(void)setInitialPlaybackTime:(double)time;
-(double)initialPlaybackTime;
-(void)setEndPlaybackTime:(double)time;
-(double)endPlaybackTime;
@end

