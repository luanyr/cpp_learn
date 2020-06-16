#include <iostream>
using namespace std;

class account
{
public:
	account(string name, double money) :owner(name), amount(money) {}
	~account() {}
	double getamount() const
	{
		return this->amount;
	}
	void deposit(double money)
	{
		this->amount += money;
	}
	static void newrate(double rate)
	{
		interestrate = rate;
	}
	static double GetRate()
	{
		return interestrate;
	}
private:
	string owner;
	double amount;
	static double interestrate;//staic成员变量只有一个，所有类的对象公用一个；静态成员变量不和任何对象绑定，
};

static void test()
{
	account bank_user1("luanyr", 100);
	account bank_user2("zhangsan", 1000);
	account::newrate(0.01);//静态成员函数无法使用this指针，因为它不属于任何对象
	bank_user1.deposit(1000);
	cout << bank_user1.getamount() << endl;
	bank_user1.newrate(0.02);
	cout << "the rate is" << bank_user2.GetRate() << endl;
}
double account::interestrate = 0.01;//静态成员变量需要在类外初始化