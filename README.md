# reactor-base
c realize netlib base event-driven(reactor pattern), os syscall base epoll

# reactor模式
首先reactor是基于事件驱动的，有并发输入源(>=1)，有一个Service Dispatch，有多个对应输入源的事件处理器. Service Dispatch会同步将多个事件源的所产生的event事件分发至对应的事件处理器上. 图形描述如下：
![simple.png](reactor-base/image/simple.png)


# reactor结构
![struct.png](reactor-base/image/struct.png)

# reactor交互
![seq.png](reactor-base/image/seq.png)
