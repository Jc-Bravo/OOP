#include"Map.h"
#include<string.h>
using namespace std;

Map::Map(int n){
    data = new Pair[n];
    sz = 0;
}
Map::~Map()
{
    delete[] data;
}
int Map::operator[](const string name)const{
    //s是map的一个键：map[s]返回s对应的值，只能读，不能写  3
    for(int i = 0; i<sz; i++){
        if(data[i].hasKey(name))
        return data[i].getVal();
    }
    //如果map是常量且s不是map的一个键：map[s]返回默认值0
    return 0;
}
int& Map::operator[](const string name){
    //s是map的一个键：map[s]返回s对应的值，能读写 1 2
    for(int i = 0; i<sz; i++){
        if(data[i].hasKey(name))
        return data[i].getVal();
    }
    //s不是map的一个键：map[s]将s和默认值0配对添加到map中
    //并返回s对应的值，能读写
    data[sz].reset(name,0);
    sz++;
    return data[sz-1].getVal();
}