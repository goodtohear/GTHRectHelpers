//
//  GTHRectHelpers.h
//  Pods
//
//  Created by Michael Forrest on 08/02/2013.
//
//

#import <Foundation/Foundation.h>

CG_INLINE CGRect
CGRectSetWidth(CGRect rect, CGFloat newWidth)
{
    rect.size.width = newWidth;
    return rect;
}
CG_INLINE CGRect
CGRectSetHeight(CGRect rect, CGFloat height)
{
    rect.size.height = height;
    return rect;
}

CG_INLINE CGRect
CGRectSetOrigin(CGRect rect, CGFloat left, CGFloat top)
{
	rect.origin.x = left;
	rect.origin.y = top;
	return rect;
}

CG_INLINE CGRect
CGRectSetTop(CGRect rect, CGFloat top)
{
	rect.origin.y = top;
	return rect;
}
CG_INLINE CGRect
CGRectSetLeft(CGRect rect, CGFloat left)
{
	rect.origin.x = left;
	return rect;
}
CG_INLINE CGRect
CGRectResetOrigin(CGRect rect)
{
	rect.origin = CGPointZero;
	return rect;
}

void setViewLeft(UIView * view, CGFloat left){
    view.frame = CGRectSetLeft(view.frame, left);
}
void setViewRight(UIView * view, CGFloat right){
    view.frame = CGRectSetLeft(view.frame, right - view.frame.size.width);
}
void setViewTop(UIView * view, CGFloat top){
    view.frame = CGRectSetTop(view.frame, top);
}
void setViewBottom(UIView * view, CGFloat bottom){
    view.frame = CGRectSetTop(view.frame, bottom - view.frame.size.height);
}
void setViewHeight(UIView * view, CGFloat height){
    view.frame = CGRectSetHeight(view.frame, height);
}
void setViewWidth(UIView*view, CGFloat width){
    view.frame = CGRectSetWidth(view.frame, width);
}
void placeViewAbove(UIView * below, UIView * above, CGFloat space){
    setViewBottom(above, below.frame.origin.y - space );
}
void placeViewBelow(UIView * above, UIView * below, CGFloat space){
    setViewTop(below, CGRectGetMaxY(above.frame) + space);
}