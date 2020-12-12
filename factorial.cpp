// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 10 2020
// this program shows the sum of all positive numbers from 0 to number entered

#include <iostream>
#include <string>

int main() {
    // this program shows the sum of all positive numbers from 0 to number
    // entered
    double positive_number;
    double counter;
    double sum;
    std::string positive_number_string;


    // input
    std::cout << "Enter any positive integer please: ";
    std::cin >> positive_number_string;
    std::cout << "" << std::endl;
    sum = 1;
    counter = 1;


    // process and output
    try {
        positive_number = std::stoi(positive_number_string);

        if (positive_number >= 0) {
            do {
                sum = sum * (counter);
                counter = counter + 1;
            } while (counter <= positive_number);
             std::cout << "The factorial of " << positive_number <<" is "
                      << sum << std::endl;
    }   else {
            std::cout << "That was not a positive integer. Enter an integer"
                          " above 0.";
            std::cout << "" << std::endl;
    }
    }catch (std::invalid_argument) {
        std::cout << "That was not an integer. Please enter an integer.";
    }
}
