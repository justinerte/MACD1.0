//Factory.cpp
#include "Data_P.h"
#include "Data_F.h"
#include <iostream>
using namespace std;
Data_F::Data_F()
{
}
Data_F::~Data_F()
{
}
ConcreteData_F::ConcreteData_F()
{
	cout << "ConcreteData_F....." << endl;
}
ConcreteData_F::~ConcreteData_F()
{
}
Data_P* ConcreteData_F::CreateData_P()
{
	return new ConcreteData_P();
}
