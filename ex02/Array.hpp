/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:17:19 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/09 16:59:58 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class Array {
    private:
        T arr[];
    public:
        Array(unsigned int n);
        Array(const Array<T>& other);
        Array<T>& operator=(const Array<T>& other);
        ~Array();

        int size() const;
};