#include <iostream>
#include <cstdio>

class USERDATA
{
public:
    int nAge;
    char szName[32];

    void Print(void)
    {
        printf("%d, %s \n",nAge,szName);
    }
};
int main()
{
    USERDATA user = {10, "철수"};
    user.Print();

    return 0;
}