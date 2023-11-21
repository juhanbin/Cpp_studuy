#include <iostream>

namespace TEST
{
    int g_nData = 100;

    void TestFunc(void)
    {
        std::cout << "Test::TestFunc()" << std::endl;
    }
}

int main()
{
    TEST::TestFunc();
    std::cout << TEST::g_nData << std::endl;

    return 0;
}