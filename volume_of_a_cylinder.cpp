// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on April 2021
// This program calculates the volume of a cylinder using dimensions
//    that the user entered

#include <iostream>
#include <cmath>

int main() {
    // This function calculates the volume
    float radiusOfCylinder;
    float heightOfCylinder;
    float volumeOfCylinder;

    // Input
    std::cout << "We will be calculating the volume of a cylinder."
              << std::endl;
    std::cout << std::endl;
    std::cout << "Enter the radius of the cylinder (cm): ";
    std::cin >> radiusOfCylinder;
    std::cout << "Enter the height of the cylinder (cm): ";
    std::cin >> heightOfCylinder;

    // Process
    volumeOfCylinder = M_PI * pow(radiusOfCylinder, 2) * heightOfCylinder;

    // Output
    std::cout << std::endl;
    std::cout << "The volume of the cylinder is: " << volumeOfCylinder
    << " cm³." << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
