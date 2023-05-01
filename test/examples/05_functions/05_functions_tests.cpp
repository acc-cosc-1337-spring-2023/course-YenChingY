#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "default.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function value(copy) param, value, ref, and const ref parameter") 
{
	auto num = 10;
	auto num1 = 10;
	auto num2 = 10;

	val_params(num);
	REQUIRE(num == 10);
	REQUIRE(num1 == 10);
	REQUIRE(num2 == 10);
}

TEST_CASE("Test function referance parameter") 
{
	auto num = 10;
	ref_params(num);

	REQUIRE(num == 20);
}

TEST_CASE("Test get gross pay default parameter") 
{
	REQUIRE(get_gross_pay() == 600);//default hours = 30, pay rate = 20
	REQUIRE(get_gross_pay(40) == 800);
	REQUIRE(get_gross_pay(40, 10) == 400);
}

TEST_CASE("Verify get gross pay function overload with double") 
{
	REQUIRE(get_gross_pay(40, 7.5) == 300);
}

TEST_CASE("Verify get gross pay function overload default parameter") 
{
	REQUIRE(get_gross_pay(40,10,100) == 401);	
}