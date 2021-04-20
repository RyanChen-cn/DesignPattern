// https://zhuanlan.zhihu.com/p/83535678

#include<iostream>
// 基类 衣服
class Clothe
{
public:
    virtual void Show() = 0;
    virtual ~Clothe() {}
};

// 耐克衣服
class NiKeClothe : public Clothe
{
public:
    void Show()
    {
        std::cout << "我是耐克衣服，时尚我最在行！" << std::endl;
    }
};

// 基类 鞋子
class Shoes
{
public:
    virtual void Show() = 0;
    virtual ~Shoes() {}
};

// 耐克鞋子
class NiKeShoes : public Shoes
{
public:
    void Show()
    {
        std::cout << "我是耐克球鞋，让你酷起来！" << std::endl;
    }
};

// 总厂
template <typename type>
class AbstractFactory
{
public:
    virtual type* CreateProduct() = 0;
    virtual ~Factory() {}
};

// 耐克生产者/生产链
template<typename type,typename product>
class ConcreteFactory : public AbstractFactory<type>
{
public:
    type* CreateProduct() override{
        return new product();
    }
};

int main()
{
    // 构造耐克鞋的工厂对象
    ConcreteFactory<Shoes, NiKeShoes> nikeFactory;
    // 创建耐克鞋对象
    Shoes *pNiKeShoes = nikeFactory.CreateProduct();
    // 打印耐克鞋广告语
    pNiKeShoes->Show();


    // 释放资源
    delete pNiKeShoes;
    pNiKeShoes = NULL;


    return 0;
}