**文件描述符**：文件描述符是指向操作系统对象的 “指针”——系统调用通过这个指针 (fd) 确定进程希望访问操作系统中的哪个对象。我们有 open, close, read/write, lseek, dup 管理文件描述符。


1. fd    offset   fork    shared
