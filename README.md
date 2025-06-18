# HightPerf-Server
c++高性能HTTP服务器    |    QPS 35k+    |      支持AI模型部署
## 技术亮点
- ✅ Epoll事件驱动模型
- ✅ 零拷贝文件传输
- ✅ 多级内存池设计

## 快速测试
```bash
# 编译
g++ src/epoll_server.cpp -o server -O3

# 运行
./server --port 8080 --workers 4
```

## 性能优化记录
| 版本   | QPS      | 优化手段               |
|--------|----------|----------------------|
| v0.1   | 8,200    | 基础Epoll实现         |
| v0.2   | 21,000   | 增加线程池            |
| target | **35,000** | 内存池+零拷贝        |
