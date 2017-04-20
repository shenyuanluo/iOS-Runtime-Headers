/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCObservable : NSObject {
    NSMutableArray * _observers;
    unsigned int  _token;
    id  _value;
}

@property (nonatomic, retain) NSMutableArray *observers;
@property (nonatomic) unsigned int token;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithValue:(id)arg1;
- (void)next:(id)arg1;
- (id)observe:(id /* block */)arg1;
- (id)observers;
- (void)quietNext:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setToken:(unsigned int)arg1;
- (void)setValue:(id)arg1;
- (unsigned int)token;
- (id)value;

@end