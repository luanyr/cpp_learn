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
	//CDemo(CDemo& obj)//ǳ��������C++�������Զ�дһ�����ƹ��캯��һ��
	//{
	//	this->a = obj.a;
	//	this->str = obj.str;
	//}
	CDemo(CDemo& obj)//��������ȶ�̬����һ����ַ��str��Ȼ���ַ������ݸ�ֵ���õ�ַ���˺��ָ��ָ����Ǻ�������ĵ�ַ��
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
	//���û��д��ֵ���캯��C++���������Զ�дһ�����ƹ��캯��
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
	cout << b.a << " " << b.str << endl;//ǳ���Ƶ�ԭ���ǣ�C++��������Ĭ�ϸ��ƹ��캯����ֵ����ָ�룬����ָ��ָ������ݣ����Ե�ָ��ָ������ݱ仯ʱ��������仯��
}
