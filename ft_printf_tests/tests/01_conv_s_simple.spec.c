#include <project.h>

static void simple_convertion1(t_test *test)
{
	// debug_next_assert();
	assert_printf("%s", "abc");
}

static void simple_convertion2(t_test *test)
{
	// debug_next_assert();
	assert_printf("111%s333", "222");
}

static void simple_convertion3(t_test *test)
{
	// debug_next_assert();
	assert_printf("%s333", "222");
}

static void simple_convertion4(t_test *test)
{
	// debug_next_assert();
	assert_printf("111%s", "222");
}

void	suite_01_conv_s_simple(t_suite *suite)
{
	SUITE_ADD_TEST(suite, simple_convertion1);
	SUITE_ADD_TEST(suite, simple_convertion2);
	SUITE_ADD_TEST(suite, simple_convertion3);
	SUITE_ADD_TEST(suite, simple_convertion4);
}
