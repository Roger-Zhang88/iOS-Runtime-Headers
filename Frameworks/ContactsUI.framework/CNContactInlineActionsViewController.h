/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNContactActionsViewControllerDelegate, CNUIObjectViewController, CNUIUserActionListConsumer> {
    NSArray * _actionItems;
    CNUIUserActionListDataSource * _actionListDataSource;
    double  _actionTypesInterspace;
    <CNCustomPresentation> * _actionsControllerPresentation;
    CNActionsView * _actionsView;
    CNContact * _contact;
    NSDictionary * _defaultActionPerType;
    <CNContactInlineActionsViewControllerDelegate> * _delegate;
    BOOL  _displaysTitles;
    BOOL  _displaysUnavailableActionTypes;
    <CNSchedulerProvider> * _schedulerProvider;
    NSArray * _supportedActionTypes;
    NSArray * _tokens;
    BOOL  _trackingChanges;
    int  _viewStyle;
    <CNUIObjectViewControllerDelegate> * objectViewControllerDelegate;
}

@property (nonatomic, copy) NSArray *actionItems;
@property (nonatomic, retain) CNUIUserActionListDataSource *actionListDataSource;
@property (nonatomic) double actionTypesInterspace;
@property (nonatomic, retain) <CNCustomPresentation> *actionsControllerPresentation;
@property (nonatomic) CNActionsView *actionsView;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSDictionary *defaultActionPerType;
@property (nonatomic) <CNContactInlineActionsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL displaysTitles;
@property (nonatomic) BOOL displaysUnavailableActionTypes;
@property (readonly) unsigned int hash;
@property (nonatomic) <CNUIObjectViewControllerDelegate> *objectViewControllerDelegate;
@property (nonatomic, retain) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *supportedActionTypes;
@property (nonatomic, readonly) double throttleDelay;
@property (nonatomic, copy) NSArray *tokens;
@property (nonatomic) BOOL trackingChanges;
@property (nonatomic, readonly) UIView *view;
@property (nonatomic) int viewStyle;

+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)actionItemForType:(id)arg1 defaultAction:(id)arg2;
- (id)actionItems;
- (id)actionListDataSource;
- (float)actionTypesInterspace;
- (id)actionsControllerPresentation;
- (id)actionsView;
- (id)allModelsObservable;
- (id)contact;
- (void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2;
- (void)dealloc;
- (id)defaultActionPerType;
- (id)delegate;
- (void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(BOOL)arg3;
- (void)discoverAvailableActionTypes;
- (void)displayAdditionalActionItems:(id)arg1;
- (void)displayAllSupportedTypesDisabled;
- (BOOL)displaysTitles;
- (BOOL)displaysUnavailableActionTypes;
- (id)initWithActionListDataSource:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)objectViewControllerDelegate;
- (void)performAction:(id)arg1;
- (void)processModels:(id)arg1;
- (void)reset;
- (id)schedulerProvider;
- (void)setActionItems:(id)arg1;
- (void)setActionListDataSource:(id)arg1;
- (void)setActionTypesInterspace:(float)arg1;
- (void)setActionsControllerPresentation:(id)arg1;
- (void)setActionsView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDefaultActionPerType:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplaysTitles:(BOOL)arg1;
- (void)setDisplaysUnavailableActionTypes:(BOOL)arg1;
- (void)setObjectViewControllerDelegate:(id)arg1;
- (void)setSchedulerProvider:(id)arg1;
- (void)setSupportedActionTypes:(id)arg1;
- (void)setTokens:(id)arg1;
- (void)setTrackingChanges:(BOOL)arg1;
- (void)setViewStyle:(int)arg1;
- (void)showDisambiguationFromSourceView:(id)arg1 actionType:(id)arg2;
- (id)supportedActionTypes;
- (double)throttleDelay;
- (id)tokens;
- (BOOL)trackingChanges;
- (void)viewDidLoad;
- (int)viewStyle;

@end