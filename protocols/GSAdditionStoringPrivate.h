/* Generated by RuntimeBrowser.
 */

@protocol GSAdditionStoringPrivate <GSAdditionStoring>

@required

- (NSDictionary *)getAdditionDictionary:(GSAddition *)arg1 error:(id*)arg2;
- (BOOL)mergeAdditionUserInfo:(GSAddition *)arg1 value:(NSDictionary *)arg2 error:(id*)arg3;
- (BOOL)setAdditionDisplayName:(GSAddition *)arg1 value:(NSString *)arg2 error:(id*)arg3;
- (NSDictionary *)setAdditionNameSpace:(GSAddition *)arg1 value:(NSString *)arg2 error:(id*)arg3;
- (BOOL)setAdditionOptions:(GSAddition *)arg1 value:(unsigned long long)arg2 error:(id*)arg3;

@end