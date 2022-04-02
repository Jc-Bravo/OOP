#pragma once
#include "Pair.h"

class Map{
    Pair * data;
    int sz;//数据成员sz表明Map对象实际包含的键值对数量（必有0≤sz ≤n)。
public:
    Map(int n);
    // 的形参int n指示被创建的Map对象需要能够容纳不多于n个键值对，
    // 一个键值对由Pair类的一个对象维护。
    // 你需要在构造函数内开辟一个大小为n个Pair对象的数组，
    // 并让数据成员data指向该数组的首位。   

    //函数重载假定s是一个string对象，map是一个Map对象，则调用map[s]满足如下性质：
};