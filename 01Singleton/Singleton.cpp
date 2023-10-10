//
// Created by huyu on 2023/10/10.
//

#include "Singleton.h"


Single& Single::getInstance() {
    static Single single;
    return single;
}

void Single::Print() {
    std::cout << "我的实例内存地址是:" << this << std::endl;
}

Single::Single()
{
    std::cout << "构造函数" << std::endl;
}

Single::~Single()
{
    std::cout << "析构函数" << std::endl;
}