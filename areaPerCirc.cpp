// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: Feb. 25, 2022
// This program calculates and displays the area
// perimeter of a circle with radius 9 mm.


#include <iostream>
#include <cmath>

int main() {
    std::cout << "For a circle that has a radius\n";
    std::cout << "of 9mm:\n";
    std::cout << "\n";
    std::cout << "Area = " << M_PI * pow(9, 2)  << " mm^2\n";
    std::cout << "Perimeter = " << 2*M_PI*9 << " mm\n";
}