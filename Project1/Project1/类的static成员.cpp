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
	static double interestrate;//staic��Ա����ֻ��һ����������Ķ�����һ������̬��Ա���������κζ���󶨣�
};

static void test()
{
	account bank_user1("luanyr", 100);
	account bank_user2("zhangsan", 1000);
	account::newrate(0.01);//��̬��Ա�����޷�ʹ��thisָ�룬��Ϊ���������κζ���
	bank_user1.deposit(1000);
	cout << bank_user1.getamount() << endl;
	bank_user1.newrate(0.02);
	cout << "the rate is" << bank_user2.GetRate() << endl;
}
double account::interestrate = 0.01;//��̬��Ա������Ҫ�������ʼ��