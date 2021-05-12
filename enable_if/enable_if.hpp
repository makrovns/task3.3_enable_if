#pragma once
#include <type_traits>


namespace enif
{
    template<bool b, typename T = void>
    struct enable_if{};

    template<typename T>
    struct enable_if<true, T>
    {
        using type = T;
    };
}
