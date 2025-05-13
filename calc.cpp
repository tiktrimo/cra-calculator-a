#include "gmock/gmock.h"
#include<iostream>
class Cal
{
public:
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

int main()
{
	testing::InitGoogleMock();
	RUN_ALL_TESTS();
}