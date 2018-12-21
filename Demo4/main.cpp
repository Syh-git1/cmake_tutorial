#include <iostream>
#include <cmath>
#include "cmake-build-debug/myconfig.h"

#ifdef USE_MYMATH
  #include "math/MathFunction.h"
#endif


int main(int argc, char *argv[]) {
    if (argc < 3){
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
#ifdef USE_MYMATH
    std::cout<<"Now use our own Math library"<<std::endl;
    double result = power(base,exponent);
#else
    std::cout<<"Now wo use the standard library"<<std::endl;
    double result = pow(base, exponent);
#endif
    std::cout<< "base:"<<base<<"exponent:"<<exponent<<"result:"<<result<<std::endl;
    return 0;
}