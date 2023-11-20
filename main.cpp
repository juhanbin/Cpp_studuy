#include <iostream>
#include <cstdio>

#define ADD(a, b)((a) + (b))
int Add(int a, int b)
{
    return a + b;
}
inline int AddNew(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("Add(): %d", ADD(a, b));
    printf("Add(): %d", Add(a, b));
    printf("AddNew(): %d",AddNew(a, b));

    return 0;
}
