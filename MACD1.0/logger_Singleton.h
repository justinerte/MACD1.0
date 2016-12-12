#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
class logger_Singleton
{
public:
	static logger_Singleton* get_instance();                          // getter of the instance of the class
	bool open_log_file(std::string file_path);                        // open a new log file
	void write_log_line(std::string line, bool verbose);			   // write a line to the log file
	bool close_log_file();								// close the current log file
    vector <string> logger_data(std::string path_file);
private:
	static logger_Singleton* _instance;
	std::ofstream log_file;
	logger_Singleton() {};
	logger_Singleton(logger_Singleton const&) {};
	logger_Singleton& operator=(logger_Singleton const&) { return *_instance; };

};
#endif SINGLETON_H_