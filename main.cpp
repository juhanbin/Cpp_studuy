#include <iostream>
using namespace std;

class CTest
{
public:
    CTest(void);
    int m_nData = 5;
};

CTest::CTest() { }

int main()
{
    CTest a;
    cout << a.m_nData << endl;

    return 0;
}