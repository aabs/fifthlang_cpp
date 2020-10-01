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

t_primitive Env::Lookup(t_identifier identifier)
{
    return _env[identifier];
}

void Env::Assign(t_identifier identifier, t_primitive value)
{
    _env[identifier] = value;
}

bool Env::IsValidIdentifier(string id){
    CHECK(e.Lookup("hello") == t_primitive(1));
}


TEST_CASE("testing the factorial function") {
    Env e;
    e.Assign("hello", t_primitive(1));
    CHECK(e.Lookup("hello") == t_primitive(1));
}