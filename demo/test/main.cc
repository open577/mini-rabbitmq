#include "protoc.pb.h"
#include <iostream>

using namespace contacts;
int main()
{
    contect mon;
    mon.set_age(32);
    mon.set_name("xiaoming");
    std::string str=mon.SerializePartialAsString();

    contect stu;
    if(!stu.ParseFromString(str))
    {
        std::cout<<"反序列化失败"<<std::endl;
        exit(1);
    }

    std::cout<<stu.age()<<std::endl<<stu.name()<<std::endl;
    return 0;
}