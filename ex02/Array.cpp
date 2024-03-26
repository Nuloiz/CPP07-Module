#include "Array.hpp"

Array::Array(){
    this->_array = new T[0];
    this->_size = 0;
}

Array::Array(unsigned int n){
    this->_array = new T[n];
    this->_size = n;
}

Array::Array(Array const &src){
    this->_array = new T[src._size];
    this->_size = src._size;
    for (unsigned int i = 0; i < this->_size; i++)
        this->_array[i] = src._array[i];
}

Array &Array::operator=(Array const &rhs){
    if (this != &rhs)
    {
        delete[] this->_array;
        this->_array = new T[rhs._size];
        this->_size = rhs._size;
        for (unsigned int i = 0; i < this->_size; i++)
            this->_array[i] = rhs._array[i];
    }
    return *this;
}

Array::~Array(){
    delete[] this->_array;
}

T &Array::operator[](unsigned int i){
    if (i >= this->_size)
        throw std::exception();
    return this->_array[i];
}