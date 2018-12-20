#include <iostream>

double power(double base, int exponent)
{
    int result = base;
    int i;
    if (exponent == 0) {
        return 1;
    }
    for(i = 1; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        std::cout << "Usage: " << argv[0] << " base exponent:"<<std::endl;
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);
    std::cout<< "base:"<<base<<"exponent:"<<exponent<<"result:"<<result<<std::endl;
    return 0;
}