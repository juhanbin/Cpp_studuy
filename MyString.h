//
// Created by 주한빈 on 2023/12/18.
//

#ifndef C___STUDY_MYSTRING_H
#define C___STUDY_MYSTRING_H


class CMyString {
public:
    CMyString();
    ~CMyString();

private:
    char* m_pszData;
    int m_nLength;

public:
    int SetString(const char* pszParam);
    const char* GetString();
    void Release();
};



#endif //C___STUDY_MYSTRING_H
