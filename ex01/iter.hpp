/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:52:15 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/14 17:21:39 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <functional>

template <typename T, typename F>
void iter(T* arr, size_t length, F f) {
    for (size_t i = 0; i < length; i++)
        f(arr[i]);
}
