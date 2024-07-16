# chatserver
基于muduo库实现的集群聊天服务器 包括服务器和客户端 使用nginx的TCP负载均衡器 使用redis进行跨服务器通信
编译方式
cd build/
rm -rf *
cmake ..
make
运行环境
nginx + redis
