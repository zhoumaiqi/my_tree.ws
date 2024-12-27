## 行为树
1.在Groot2中定义需要的节点并构建behavior tree，在文件中定义节点的具体执行方式

2.将“裁判系统”与behavior tree建立联系，sub裁判系统发布的topic，并将其转化消息类型,进而“写在”行为树的blackboard上。以供行为树读取数据
