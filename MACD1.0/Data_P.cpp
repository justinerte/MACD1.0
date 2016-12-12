//Product.cpp
#include "Data_P.h"
#include <iostream>
using namespace std;
Data_P::Data_P()
{

}
Data_P::~Data_P()
{
}
ConcreteData_P::ConcreteData_P_Data()
{
    ifstream fin(path_file);     //open_file
    string line;
    int i = 0;
    vector<string> fields;
    vector<string> Data;

    while (getline(fin, line))   //get data
    {
        istringstream sin(line);
        string field;
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        Date.push_back(fields[0]);
        //data_Adjclose.push_back(Adjclose);
        //cout << "¥¶¿Ì÷Æ∫Ûµƒ◊÷∑˚¥Æ£∫" << Adjclose << "\t"<<endl;
    }
    return Data;
}

ConcreteData_P::ConcreteData_P_Open()
{
    ifstream fin(path_file);     //open_file
    string line;
    int i = 0;
    vector<string> fields;
    vector<string> Open;
    
    while (getline(fin, line))   //get data
    {
        istringstream sin(line);
        string field;
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        Open.push_back(fields[1]);
        //data_Adjclose.push_back(Adjclose);
        //cout << "¥¶¿Ì÷Æ∫Ûµƒ◊÷∑˚¥Æ£∫" << Adjclose << "\t"<<endl;
    }
    return Open;
}

ConcreteData_P::ConcreteData_P_High()
{
    ifstream fin(path_file);     //open_file
    string line;
    int i = 0;
    vector<string> fields;
    vector<string> High;
    while (getline(fin, line))   //get data
    {
        istringstream sin(line);
        string field;
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        High.push_back(fields[2]);
        //data_Adjclose.push_back(Adjclose);
        //cout << "¥¶¿Ì÷Æ∫Ûµƒ◊÷∑˚¥Æ£∫" << Adjclose << "\t"<<endl;
    }
    return High;
}

ConcreteData_P::ConcreteData_P_Low()
{
    ifstream fin(path_file);     //open_file
    string line;
    int i = 0;
    vector<string> fields;
    vector<string> Low;

    while (getline(fin, line))   //get data
    {
        istringstream sin(line);
        string field;
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        Low.push_back(fields[3]);
      
        //data_Adjclose.push_back(Adjclose);
        //cout << "¥¶¿Ì÷Æ∫Ûµƒ◊÷∑˚¥Æ£∫" << Adjclose << "\t"<<endl;
    }
    return Low;
}

ConcreteData_P::ConcreteData_P_Close()
{
    ifstream fin(path_file);     //open_file
    string line;
    int i = 0;
    vector<string> fields;
    vector<string> Close;
    
    while (getline(fin, line))   //get data
    {
        istringstream sin(line);
        string field;
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        Close.push_back(fields[4]);
        //data_Adjclose.push_back(Adjclose);
        //cout << "¥¶¿Ì÷Æ∫Ûµƒ◊÷∑˚¥Æ£∫" << Adjclose << "\t"<<endl;
    }
    return Close;
}

ConcreteData_P::ConcreteData_P_Volume()
{
    ifstream fin(path_file);     //open_file
    string line;
    int i = 0;
    vector<string> fields;
    vector<string> Volume;
    
    while (getline(fin, line))   //get data
    {
        istringstream sin(line);
        string field;
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        Volume.push_back(fields[5]);
        //data_Adjclose.push_back(Adjclose);
        //cout << "¥¶¿Ì÷Æ∫Ûµƒ◊÷∑˚¥Æ£∫" << Adjclose << "\t"<<endl;
    }
    return Volume;
}

ConcreteData_P::ConcreteData_P_Adjclose()
{
    ifstream fin(path_file);     //open_file
    string line;
    int i = 0;
    vector<string> fields;
    vector<string> Adjclose;
    
    while (getline(fin, line))   //get data
    {
        istringstream sin(line);
        string field;
        while (getline(sin, field, ','))
        {
            fields.push_back(field);
        }
        Adjclose.push_back(fields[6]);
        //data_Adjclose.push_back(Adjclose);
        //cout << "¥¶¿Ì÷Æ∫Ûµƒ◊÷∑˚¥Æ£∫" << Adjclose << "\t"<<endl;
    }
    return  e;
}
ConcreteData_P::~ConcreteData_P_Data()
{
}
ConcreteData_P::~ConcreteData_P_Open(){}
ConcreteData_P::~ConcreteData_P_High(){}
ConcreteData_P::~ConcreteData_P_Low(){}
ConcreteData_P::~ConcreteData_P_Close(){}
ConcreteData_P::~ConcreteData_P_Volume(){}
ConcreteData_P::~ConcreteData_P_Adjclose(){}
