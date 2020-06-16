#include <iostream>
#include <string>
using namespace std;
//算数操作符重载
/*
+   +=
-   -=
*   *=
/   /=
%   %=
为了保持与内置操作符一致，算数操作符通常产生一个新值
*/

class Sales_item
{
	friend ostream& operator<<(ostream& out, const Sales_item& s);//需要申明为友元函数
	friend istream& operator>>(istream& in, Sales_item& s);
public:
	Sales_item& operator+=(const Sales_item&);
	Sales_item& operator-=(const Sales_item&);
	Sales_item(const string& book, unsigned count, double price) :
		isbn(book), uints_sold(count), revenue(price* count)
	{}
	Sales_item() :uints_sold(0), revenue(0)
	{}
private:
	string isbn;
	unsigned uints_sold;
	double revenue;
};

ostream& operator<<(ostream& out, const Sales_item& s)
{
	out << s.isbn << "\t" << s.uints_sold << "\t" << s.revenue;
	return out;
}
istream& operator>>(istream& in, Sales_item& s)//输入操作容易产生错误；需要检查输入流状态
{
	double price;
	in >> s.isbn >> s.uints_sold >> price;
	if (in)
		s.revenue = s.uints_sold * price;//输入成功
	else
		s = Sales_item();//输入失败：对象默认赋值
	return in;
}
Sales_item& Sales_item::operator+=(const Sales_item& it1)
{
	this->uints_sold += it1.uints_sold;
	this->revenue += it1.revenue;
	this->isbn += it1.isbn;
	return *this;
}
Sales_item& Sales_item::operator-=(const Sales_item& it1)
{
	this->uints_sold -= it1.uints_sold;
	this->revenue -= it1.revenue;
	//this->isbn += it1.isbn;
	return *this;
}
Sales_item operator+(const Sales_item& lhs, const Sales_item& rhs)
{
	Sales_item ret(lhs);
	ret += rhs;
	return ret;
}

Sales_item operator-(const Sales_item& lhs, const Sales_item& rhs)
{
	Sales_item ret(lhs);
	ret -= rhs;
	return ret;
}

static void test()
{
	Sales_item item1("001", 100, 2.5);
	Sales_item item2("002", 50,  2.0);
	Sales_item item3("003", 0, 0);
	Sales_item item4("004", 0 ,0);
	item3 = item1 + item2;
	cout << item3;
	item4 = item1 - item2;
	cout << item4;
}

