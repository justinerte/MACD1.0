//Singleton.cpp
#include "logger_Singleton.h"
#include <iostream>
#include <stdio.h>
#include <fstream>  
#include <sstream>  
#include <string>  
#include <vector>

using namespace std;
string Trim(string& str)
{
	//str.find_first_not_of(" \t\r\n"),在字符串str中从索引0开始，返回首次不匹配"\t\r\n"的位置  
	str.erase(0, str.find_first_not_of(" \t\r\n"));
	str.erase(str.find_last_not_of(" \t\r\n") + 1);
	return str;
}
logger_Singleton* logger_Singleton::_instance = nullptr;

// Getter of the instance of the class
logger_Singleton* logger_Singleton::get_instance()
{   	
	if (!_instance) // only one instance of the class can be created
	{
		_instance = new logger_Singleton();
	}

	return _instance;
}

bool logger_Singleton::open_log_file(std::string file_path)
{
	this->log_file.open(file_path);

	return this->log_file.is_open();
}

// Write a line to the log file
void logger_Singleton::write_log_line(std::string line, bool verbose)
{
	this->log_file << line << std::endl;

	if (verbose)
		std::cout << line << std::endl;
}

// Close the current log file
bool logger_Singleton::close_log_file()
{
	this->log_file.close();

	return true;
}

vector<string> logger_Singleton::logger_data(std::string path_file)
{
	ifstream fin(path_file);     //open_file
	string line;
	int i = 0;
	vector<string> fields;
	while (getline(fin, line))   //get data  
	{
		istringstream sin(line);   
		string field;
		while (getline(sin, field, ',')) 
		{
			fields.push_back(field);  
		}
		//cout << "处理之后的字符串：" << Adjclose << "\t"<<endl;
	}
	return fields;
}
