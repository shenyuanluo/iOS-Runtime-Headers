/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayViewContent, NSString;

@interface EKDayViewContentGeometryDelegate : NSObject <CUIKSingleDayTimelineGeometryDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    EKDayViewContent *_dayViewContent;
    } _frame;
}

@property EKDayViewContent * dayViewContent;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } displayedRect;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } frame;
@property(readonly) unsigned int hash;
@property(readonly) float hourHeight;
@property(readonly) BOOL originIsUpperLeft;
@property(readonly) Class superclass;
@property(readonly) float timeWidth;
@property(readonly) float topPadding;

- (void).cxx_destruct;
- (double)dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)dayViewContent;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })displayedRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (float)hourHeight;
- (BOOL)originIsUpperLeft;
- (struct CGPoint { float x1; float x2; })pointForDate:(double)arg1;
- (void)setDayViewContent:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)timeWidth;
- (float)topPadding;

@end