# SCAddPushMnueView
###使用说明
第一步  #import "SCAddPushMnueView.h"   
###第二步
<pre> SCCellModel *one = [[SCCellModel alloc] initWithTitle:@"添加好友" imageName:@"iconone"];/r
    SCCellModel *two = [[SSCellModel alloc] initWithTitle:@"发起群聊" imageName:@"icontwo"];/r
    SCCellModel *three = [[SCCellModel alloc] initWithTitle:@"扫一扫" imageName:@"iconthere"];/r
    NSArrary * SCDataArr = [one,two,there];</pre>
###第三步
<pre>
   _addView = [[SCAddPushMnueView alloc] initWithDataArray:self.dataArr origin:CGPointMake(btn.center.x+20, btn.frame.origin.y + btn.bounds.size.height +35) width:125 height:44 direction:kLrdOutputViewDirectionRight];
    _addView.delegate = self;
    _addView.dismissOperation = ^(){
        //设置成nil，以防内存泄露
        _addView = nil;
    };
    [_addView pop];
    </pre>
###第四步：实现代理
<pre>
- (void)didSelectedAtIndexPath:(NSIndexPath *)indexPath;
</pre>
