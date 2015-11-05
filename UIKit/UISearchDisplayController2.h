/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSObject.h>
#import <Availability2.h>

@class NSString, UILabel, UITableView, UIViewController, UISearchBar, UIView;
@protocol UITableViewDelegate, UITableViewDataSource, UISearchDisplayDelegate;

@interface UISearchDisplayController ()
-(instancetype)init;
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)_configureNewSearchBar;
-(void)setSearchBar:(id)bar;
-(void)setSearchContentsController:(id)controller;
-(id)_containingViewOfClass:(Class)aClass;
-(id)_containingTableView;
-(void)_destroyManagedTableView;
-(void)_disableParentScrollViews;
-(void)_enableParentScrollViews;
-(CGRect)_tableViewFrame;
-(void)_setTableViewVisible:(BOOL)visible inView:(id)view;
-(void)_updateSearchBarForTableViewIndexBar:(id)tableViewIndexBar;
-(void)_indexBarFrameChanged:(id)changed;
-(void)showHideAnimationDidFinish;
-(void)setActive:(BOOL)active animated:(BOOL)animated;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)windowWillAnimateRotation:(id)window;
-(void)windowDidRotate:(id)window;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
-(void)navigationControllerWillShowViewController:(id)navigationController;
-(void)navigationControllerDidShowViewController:(id)navigationController;
-(void)_updateNoSearchResultsMessageVisiblity;
-(void)_managedTableViewDidScroll;
-(void)_clearViewController;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_1
-(void)_configureSearchBarForTableView;
-(void)_cleanUpSearchBar;
-(void)_searchBarSuperviewWillChange;
-(void)_searchBarSuperviewChanged;
#endif
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
@property(assign, nonatomic) BOOL dimTableViewOnEmptySearchString;
@property(assign, nonatomic, getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;
-(BOOL)_isSearchBarInBar;
-(void)_popoverKeyboardDidShow:(id)_popoverKeyboard;
-(void)_popoverKeyboardDidHide:(id)_popoverKeyboard;
-(void)_popoverClearButtonPressed:(id)pressed;
-(id)_createPopoverController;
-(void)searchBarResultsListButtonClicked:(id)clicked;
#endif
@end

