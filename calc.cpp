#include "gmock/gmock.h"
#include<iostream>
class Cal
{
public:
	int getZegop(int a)
	{
		return a * a;
	}
	int getGop(int a, int b)
	{
		return a * b;
	}
	int getSumSum(int a, int b, int c) {
		return a + b + c;
	}
	int getDevide(int a, int b) {
		if (b == 0) {
			std::cout << "Error occured due to b = 0" << std::endl;
			return -1;
		}
		else {
			return a / b;
		}
	}
};

TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
}
TEST(CalTest, devideErrorTest) {
	Cal cal;
	EXPECT_EQ(-1, cal.getDevide(1, 0));
}
TEST(CalTest, devideposTest) {
	Cal cal;
	EXPECT_EQ(10, cal.getDevide(10, 1));
}

TEST(CalTest, devidenegTest) {
	Cal cal;
	EXPECT_EQ(-3, cal.getDevide(3, -1));
}
TEST(getSumSum, t1) {
	Cal c;

	EXPECT_EQ(10, c.getSumSum(2, 3, 5));
}

TEST(calc, Gop)
{
	Cal calc;
	EXPECT_EQ(12,calc.getGop(3,4));
}

TEST(Calculator, Zegop_Positive)
{
	Cal cal;
	for (int number = -10; number <= 10; number++)
	{
		int result = cal.getZegop(number);
		EXPECT_EQ(number * number, result);
	}
}

int main()
{
	testing::InitGoogleMock();
	RUN_ALL_TESTS();
}