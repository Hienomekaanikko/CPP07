/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:52:15 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/09 16:07:01 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void f(T s){
    std::cout << "Hello I am: " << s << std::endl;
}

template <typename T> void iter(T* arr, size_t length, void (*f)(T &)) {
    int i = 0;

    for (int i = 0; i < length; i++) {
        f(arr[i]);
    }
};