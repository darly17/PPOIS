#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>

#include"C:\Users\user\Desktop\3laba_ppois\Social_security_fund_tax_base.h"
#include"C:\Users\user\Desktop\3laba_ppois\Social_security_fund_tax_base.cpp"
using namespace std;

TEST(test_class_Social_security_fund_tax_base, test_Social_security_fund_tax_base) {

	Social_security_tax_base base;
	string profession = "director";
	base.setTax(profession, 600);

	EXPECT_EQ(base.getTax(profession), 600);
}