#include "gmock/gmock.h"

class Cal
{
public:
	int getGop(int a, int b)
	{
		return a * b;
	}
};

TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
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