#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    struct in_addr addr;
    struct in_addr addrTo;

    if (argc != 3) {
        fprintf(stderr, "%s <dotted-address>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (inet_aton(argv[1], &addr) == 0) {
        perror("inet_aton");
        exit(EXIT_FAILURE);
    }

    if (inet_aton(argv[2], &addrTo) == 0) {
        perror("inet_aton");
        exit(EXIT_FAILURE);
    }
    printf("%s,%s\n", inet_ntoa(addr),inet_ntoa(addrTo));
    printf("%s\n", inet_ntoa(addr));
    printf("%s\n", inet_ntoa(addrTo));
    exit(EXIT_SUCCESS);
}
