#include <iostream>
#include <vector>
#include <list>
#include <deque>
//˳������һ�������֣�vector, list, deque
using namespace std;

void test()
{
	vector<string> str_vec;//Ĭ�Ϲ��캯��
	str_vec.push_back("hello");
	list<int> int_lst;
	int_lst.push_back(1);
	int_lst.push_back(2);
	int_lst.push_back(3);
	deque<double> dbe_dqe;
	dbe_dqe.push_back(1.2);
	/*  */
	deque<double> dbe_dqe_1(dbe_dqe);//�������캯��
	/*  */
	list<int> cpy_lst;
	//list<int>::iterator it_mid = int_lst.begin() + int_lst.size() / 2;


	const char* word_buf[] = { "nanjing","suzhou","wuxi" };//���ַ������鿽����list<string>�У�
	size_t wbuf_size = sizeof(word_buf) / sizeof(char *);
	cout << wbuf_size << endl;
	list<string> str_lst(word_buf, word_buf + wbuf_size);

	const list<int>::size_type list_size = 64;
	list<string> slst(list_size, "hello");//ָ��
	//�������ѡ�ò�ͬ��˳��������list�������κ�λ�ò��룬deque���������˲��룬vectorֻ������β�����룻
}


