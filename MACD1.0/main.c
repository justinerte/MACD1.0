//main.cpp
#include "logger_Singleton.h"
#include "Data_P.h"
#include "Data_F.h"
#include <iostream>
#include <stdlib.h>
#include <downloadFile.h>

using namespace std;
int main(int argc, char* argv[])
{   
	logger_Singleton* sgn = logger_Singleton::get_instance();
	cout << "input file_path" << endl;
	std::string path_file;
	cin >> path_file;
	sgn->logger_data(path_file);
	Data_F * MACD_Data_F = new ConcreteData_F();
	Data_F * MACD_Data_P = MACD_Data_F->CreateData_P();
	
	
	
	
	system("pause");
	return 0;
}
