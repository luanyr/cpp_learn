#include <iostream>
#include <string>

using namespace std;
/*输出操作符重载 << 
非成员函数 -> 友元函数
少做格式化
输入操作符重载 >> 
处理输入操作的错误
*/
/*
class Sales_item
{
	friend ostream& operator<<(ostream& out, const Sales_item& s);//需要申明为友元函数
	friend istream& operator>>(istream& in, Sales_item& s);
public:
	Sales_item(const string& book, unsigned count, double price) :
		isbn(book),uints_sold(count),revenue(price * count)
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

static void test()
{
	Sales_item it1(string("8-001-002"), 10, 20);
	cout << it1 << endl;
	Sales_item it2;
	cin >> it2;
	cout << it2 << endl;

}*/
