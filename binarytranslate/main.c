#include <iostream>
#include <string>


int binaryToDecimal(std::string input) {
    int sum = 0;
    int base = 1;
    for (unsigned int i = 0; i < input.length(); i++) {
        if (input[input.length() - 1 - i] == '1') {
            sum += base;
        }
        base *= 2;
    }
    return sum;
}


std::string binaryToString(std::string data) {

    std::string result = "";
    for (unsigned int i = 0; i < data.length(); i += 8) {
        result += char(binaryToDecimal(data.substr(i, 8)));
    }
    return result;
}


int main(int argc, char** argv) {
    if (argc <= 1) {
        std::cout << "please provide an argument" << std::endl;
        return 1;
    }

    

    std::string data = "";

    for (unsigned int i = 1; i < argc; i++) {
        data += argv[i];
    }

    if (data.length() % 8 != 0) {
        std::cout << "unable to be converted, invalid binary string" << std::endl;
        return 1;
    }

    for (unsigned int i = 0; i < data.length(); i++) {
        if (data[i] != '1' && data[i] != '0') {
            std::cout << "invalid binary data" << std::endl;
            return 1;
        }
    }


    std::cout << binaryToString(data) << std::endl;

    return 0;
}