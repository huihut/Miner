//
// Created by huihut on 2018/1/8.
//

#include "../source/Miner.h"
#if defined(WIN32) || defined(_WIN32) || defined(_WIN64)
#pragma comment(lib, "D:\\code\\CLionProjects\\Miner\\cmake-build-debug\\libMiner.dll")
#else
#endif

#include <iostream>

using namespace miner;

int main()
{
    hello();
    std::cout << "1 + 2 = " << add(1, 2) << std::endl;

    system("pause");
    return 0;
}