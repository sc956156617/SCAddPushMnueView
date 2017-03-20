# SCAddPushMnueView
使用说明
第一步  #import "SCAddPushMnueView.h"
第二步
    SCCellModel *one = [[SCCellModel alloc] initWithTitle:@"添加好友" imageName:@"iconone"];
    SCCellModel *two = [[SSCellModel alloc] initWithTitle:@"发起群聊" imageName:@"icontwo"];
    SCCellModel *three = [[SCCellModel alloc] initWithTitle:@"扫一扫" imageName:@"iconthere"];
    NSArrary * SCDataArr = [one,two,there];
第三步
   _addView = [[SCAddPushMnueView alloc] initWithDataArray:self.dataArr origin:CGPointMake(btn.center.x+20, btn.frame.origin.y + btn.bounds.size.height +35) width:125 height:44 direction:kLrdOutputViewDirectionRight];
    _addView.delegate = self;
    _addView.dismissOperation = ^(){
        //设置成nil，以防内存泄露
        _addView = nil;
    };
    [_addView pop];
第四步：实现代理
- (void)didSelectedAtIndexPath:(NSIndexPath *)indexPath;
