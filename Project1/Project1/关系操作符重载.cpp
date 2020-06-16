#include <iostream>
using namespace std;
class Sales_item1
{
	//friend ostream& operator<<(ostream& out, const Sales_item1& s);//需要申明为友元函数
	//friend istream& operator>>(istream& in, Sales_item1& s);
	friend bool operator==(const Sales_item1& it1, const Sales_item1& it2);
public:
	//Sales_item1& operator+=(const Sales_item1&);
	//Sales_item1& operator-=(const Sales_item1&);
	Sales_item1(const string& book, unsigned count, double price) :
		isbn(book), uints_sold(count), revenue(price* count)
	{}
	Sales_item1() :uints_sold(0), revenue(0)
	{}
private:
	string isbn;
	unsigned uints_sold;
	double revenue;
};

class Date
{
private:
	int year, month, day;
public:
	Date(int y = 0, int m = 0, int d = 0):year(y),month(m),day(d){}
	int operator==(Date & d1) const;
	int operator!=(Date& d1) const;
	int operator<(Date & d1) const;
	int operator>=(Date& d1)const;
	int operator<(Date& d1)const;
	int operator<=(Date& d1)const;
};
inline bool operator==(const Sales_item1& it1, const Sales_item1& it2)
{
	return (it1.isbn == it2.isbn && \
		    it1.revenue == it2.revenue && \
		    it1.uints_sold == it2.uints_sold);//判断对象中的三个

}

inline bool operator!=(const Sales_item1& it1, const Sales_item1& it2)
{
	return !(it1 == it2);
}

int Date::operator==(Date& d1) const
{
	return (this->day == d1.day) && (this->month == d1.month) && (this->year == d1.year);
}

int Date::operator!=(Date& d1) const
{
	return !(*this == d1);
}

int Date::operator<(Date& d1) const
{
	if (this->year < d1.year)
	{
		return 1;
	}
	else if(this->year > d1.year)
	{
		return 0;
	}
	else if(this->year == d1.year)
	{
		if (this->month == d1.month)
		{
			if (this->day == d1.day)
				return 0;
			else if (this->day > d1.day)
				return 0;
			else
				return 1;
		}
		else if (this->month > d1.month)
			return 0;
		else
			return 1;
	}
}

int Date::operator>=(Date& d1)const
{
	return !(*this < d1);
}
static void test()
{
	Sales_item1 gx_it1("002", 100, 20.1);
	Sales_item1 gx_it2("002", 100, 20.1);
	Sales_item1 gx_it3("002", 101, 20.1);
	if (gx_it1 == gx_it2)
		cout << "gx_it1 = gx_it2" << endl;
	if (gx_it1 != gx_it3)
		cout << "gx_it1 != gx_it3" << endl;
	Date d1(2020, 6, 17);
	Date d2(2020, 6, 17);
	if (d1 < d2)
		cout << "d1 < d2" << endl;
	else
		cout << "d1 >= d2" << endl;
}

int main()
{
	test();
	return 0;
}