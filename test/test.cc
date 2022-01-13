#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <gtest/gtest.h>
#include <Eigen/Dense> 

using namespace Eigen;
using namespace std;


// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(EigenTest, EigenMultiply){
    MatrixXd m = MatrixXd::Constant(2,2,2);
    MatrixXd n = MatrixXd::Constant(2,2,0);
    MatrixXd expect_result = MatrixXd::Constant(2,2,0);
    EXPECT_EQ(m * n, expect_result);
}

void test_tanh(double x)
{
    double y = tanh(x);
    cout << "y =" << endl << y << endl;
}

void test_eigen()
{
    MatrixXd m = MatrixXd::Random(4,3);
    m = (m + MatrixXd::Constant(4,3,1.2)) * 50;
    cout << "m =" << endl << m << endl;
    VectorXd v(3);
    v << 1, 2, 3;
    cout << "v =" << endl << v << endl;
    cout << "m * v =" << endl << m * v << endl;

    MatrixXd n = MatrixXd::Random(3,4);
    cout << "n =" << endl << n << endl;
    cout << "m * v =" << endl << m * n << endl;

}

int main(int argc, char **argv)
{
    test_tanh(1.0);

    test_eigen();

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}