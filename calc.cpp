#include "gmock/gmock.h"

class Cal
{
public:
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

int main()
{
	testing::InitGoogleMock();
	RUN_ALL_TESTS();
}