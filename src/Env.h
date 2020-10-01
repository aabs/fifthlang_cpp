#pragma once
#include <string>
#include <map>
#include "nonstd/variant.hpp"

using namespace std;
using namespace nonstd;

typedef std::string t_identifier;
typedef variant< char, int, long, string > t_primitive;

class Env
{
private:
    std::map<string, t_primitive> _env;

public:
    Env();
    ~Env();
    t_primitive Lookup(string identifier);
    void Assign(string identifier, t_primitive value);
    bool IsValidIdentifier(string id);
};

