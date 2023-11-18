#include <iostream>

template <typename T>
T TestFunc(T a)
{
    std::cout << "매개변수 a: " << a << std::endl;

    return a;
}
int main()
{
    std::cout << "int\t" << TestFunc(3) << std::endl;
    std::cout << "doble\t" << TestFunc(3.3) << std::endl;
    std::cout << "char\t" << TestFunc('A') << std::endl;
    std::cout << "char*\t" << TestFunc("TestString") << std::endl;
    return 0;
}
