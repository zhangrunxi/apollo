planning_context:
规划上下文
里面保存了极其丰富的信息，包括规划器状态，决策器状态

planningbase的初始化主要干了两个事情，一个是初始化planning context，另外一个是初始化TaskFactory
local_view中包含 1.障碍物预测信息 2.底盘信息 3.定位预测信息 4.交通灯信息 5.路由信息 6.相对地图信息
