#pragma once

#include <iostream>
#include <exception>

template <class T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &src);
        Array &operator=(Array const &rhs);
        ~Array();

    private :
        T *_array;
        unsigned int _size;
};

T &Array::operator[](unsigned int i);
