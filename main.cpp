#include <iostream>

int TestFunc(int nParam = 10)
{
    return nParam;
}

int main()
{
    std::cout << TestFunc() << std::endl;
    std::cout << TestFunc(20) << std::endl;
    return 0;
}
