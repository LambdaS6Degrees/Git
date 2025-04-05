#include <memory>
#include <iostream>
void changeNum(std::unique_ptr<int>&& pi)
{
    *pi = 29;
}
// add some text
void test()
{
    std::unique_ptr<int> inum = std::make_unique<int>(int(12));
    changeNum(std::move(inum));
    std::cout<<*inum<<std::endl;
}
