#include <iostream>
using namespace std;

class CTest
{
public:
    CTest()
    {
        m_nData = 10;
    }
    int m_nData;

    void PrintData(void);
};

void CTest::PrintData()
{
    cout << m_nData << endl;
}
int main()
{
    CTest t;
    t.PrintData();
    return 0;
}