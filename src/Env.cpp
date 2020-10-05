#include "common.hpp"
#include "env.hpp"

using namespace fifth;
using namespace std;

Env::Env(/* args */)
{
}

Env::~Env()
{
}

bool Env::IsValidIdentifier(t_identifier id){
    return true;
}

t_primitive Env::Lookup(t_identifier identifier)
{
    return _env[identifier];
}

void Env::Assign(t_identifier identifier, t_primitive value)
{
    _env[identifier] = value;
}

