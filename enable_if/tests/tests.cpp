#include "fun_for_test.hpp"
#include <gtest/gtest.h>


TEST(enabel_if_test, test_division_function_int)
{
    int a = 14;

    division_to_two<int> div1(a);

    ASSERT_EQ(a/2, div1.result);
    ASSERT_EQ(typeid(int).name(), div1.name_type);
}

TEST(enabel_if_test, test_division_function_double)
{
    double a = 12.5;

    division_to_two<double> div1(a);

    ASSERT_EQ(a/2, div1.result);
    ASSERT_EQ(typeid(double).name(), div1.name_type);
}

TEST(enabel_if_test, tes_add_minus_fun_unsigned)
{
    unsigned int uni = 12;
    uint16_t un16 = 6;

    ASSERT_EQ(add_minus(uni), uni);
    ASSERT_EQ(add_minus(un16), un16);
}

TEST(enabel_if_test, tes_add_minus_fun_signed)
{
    int in = 24;
    double doub = 12.5;
    float fl = 2.5;

    ASSERT_EQ(add_minus(in), -in);
    ASSERT_EQ(add_minus(doub), -doub);
    ASSERT_EQ(add_minus(fl), -fl);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}