#include "Env.h"
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"

using namespace std;

Env::Env(/* args */)
{
}

Env::~Env()
{
}

primitive_type Env::Lookup(std::string identifier)
{
    return _env[identifier];
}

void Env::Assign(string identifier, primitive_type value)
{
    _env[identifier] = value;
}


TEST_CASE("testing the factorial function") {
    Env e;
    e.Assign("hello", primitive_type(1));
    CHECK(e.Lookup("hello") == primitive_type(1));
}