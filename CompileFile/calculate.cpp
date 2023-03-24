#include "add.h"
#include "sub.h"
#include "multi.h"
#include "calculate.h"
#include <iostream>

int calculateIt(int a, int b, OP op) {
    return op(a, b);
}

int main(void){
    int res = calculateIt(11, 2, add);
    std::cout << res << std::endl;
}
