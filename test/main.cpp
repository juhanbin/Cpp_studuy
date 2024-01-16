#include <iostream>
using namespace std;

class CMyData
{
public:
    CMyData() { cout << "CMyDAta()" << endl; }
    CMyData(int nParam) { cout << "CMyDAta(int)" << endl; }
    CMyData(double dParam) { cout << "CMyDAta(double)" << endl; }
};
class CMyDataEx : public CMyData
{
public:
    CMyDataEx() { cout << "CMyDataEx()" << endl; }

    CMyDataEx(int nParam) : CMyData(nParam)
    {
        cout << "CMyDAtaEx(int)" << endl;
    }
    CMyDataEx(double dParam) : CMyData()
    {
        cout << "CMyDAtaEx(double)" << endl;
    }
};
int main(int argc, char* argv[])
{
    CMyDataEx a;
    cout << "********" << endl;
    CMyDataEx b(5);
    cout << "********" << endl;
    CMyDataEx c(3.3);

    return 0;
}