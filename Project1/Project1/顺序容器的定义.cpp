#include <iostream>
#include <vector>
#include <list>
#include <deque>
//顺序容器一共有三种：vector, list, deque
using namespace std;

void test()
{
	vector<string> str_vec;//默认构造函数
	str_vec.push_back("hello");
	list<int> int_lst;
	int_lst.push_back(1);
	int_lst.push_back(2);
	int_lst.push_back(3);
	deque<double> dbe_dqe;
	dbe_dqe.push_back(1.2);
	/*  */
	deque<double> dbe_dqe_1(dbe_dqe);//拷贝构造函数
	/*  */
	list<int> cpy_lst;
	//list<int>::iterator it_mid = int_lst.begin() + int_lst.size() / 2;


	const char* word_buf[] = { "nanjing","suzhou","wuxi" };//将字符串数组拷贝到list<string>中；
	size_t wbuf_size = sizeof(word_buf) / sizeof(char *);
	cout << wbuf_size << endl;
	list<string> str_lst(word_buf, word_buf + wbuf_size);

	const list<int>::size_type list_size = 64;
	list<string> slst(list_size, "hello");//指定
	//根据情况选用不同的顺序容器；list可以在任何位置插入，deque可以在两端插入，vector只可以在尾部插入；
}


