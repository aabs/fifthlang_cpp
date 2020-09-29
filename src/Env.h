#pragma once
#include <string>
#include "nonstd/variant.hpp"

using namespace std;
using namespace nonstd;

union Value
{
    bool     m_bool;
    char     m_char8;
    char16_t m_char16;
    char32_t m_char32;
    int16_t  m_int16;
    int32_t  m_int32;
    int64_t  m_int64;
    string   m_string;
    float    m_float;
    double   m_double;
};

typedef variant< char, int, long, std::string > primitive_type;
class Env
{
private:
    /* data */
    primitive_type Lookup(string identifier);
public:
    Env(/* args */);
    ~Env();
};

