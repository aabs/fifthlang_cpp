#pragma once
#include <string>
#include <map>
#include "nonstd/variant.hpp"

using namespace std;
using namespace nonstd;

typedef variant< char, int, long, string > primitive_type;

class Env
{
private:
    std::map<string, primitive_type> _env;

public:
    Env();
    ~Env();
    primitive_type Lookup(string identifier);
    void Assign(string identifier, primitive_type value);
};

