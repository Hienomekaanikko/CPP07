/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:24:21 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/09 16:19:52 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T> void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template<typename T> T min(T& a, T& b) {
    return (a > b ? b : a);
}

template<typename T> T max(T&a, T&b) {
    return (a > b ? a : b);
}