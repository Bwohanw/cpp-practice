#include <iostream>



int multiply(int a, int b) {
    return a*b;
}

int add(int a, int b) {
    return a+b;
}

void print(int (*funcptr)(int, int), int a, int b) {
    std::cout << "the value of the return is " << funcptr(a,b) << std::endl;
}

int main() {
    int (*funcptr)(int, int);
    funcptr = multiply;
    int result = funcptr(5,6);
    std::cout << result << std::endl;
    funcptr = add;
    result = funcptr(5,6);
    std::cout << result << std::endl;
    print(&multiply, 3, 5);

    int b = 10;
    int* a = &b;
    std::cout << *a << std::endl;
    b *= 5;
    /*
    lambda function, not supported by installed version of g++
    returns an int, takes in b by reference, no params, multiplies b by 5
    auto fun = [&b](){
        b *= 5;
    };
    fun();
    */
    std::cout << *a << std::endl;
    return 0;
}
