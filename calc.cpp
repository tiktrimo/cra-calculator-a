#include "gmock/gmock.h"

class Cal
{
public:
	int getGop(int a, int b)
	{
		return a * b;
	}
	int getSumSum(int a, int b, int c) {
		return a + b + c;
	}
};

TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
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

int main()
{
	testing::InitGoogleMock();
	RUN_ALL_TESTS();
}