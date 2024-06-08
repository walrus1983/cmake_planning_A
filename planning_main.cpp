#include <iostream>
#include "process.h"
using std::cout, std::endl;

int main() {
    cout << "planning start" << endl;
    Process pro;
    pro.planProcess();
    cout << "plannning end" << endl;
    return 0;
}