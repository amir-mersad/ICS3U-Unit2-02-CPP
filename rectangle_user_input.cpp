// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on September 2019
// This program calculates the area and the perimeter of a circle
//     with user input


#include <iostream>

int main() {
    // this function calculates area and perimeter
    int length;
    int width;
    int area;
    int perimeter;

    // input
    std::cout << "enter length of rectangle (mm): " << std::endl;
    std::cin >> length;
    std::cout << "enter width of rectangle (mm): " << std::endl;
    std::cin >> width;

    // process
    area = length*width;
    perimeter = 2*(length+width);

    // output
    std::cout << "" << std::endl;
    std::cout << "area is " << area << "mm^2" << std::endl;
    std::cout << "perimeter is " << perimeter << "mm" << std::endl;
}
