#pragma once
#include "enable_if.hpp"
#include <algorithm>
#include <string>

template<class T, class Enable = void>
class division_to_two; 

template<class T>
struct division_to_two<T, typename enif::enable_if<std::is_integral<T>::value >::type> 
{
    division_to_two(T value) : name_type(typeid(value).name()), result(value >> 1){}

    void devision() {result = value >> 1; }

    std::string name_type;
    T result;
};

template<class T>
struct division_to_two<T, typename enif::enable_if<std::is_floating_point<T>::value >::type> 
{
    division_to_two(T value) : name_type(typeid(value).name()), result(value / 2){}

    void devision() {result = value / 2; }

    std::string name_type;
    T result;
};

template<typename T>
typename enif::enable_if<std::is_signed<T>::value, T>::type add_minus(T value)
{
    return -value;
}

template<typename T>
typename enif::enable_if<!std::is_signed<T>::value, T>::type add_minus(T value)
{
    return value;
}

