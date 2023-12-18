#include <iostream>
#include "MyString.h"
using namespace std;

//class CMyData
//{
//public:
//    CMyData(int nParam) : m_nData(nParam) { };
//    void PrintData()
//    {
//        cout << m_nData << endl;
//        cout << CMyData::m_nData << endl;
//        cout << this -> m_nData << endl;
//        cout << this -> CMyData::m_nData << endl;
//    }
//private:
//    int m_nData;
//};

int main()
{
    CMyString strData;
    strData.SetString("Hello");
    cout << strData.GetString() << endl;
    
    return 0;
}