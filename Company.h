#pragma once
#include <iostream>
#include <vector>
#include <string>



using namespace std;

class Company  
{
protected:
	string company_name;
	int amount_of_employee;

public:
	Company(string _name, int _amount)
	{
		company_name = _name;
		amount_of_employee = _amount;
	}

	string getCompanyName();
	void setCompanyName(string);

	int  getAmount_of_Employee();
	void  changeAmount_of_Employee(int);


	~Company() {}

};
