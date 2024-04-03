#pragma once

#include <iostream>
#include <exception>
#include <cstdlib>

template <class T>
class Array
{
    public:
        Array() : _array(new T[0]), _size(0) {}
        Array(unsigned int n) : _array(new T[n]), _size(n) {}

        Array(Array<T> const &src) : _array(new T[src._size]), _size(src._size)
        {
            for (unsigned int i = 0; i < this->_size; i++)
                this->_array[i] = src._array[i];
        }

        Array<T> &operator=(const Array<T> &rhs)
        {
            _array = (new T[rhs._size]);
            _size = (rhs._size);
            for (unsigned int i = 0; i < this->_size; i++)
                this->_array[i] = rhs._array[i];
            return *this;
        }

        ~Array()
        {
            delete[] this->_array;
        }


        unsigned int size(){ return this->_size; }

        T& operator[](unsigned int i)
        {
            if (i >= this->_size)
                throw std::exception();
            return this->_array[i];
        }

    private :
        T *_array;
        unsigned int _size;
};

