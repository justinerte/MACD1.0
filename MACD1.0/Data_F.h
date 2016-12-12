//Factory.h
#ifndef _FACTORY_H_
#define _FACTORY_H_
class Data_P;
class Data_F
{
public:
	virtual ~Data_F() = 0;
	virtual Data_P* CreateData_P() = 0;
protected:
	Data_F();
private:
};
class ConcreteData_F :public Data_F
{
public:
	~ConcreteData_F();
	ConcreteData_F();
	Data_P* CreateData_P();
protected:
private:
};
#endif //~_FACTORY_H_ 
