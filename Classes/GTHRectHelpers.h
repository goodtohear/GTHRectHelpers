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
