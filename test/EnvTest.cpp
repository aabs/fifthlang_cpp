#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "env.hpp"

TEST_CASE( "vectors can be sized and resized") {

    Env e;

    CHECK(e.IsValidIdentifier("hello") == true);

    e.Assign("hello", t_primitive(1));
    CHECK(e.Lookup("hello") == t_primitive(1));
}