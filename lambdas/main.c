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
    return 0;
}
