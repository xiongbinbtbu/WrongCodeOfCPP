inet_ntoa函数返回的是static char[]
在printf的时候编译器先计算inet_ntoa(addrTo),返回一个字符串的地址,然后再去计算inet_ntoa(addr),又返回一个字符串的地址。这两个字符串的地址都是inet_ntoa函数的static char[]，后计算的inet_ntoa(addr)会覆盖先计算的inet_ntoa(addrTo),因此输出相同值
所以我们慎用函数返回static内存的方法，如果使用了需要有个说明，千万不要在一个表达式中多次使用这个函数
以下为执行结果
make
./staticMemForApi 172.16.23.225 172.16.7.100
172.16.7.100,172.16.7.100
172.16.23.225
172.16.7.100

