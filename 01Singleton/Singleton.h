//
// Created by huyu on 2023/10/10.
//

#ifndef LEARNDESIGNPATTERN_SINGLETON_H
#define LEARNDESIGNPATTERN_SINGLETON_H

///  内部静态变量的懒汉实现  //
class Single
{
public:
    // 获取单实例对象
    static Single& getInstance();
    // 打印实例地址

    void Print();
private:
    Single();
    ~Single();

    Single(const Single& single) = delete;

    const Single& operator=(const Single& single) = delete;
};





#endif //LEARNDESIGNPATTERN_SINGLETON_H
