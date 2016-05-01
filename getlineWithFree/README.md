函数定义:
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
其中*lineptr指向一个动态分配的内存区域。*n是所分配内存的长度。如果*lineptr是NULL的话，getline函数会自动进行动态内存的分配（忽略*n的大小），所以使用这个函数非常注意的就使用要注意自己进行内存的释放。
如果*lineptr分配了内存，但在使用过程中发现所分配的内存不足的话，getline函数会调用realloc函数来重新进行内存的分配，同时更新*lineptr和*n。
注意*lineptr指向的是一个动态分配的内存，由malloc，calloc或realloc分配的，不能是静态分配的数组。

此次使用中每次调用getline函数都free掉lineptr，但是没有置lineptr为NULL，getline调用时就会使用野指针lineptr导致程序崩溃，需该此程序可以把(1)处注释释放即可
但是反复的释放和getline中的重新分配空间会影响性能，因此应该把free移到循环外面
