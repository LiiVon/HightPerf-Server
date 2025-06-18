// 简单HTTP服务器框架
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main() {
    int server_fd = socket(AF_INET, SOCK_STREAM, 0);
    // 更多代码...
    printf("Server started at port 8080!\n");
    return 0;
}
