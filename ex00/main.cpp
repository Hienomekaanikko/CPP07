/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msuokas <msuokas@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 13:24:16 by msuokas           #+#    #+#             */
/*   Updated: 2025/10/09 13:49:46 by msuokas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void int_test(int a, int b) {
    std::cout << "----------------------------------------------------------\n" << std::endl;
    std::cout << "INTEGER_TEST: \n" << std::endl;
    
    std::cout << "Before swap: \n" 
    << "a = " << a << ", b = " << b << std::endl;
    
    ::swap(a, b);

    std::cout << "After swap: \n" 
    << "a = " << a << ", b = " << b << std::endl;

    int res = min(a, b);
    std::cout << "Min of " << a << " and " << b << " is: " << res << std::endl;

    res = max(a, b);
    std::cout << "Max of " << a << " and " << b << " is: " << res << std::endl;
}

void float_test(float a, float b) {
    std::cout << "\n----------------------------------------------------------\n" << std::endl;
    std::cout << "CHARACTER_TEST: \n" << std::endl;
    std::cout << "Before swap: \n" 
    << "a = " << a << ", b = " << b << std::endl;
    
    ::swap(a, b);

    std::cout << "After swap: \n" 
    << "a = " << a << ", b = " << b << std::endl;

    float res = min(a, b);
    std::cout << "Min of " << a << " and " << b << " is: " << res << std::endl;

    res = max(a, b);
    std::cout << "Max of " << a << " and " << b << " is: " << res << std::endl;
}

void char_test(char a, char b) {
    std::cout << "\n----------------------------------------------------------\n" << std::endl;
    std::cout << "CHARACTER_TEST: \n" << std::endl;
    std::cout << "Before swap: \n" 
    << "a = " << a << ", b = " << b << std::endl;
    
    ::swap(a, b);

    std::cout << "After swap: \n" 
    << "a = " << a << ", b = " << b << std::endl;

    char res = min(a, b);
    std::cout << "Min of " << a << " and " << b << " is: " << res << std::endl;

    res = max(a, b);
    std::cout << "Max of " << a << " and " << b << " is: " << res << std::endl;
}

int main(void) {
    int_test(1, 2);
    char_test('a', 'z');
    float_test(123.1, 436.3);

    
    return 0;
}