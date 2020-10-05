#pragma once
#include <variant>
#include <string>

using namespace std;

namespace fifth {

    typedef string t_identifier;
    typedef variant< char, int, long, string > t_primitive;
    
    enum PrimitiveType {
        t_char, t_int32, t_int64, t_float, t_double, t_string
    };




}

