#pragma once
class CHasPtr
{
public:
	CHasPtr(const int &p, int i)
		:ptr(new int(p)),
		val(i) {}
	CHasPtr(const CHasPtr& orig)
		:ptr(new int(*orig.ptr)),
		val(orig.val) {}
	CHasPtr& operator=(const CHasPtr& orig)
	{
		this->ptr = new int(*orig.ptr);
		this->val = orig.val;
		return *this;
	}
	~CHasPtr()
	{ 
		delete ptr;
	}
	int* get_ptr() const { return ptr; }
	int get_val() const { return val; }
	void set_ptr(int* p) { this->ptr = p; }
	void set_val(int v) { this->val = v; }
	int get_ptr_val() const { return *ptr; }
	void set_ptr_val(int val) { *ptr = val; }
private:
	int val;
	int* ptr;

};