#include <iostream>

int main ()
{
    int a = 10;
    char  c = 'a';

    int *q = (int * )&c;
    int *p = static_cast<int *>(&c);
}

// we expected that because it violate aliasing rules 
// strict aliasing rules dictate how pointers of diffrent types can alias (refer to) the same memory location.
// by casting a char*  to an int * your effictively treating the memory location of a char as if it were and int which could lead to undefined behaviour.
// so u must commit with the appropriate aliasing rules :
// use a static-cast for related types within an inheritance hierarchy .
// avoid converting unrelated types or types with diffrent memory layouts 