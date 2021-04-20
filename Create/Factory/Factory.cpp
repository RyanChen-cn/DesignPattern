// https://design-patterns.readthedocs.io/zh_CN/latest/creational_patterns/simple_factory.html

#include<string>
using namespace std;
class base{};
class A : public base{};
class B : public base{};
// 相比于简单工厂模式更符合开闭模式
class AFactory{
    base* createProduct(string proname){
        return new A();
    }
};
class BFactory{
    base* createProduct(string proname){
        return new B();

    }
};