#include <iostream>
using namespace std;

namespace TEST
{
    int g_nData = 100;
    void TestFunc(void)
    {
        cout << "TEST::TestFunc()" << endl;
    }
}

using namespace TEST;

int main()
{
    TestFunc();
    cout << g_nData <<endl;
}