#pragma once
#include <memory>
#include <map>
#include <string>
#include "common.hpp"
using namespace std;

namespace fifth
{

    struct Type
    {
        std::string name;
        PrimitiveType kind;
    };

    class Types{
        private:
            static std::map<std::string,Type> _types;
            static bool _generated;
        public:
            static std::map<std::string,Type> get_types();
    };

    std::map<std::string,Type> Types::get_types(){
        if (!_generated)
        {
            std::map<std::string,Type> result;
            result["int32"] = Type{"int32", t_int32};
            result["int64"] = Type{"int64", t_int64};
            _types = result;
            _generated = true;
        }
        return _types;
    }
} // namespace fifth
