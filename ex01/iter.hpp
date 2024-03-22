#pragma once

#include <iterator>

template <typename T>
T iter(T *array, size_t length, void (*func)(T const &))
{
    for (size_t i = 0; i < length; i++)
        func(array[i]);
}