/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSNumber, NSString;



@interface CoreDAVHref : CoreDAVItem 
{
    NSString *_href;
    NSNumber *_isUnauthenticated;
}

@property(retain) NSNumber *isUnauthenticated;
@property(retain) NSString *href;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingWithSubItems;
+ (BOOL)errorOnUnknownChildren;

- (void)setHref:(id)arg1;
- (id)href;
- (void)setUnescapedHref:(id)arg1;
- (id)copyCoreDAVParseRules;
- (id)isUnauthenticated;
- (void)setIsUnauthenticated:(id)arg1;
- (id)description;
- (void)dealloc;

@end