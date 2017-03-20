//
//  AddPushMnueView.h
//  AddPushMnue
//
//  Created by cb on 2017/3/20.
//  Copyright © 2017年 SC. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SCPushMnueViewDelegate <NSObject>

@required
- (void)didSelectedAtIndexPath:(NSIndexPath *)indexPath;
@end

typedef void(^dismissWithOperation)();

typedef NS_ENUM(NSUInteger, SCPushMnueViewDirection) {
    kSCPushMnueViewDirectionLeft = 1,
    kSCPushMnueViewDirectionRight
};

@interface SCAddPushMnueView : UIView

@property (nonatomic, weak) id<SCPushMnueViewDelegate> delegate;
@property (nonatomic, strong) dismissWithOperation dismissOperation;

//初始化方法
//传入参数：模型数组，弹出原点，宽度，高度（每个cell的高度）
- (instancetype)initWithDataArray:(NSArray *)dataArray
                           origin:(CGPoint)origin
                            width:(CGFloat)width
                           height:(CGFloat)height
                        direction:(SCPushMnueViewDirection)direction;
//弹出
- (void)pop;
//消失
- (void)dismiss;

@end


@interface SCCellModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *imageName;

- (instancetype)initWithTitle:(NSString *)title imageName:(NSString *)imageName;

@end
