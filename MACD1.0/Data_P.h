#pragma once
//Product.h
#ifndef _PRODUCT_H_
#define _PRODUCT_H_
class Data_P
{
public:
	virtual ~Data_P() = 0;

protected:
	Data_P();
private:
};
class ConcreteData_P :public Data_P
{
public:
	~ConcreteData_P();
	ConcreteData_P();

protected:
private:
};
#endif //~_PRODUCT_H_ 