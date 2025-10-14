/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 16:17:22 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/14 15:38:15 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void) {
    Array<int> arr;
    Array<int> arr2(5);
    Array<char> arr3(10);

    std::cout << "---------------------------------------------------------------------\n\n"; 

    std::cout << "Trying to get a value from the middle of the array:\n"; 
    try {
        int value = arr2[3];
        std::cout << value << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTrying to get a value with negative index:\n"; 
    try {
        int value = arr2[-1000];
        std::cout << value << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\nTrying to get a value with too high index:\n"; 
    try {
        int value = arr2[1000];
        std::cout << value << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "\n---------------------------------------------------------------------\n"; 

    std::cout << "\nTrying copy assignment operator:\n"; 
    arr = arr2;
    
    std::cout << "\nCOPY\n"; 
    arr.get_values_of_arr();
    arr.replace_values_of_cpy(2);
    arr.get_values_of_arr();

    std::cout << "\nORIGINAL:\n";
    arr2.get_values_of_arr();

    std::cout << "\nTrying copy constructor:\n"; 
    Array<int> arr4(arr);

    std::cout << "\nCOPY\n";
    arr4.get_values_of_arr();
    arr4.replace_values_of_cpy(100);
    arr4.get_values_of_arr();

    std::cout << "\nORIGINAL\n";
    arr.get_values_of_arr();


    std::cout << "\n---------------------------------------------------------------------\n"; 
}