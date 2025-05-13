#include "gmock/gmock.h"

class Cal
{
public:
	int getZegop(int a)
	{
		return a * a;
	}
};

TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
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