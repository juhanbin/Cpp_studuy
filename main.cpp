#include <iostream>
using namespace std;

class CTest
{
    int m_nData;

public:
    CTest()
    {
        cout << "CTest::CTest()" << endl;
    }
    ~CTest()
    {
        cout << "~CTest::CTEst()" << endl;
    }
};
int main()
{
    cout << "Begin" << endl;
    CTest *pData = new CTest;
    cout << "Test" << endl;

    delete pData;
    cout << "End" << endl;

    return 0;
}