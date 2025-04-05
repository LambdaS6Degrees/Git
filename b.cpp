#include <memory>
#include <iostream>
void changeNum(std::unique_ptr<int>&& pi)
{
    *pi = 29;
}
// test
void test()
{
    std::unique_ptr<int> inum = std::make_unique<int>(int(12));
    changeNum(std::move(inum));
    std::cout<<*inum<<std::endl;
}

//test1
void changeNum1(std::unique_ptr<int>& pi)
{
    *pi = 29;
}
// test1
void test1()
{
    std::unique_ptr<int> inum = std::make_unique<int>(int(12));
    changeNum1(inum);
    std::cout<<*inum<<std::endl;
}

//green lemon
