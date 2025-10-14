/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:17:19 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/14 17:00:34 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class Array {
    private:
        T* _arr;
        size_t _size;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array<T>& other);
        Array<T>& operator=(const Array<T>& other);
        ~Array();

        size_t size() const;
        T& operator[](std::size_t i);
        const T& operator[](std::size_t i) const;

        //stuff only for testing purposes
        void get_values_of_arr(void) const;
        void replace_values_of_cpy(T value);

        class outOfBoundsException : public std::exception {
            const char *what() const noexcept override;
        };
};

#include "Array.tpp"