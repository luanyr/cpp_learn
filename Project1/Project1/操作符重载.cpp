#include <iostream>
#include <string>

using namespace std;
/*������������� << 
�ǳ�Ա���� -> ��Ԫ����
������ʽ��
������������� >> 
������������Ĵ���
*/
/*
class Sales_item
{
	friend ostream& operator<<(ostream& out, const Sales_item& s);//��Ҫ����Ϊ��Ԫ����
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
istream& operator>>(istream& in, Sales_item& s)//����������ײ���������Ҫ���������״̬
{
	double price;
	in >> s.isbn >> s.uints_sold >> price;
	if (in)
		s.revenue = s.uints_sold * price;//����ɹ�
	else
		s = Sales_item();//����ʧ�ܣ�����Ĭ�ϸ�ֵ
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
