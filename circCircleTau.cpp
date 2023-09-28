// Copyright (c) 2021 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Sept/27/2023
// This program asks the user for the radius
// of a circle. It will then
// calculates the circumference using tau
// and a user's input.
#include <iostream>

int main() {
    // Declaring constant for tau.
    const float TAU = 6.28;

    // Declaring variables for radius and circumference.
    float radius, circumference;

    // Get input from the user for radius.
    std::cout << "Enter a radius (cm): ";
    std::cin >> radius;

    // Calculate the circumference using tau in the equation.
    circumference = TAU * radius;

    // Displaying the circumference back to the user.
    std::cout << "\n";
    std::cout << "The circumference = " << circumference << "cm" << std::endl;
}
