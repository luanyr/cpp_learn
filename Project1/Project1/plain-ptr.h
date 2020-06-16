#pragma once
class AHasPtr
{
public:
	AHasPtr(int* p, int i) 
		:ptr(p), 
		val(i){}
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