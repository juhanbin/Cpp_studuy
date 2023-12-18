//
// Created by 주한빈 on 2023/12/18.
//

#include "MyString.h"

CMyString::CMyString()
:m_pszData(nullptr)
, m_nLength(0)
{
}
CMyString::~CMyString()
{
}

int CMyString::SetString(const char *pszParam)
{
    return 0;
}
const char* CMyString::GetString()
{
    return nullptr;
}
void CMyString::Release()
{

}