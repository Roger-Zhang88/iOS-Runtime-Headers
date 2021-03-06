/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDocumentSaveOperationState : TSPSaveOperationState {
    NSURL * _URL;
    BOOL  _didEndWriteOperation;
    BOOL  _didResetDocumentRevision;
    TSPObject * _documentObject;
    TSPPackageWriter * _documentPackageWriter;
    NSString * _documentPasswordHint;
    TSPDocumentProperties * _documentProperties;
    TSPDocumentRevision * _documentRevision;
    TSPDocumentProperties * _documentSupportProperties;
    NSUUID * _documentUUID;
    SFUCryptoKey * _encryptionKey;
    NSURL * _originalSupportURL;
    int  _packageType;
    NSData * _passwordVerifier;
    NSProgress * _progress;
    NSURL * _relativeURLForExternalData;
    unsigned long long  _saveToken;
    BOOL  _shouldLeavePendingEndSave;
    BOOL  _shouldResumeAsynchronousModifications;
    TSPObject * _supportObject;
    TSPPackageWriter * _supportPackageWriter;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic) BOOL didEndWriteOperation;
@property (nonatomic) BOOL didResetDocumentRevision;
@property (nonatomic, retain) TSPObject *documentObject;
@property (nonatomic, retain) TSPPackageWriter *documentPackageWriter;
@property (nonatomic, copy) NSString *documentPasswordHint;
@property (nonatomic, retain) TSPDocumentProperties *documentProperties;
@property (nonatomic, retain) TSPDocumentRevision *documentRevision;
@property (nonatomic, retain) TSPDocumentProperties *documentSupportProperties;
@property (nonatomic, copy) NSUUID *documentUUID;
@property (nonatomic, retain) SFUCryptoKey *encryptionKey;
@property (nonatomic, copy) NSURL *originalSupportURL;
@property (nonatomic, readonly) int packageType;
@property (nonatomic, retain) NSData *passwordVerifier;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, copy) NSURL *relativeURLForExternalData;
@property (nonatomic) unsigned long long saveToken;
@property (nonatomic) BOOL shouldLeavePendingEndSave;
@property (nonatomic) BOOL shouldResumeAsynchronousModifications;
@property (nonatomic, retain) TSPObject *supportObject;
@property (nonatomic, retain) TSPPackageWriter *supportPackageWriter;

- (void).cxx_destruct;
- (id)URL;
- (BOOL)didEndWriteOperation;
- (BOOL)didResetDocumentRevision;
- (id)documentObject;
- (id)documentPackageWriter;
- (id)documentPasswordHint;
- (id)documentProperties;
- (id)documentRevision;
- (id)documentSupportProperties;
- (id)documentUUID;
- (id)encryptionKey;
- (id)init;
- (id)initWithURL:(id)arg1 updateType:(int)arg2 packageType:(int)arg3;
- (id)originalSupportURL;
- (int)packageType;
- (id)passwordVerifier;
- (id)progress;
- (id)relativeURLForExternalData;
- (unsigned long long)saveToken;
- (void)setDidEndWriteOperation:(BOOL)arg1;
- (void)setDidResetDocumentRevision:(BOOL)arg1;
- (void)setDocumentObject:(id)arg1;
- (void)setDocumentPackageWriter:(id)arg1;
- (void)setDocumentPasswordHint:(id)arg1;
- (void)setDocumentProperties:(id)arg1;
- (void)setDocumentRevision:(id)arg1;
- (void)setDocumentSupportProperties:(id)arg1;
- (void)setDocumentUUID:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setOriginalSupportURL:(id)arg1;
- (void)setPasswordVerifier:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setRelativeURLForExternalData:(id)arg1;
- (void)setSaveToken:(unsigned long long)arg1;
- (void)setShouldLeavePendingEndSave:(BOOL)arg1;
- (void)setShouldResumeAsynchronousModifications:(BOOL)arg1;
- (void)setSupportObject:(id)arg1;
- (void)setSupportPackageWriter:(id)arg1;
- (BOOL)shouldLeavePendingEndSave;
- (BOOL)shouldResumeAsynchronousModifications;
- (id)supportObject;
- (id)supportPackageWriter;

@end
