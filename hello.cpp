#include <iostream>

void func_feature_a(const char* msg)
{
    if (msg != nullptr)
    {
        std::cout << msg << std::endl;
    }
}

int main()
{
    const char* a_msg = "aaaa test";
    std::cout << "Hello World!!" << std::endl;

    func_feature_a(a_msg);
    return 0;
}
