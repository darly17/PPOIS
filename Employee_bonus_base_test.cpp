#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include"C:\Users\user\Desktop\3laba_ppois\Employee_bonus_database.h"
#include"C:\Users\user\Desktop\3laba_ppois\Employee_bonus_database.cpp"
using namespace std;

TEST(test_class_Employee_bonus_database, test_Employee_bonus_database) {

	Employee_bonus_database base;
	string profession = "director";
	base.setBonus(profession, 600);

	EXPECT_EQ(base.getBonus(profession), 600);
	


}