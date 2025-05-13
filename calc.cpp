#include "gmock/gmock.h"

class Cal
{
public:
	int getSum(int a, int b) {
		return a + b;
	}

};

TEST(t1, t2)
{
	EXPECT_EQ(1, 1);
}

TEST(calc, SumTC) {
	Cal cal;

	EXPECT_EQ(8, cal.getSum(3, 5));
}

int main()
{
	testing::InitGoogleMock();
	RUN_ALL_TESTS();
}
