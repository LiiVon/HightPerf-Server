#include <sys/epoll.h>
#include <iostream>

// Epoll服务器基础框架
int main() {
    int epoll_fd = epoll_create1(0);
    std::cout << "Epoll server created! Next step: add socket handling";
    return 0;
}
