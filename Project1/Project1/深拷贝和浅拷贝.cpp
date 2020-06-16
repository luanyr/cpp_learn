#include <iostream>
#include <cstring>
using namespace std;

class CDemo
{
public :
	CDemo(int pa,const char *cstr)
	{
		this->a = pa;
		this->str = new char[1024];
		strcpy(this->str, cstr);
	}
	//CDemo(CDemo& obj)//浅拷贝，和C++编译器自动写一个复制构造函数一样
	//{
	//	this->a = obj.a;
	//	this->str = obj.str;
	//}
	CDemo(CDemo& obj)//深拷贝，首先动态分配一个地址给str，然后将字符串内容赋值到该地址，此后的指针指向的是后来分配的地址；
	{
		this->a = obj.a;
		this->str = new char[1024];
		if (str != nullptr)
			strcpy(this->str,obj.str);
	}
	~CDemo()
	{
		delete this->str;
	}
	//如果没有写赋值构造函数C++编译器会自动写一个复制构造函数
public:
	int a;
	char* str;

};
static void test()
{
	CDemo a(1000, "iii");

	CDemo b = a;

	cout << a.a << " " << a.str << endl;
	cout << b.a << " " << b.str << endl;
	b.a = 101;
	b.str[0] = 'k';
	cout << a.a << " " << a.str << endl;
	cout << b.a << " " << b.str << endl;//浅复制的原因是：C++编译器的默认复制构造函数赋值的是指针，而非指针指向的内容；所以当指针指向的内容变化时，将都会变化；
}
