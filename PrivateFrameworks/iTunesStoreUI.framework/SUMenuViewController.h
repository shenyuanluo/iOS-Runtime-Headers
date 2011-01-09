/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class <SUMenuViewControllerDelegate>, UITableView;



@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate>
{
    <SUMenuViewControllerDelegate> *_delegate;
    NSInteger _selectedIndex;
    UITableView *_tableView;
}

@property NSInteger selectedIndex;
@property <SUMenuViewControllerDelegate> *delegate;


- (NSInteger)selectedIndex;
- (void)setSelectedIndex:(NSInteger)arg1;
- (void)loadView;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)reload;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (BOOL)_sendDidCancel;
- (BOOL)isMenuItemEnabledAtIndex:(NSInteger)arg1;
- (void)performActionForMenuItemAtIndex:(NSInteger)arg1;
- (NSInteger)numberOfMenuItems;
- (id)titleOfMenuItemAtIndex:(NSInteger)arg1;
- (struct CGSize { float x1; float x2; })minimumViewSize;
- (struct CGSize { float x1; float x2; })maximumViewSize;

@end