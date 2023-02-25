#include "test.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{    
    engine::print();
    return 0;
}

void engine::print()
{
    printf("Hello, world!\n");
}
