// https://design-patterns.readthedocs.io/zh_CN/latest/creational_patterns/simple_factory.html

#include<string>
using namespace std;
class base{};
class A : public base{};
class B : public base{};

class SimpleFactory{
    base* createProduct(string proname){
        if("A"==proname) return new A();
        else if("B"==proname) return new B();
        else return nullptr;
    }
};