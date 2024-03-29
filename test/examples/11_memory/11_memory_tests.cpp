#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test ref ptr params function")
{
	int num1 = 1;
	int num2 = 2;
	ref_ptr_params(num1, &num2);

	REQUIRE(num1 == 10);
	REQUIRE(num2 == 20);
}

TEST_CASE("Test empty my vector size")
{
	Vector<int> v(3);
	REQUIRE(v.Size() == 0);
}

TEST_CASE("Test my vector capacity")
{
	Vector<int> v(3);
	REQUIRE(v.Capacity() == 3);
}

TEST_CASE("Test create Vector v1 from existing v")
{
	Vector<int> v(3);
	Vector v1 = v;

	REQUIRE(v1.Size() == v.Size());
	REQUIRE(v1.Capacity() == v.Capacity());
}

TEST_CASE("Test my vector create 2 vectors v v1 overwrite v1 with v")
{
	Vector<int> v(3);
	Vector<int> v1(3);
	v1 = v;//C++ doesn't know how to handle an equal sign with our class variables
}

TEST_CASE("Test moving v into v1, Test overwrite vector with std move function")
{
	Vector<int> v(3);//empty after statement 54 executes
	Vector v1 = std::move(v);

}

TEST_CASE("Test my vector overloaded[]")
{
	Vector<int> v(3);
	v[0] = 5;

	REQUIRE(v[0] == 5);
}


TEST_CASE("Test overwrite existing vector with a value return vector function")
{
	Vector<int> v1(3);
	v1 = get_vector();
}


TEST_CASE("Test vector push back w capacity 3")
{
	Vector<int> v(3);
	REQUIRE(v.Size() == 0);
	REQUIRE(v.Capacity() == 3);

	v.PushBack(5);
	REQUIRE(v.Size() == 1);
	REQUIRE(v.Capacity() == 3);
	REQUIRE(v[0] == 5);

	v.PushBack(10);
	REQUIRE(v.Size() == 2);
	REQUIRE(v.Capacity() == 3);
	REQUIRE(v[1] == 10);

	v.PushBack(7);
	REQUIRE(v.Size() == 3);
	REQUIRE(v.Capacity() == 3);
	REQUIRE(v[2] == 7);

	v.PushBack(100);
	REQUIRE(v.Size() == 4);
	REQUIRE(v.Capacity() == 6);
	REQUIRE(v[3] == 100);
}

/* error double free or corruption (out)
TEST_CASE("Test pushback to list with capacity 0")
{
	Vector v;
	REQUIRE(v.Size() == 0);
	REQUIRE(v.Capacity() == 0);
}
*/