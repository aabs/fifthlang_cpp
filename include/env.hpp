#pragma once
#include <string>
#include <map>
#include "common.hpp"
using namespace std;
using namespace fifth;


class Env
{
private:
    std::map<string, t_primitive> _env;

public:
    Env();
    ~Env();
    t_primitive Lookup(t_identifier identifier);
    void Assign(t_identifier identifier, t_primitive value);
    bool IsValidIdentifier(t_identifier id);
};

