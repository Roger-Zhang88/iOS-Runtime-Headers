/* Generated by RuntimeBrowser.
 */

@protocol CKBrowserViewControllerSendDelegate <NSObject>

@required

- (void)commitPayload:(CKBrowserItemPayload *)arg1;
- (void)commitSticker:(IMSticker *)arg1;
- (void)commitSticker:(IMSticker *)arg1 withDragTarget:(CKBrowserDragControllerTarget *)arg2;
- (void)dismiss;
- (void)dismissAndReloadInputViews:(BOOL)arg1;
- (void)dismissToKeyboard:(BOOL)arg1;
- (<CKBrowserDragControllerTranscriptDelegate> *)dragControllerTranscriptDelegate;
- (void)openURL:(void *)arg1 applicationIdentifier:(void *)arg2 pluginID:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)openURL:(void *)arg1 pluginID:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSURL *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, BOOL, void*
- (void)requestPresentationStyleExpanded:(BOOL)arg1;
- (void)setEntryViewHidden:(BOOL)arg1;
- (void)setLocalUserIsTyping:(BOOL)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(BOOL)arg2;

@optional

- (void)commitSticker:(IMSticker *)arg1 atScreenCoordinate:(struct CGPoint { double x1; double x2; })arg2 scale:(float)arg3 rotation:(float)arg4;
- (void)commitSticker:(IMSticker *)arg1 forPlugin:(NSString *)arg2;
- (void)dismissAndReloadInputViews:(BOOL)arg1 forPlugin:(NSString *)arg2;
- (BOOL)handwritingIsDisplayed;
- (void)requestPresentationStyleExpanded:(BOOL)arg1 forPlugin:(NSString *)arg2;
- (void)startEditingPayload:(CKBrowserItemPayload *)arg1 dismiss:(BOOL)arg2 forPlugin:(NSString *)arg3;

@end