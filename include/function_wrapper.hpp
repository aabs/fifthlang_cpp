#pragma once
#include "common.hpp"
#include "type.hpp"
#include <iostream>
#include <variant>
#include <vector>

namespace fifth
{
    class FunctionWrapperBase
    {
    public:
        FunctionWrapperBase(vector<Type> parameter_types, Type result_type);
        virtual t_primitive invoke(vector<t_primitive> args) = 0;
        t_primitive operator()(vector<t_primitive> args);

    private:
        std::vector<Type> _parameter_types;
        Type _result_type;
    };

    FunctionWrapperBase::FunctionWrapperBase(std::vector<Type> parameter_types, Type result_type)
    {
        _parameter_types = parameter_types;
        _result_type = result_type;
    }

    t_primitive FunctionWrapperBase::operator()(vector<t_primitive> args)
    {
        return invoke(args);
    }

    class IntegerAddition : FunctionWrapperBase
    {
    public:
        IntegerAddition();
        t_primitive invoke(vector<t_primitive> args);
    };

    IntegerAddition::IntegerAddition() : 
        FunctionWrapperBase({Types::get_types()["int32"], Types::get_types()["int32"]}, Types::get_types()["int32"])
    {
    }
    t_primitive IntegerAddition::invoke(vector<t_primitive> args)
    {
        std::cout << "IntegerAddition::invoke" << std::endl;

        if (args.size() != 2)
        {
            throw "invalid arguments";
        }
        if (std::holds_alternative<int>(args[0]) && std::holds_alternative<int>(args[1]))
        {
            auto left = std::get<int>(args[0]);
            auto right = std::get<int>(args[1]);
            return t_primitive(left + right);
        }
        throw "invalid argument types";
    }
} // namespace fifth