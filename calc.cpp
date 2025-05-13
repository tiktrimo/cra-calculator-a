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

TEST(Calculator, Zegop)
{
	Cal cal;
	int result = cal.getZegop(5);
	EXPECT_EQ(25, result);
}

int main()
{
	testing::InitGoogleMock();
	RUN_ALL_TESTS();
}