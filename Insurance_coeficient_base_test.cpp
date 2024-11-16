#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include"C:\Users\user\Desktop\3laba_ppois\Insurance_coefficient_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Insurance_coefficient_base.cpp"
using namespace std;

TEST(test_class_Insurance_coefficient_base, test_Insurance_coefficient_base) {

	Insurance_coefficient_base base;
	string profession = "director";
	base.setCoefficient(profession, 600);

	EXPECT_EQ(base.getCoefficient(profession), 600);
}