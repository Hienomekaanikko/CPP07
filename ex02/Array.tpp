/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:55:30 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/20 10:16:55 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array() {
    T* new_arr = new T[0];
    _size = 0;
    _arr = new_arr;
}

template<typename T>
Array<T>::Array(unsigned int n) {
    std::cout << "Constructing an object with ann array of " << n << " elements." << std::endl;
    T* new_arr = new T[n]();
    _size = n;
    _arr = new_arr;
}

template<typename T>
Array<T>::Array(const Array<T>& other) {
    std::cout << "Copy constructorr called" << std::endl;
    _size = other._size; 
    _arr = new T[_size]();
    for (unsigned int i = 0; i < other._size; i++) {
        _arr[i] = other._arr[i];
    }
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        delete[] _arr;
        _size = other._size;
        _arr = new T[_size];
        for (unsigned int i = 0; i < other._size; i++) {
            _arr[i] = other._arr[i];
        }
    }
    return *this;
}

template<typename T>
Array<T>::~Array() {
    std::cout << "Destructor called" << std::endl;
    delete[] _arr;
}

template<typename T>
size_t Array<T>::size() const {
    return _size;
}

template<typename T>
const char* Array<T>::outOfBoundsException::what() const noexcept {
    return "index is out of bounds";
}

template<typename T>
T& Array<T>::operator[](std::size_t i) {
    if (i >= _size)
        throw outOfBoundsException();
    return _arr[i];
}

template<typename T>
const T& Array<T>::operator[](std::size_t i) const {
    if (i >= _size)
        throw outOfBoundsException();
    return _arr[i];
}

template<typename T>
void Array<T>::get_values_of_arr(void) const {
    std::cout << "Printing the values:" << std::endl;
    for (unsigned int i = 0; i < _size; i++) {
        std::cout << _arr[i] << " ";
    }
    std::cout << std::endl;
}

template<typename T>
void Array<T>::replace_values_of_cpy(T value) {
    std::cout << "\n***Replacing the values of the copy***" << std::endl;
    for (unsigned int i = 0; i < _size; i++) {
        _arr[i] = value;
    }
    std::cout << "***Values replaced***\n" << std::endl;
}