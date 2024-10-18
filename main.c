#include <stdio.h>
#include <test_lib.h>

#define float int
#define int float

int main(void)
{
    printf("Hello, World! %d \n", a);

    test();

    return 0;
}
