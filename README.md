# SCAddPushMnueView
使用说明   ＜/br＞
第一步  #import "SCAddPushMnueView.h"    ＜/br＞
第二步/r
    SCCellModel *one = [[SCCellModel alloc] initWithTitle:@"添加好友" imageName:@"iconone"];/r
    SCCellModel *two = [[SSCellModel alloc] initWithTitle:@"发起群聊" imageName:@"icontwo"];/r
    SCCellModel *three = [[SCCellModel alloc] initWithTitle:@"扫一扫" imageName:@"iconthere"];/r
    NSArrary * SCDataArr = [one,two,there];/r
第三步/r
   _addView = [[SCAddPushMnueView alloc] initWithDataArray:self.dataArr origin:CGPointMake(btn.center.x+20, btn.frame.origin.y + btn.bounds.size.height +35) width:125 height:44 direction:kLrdOutputViewDirectionRight];/r
    _addView.delegate = self;/r
    _addView.dismissOperation = ^(){/r
        //设置成nil，以防内存泄露/r
        _addView = nil;/r
    };/r
    [_addView pop];/r
第四步：实现代理/r
- (void)didSelectedAtIndexPath:(NSIndexPath *)indexPath;
