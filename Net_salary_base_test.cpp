#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include"C:\Users\user\Desktop\3laba_ppois\Net_salary_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Net_salary_base.cpp"
using namespace std;

TEST(test_class_Net_salary_base, test_Net_salary_base) {

	Net_salary_base base;
	string profession = "director";
	base.setNet_Salary(profession, 600);

	EXPECT_EQ(base.getNet_Salary(profession), 600);
}