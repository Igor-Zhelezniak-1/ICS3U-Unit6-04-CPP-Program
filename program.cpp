// Copyright (c) 2021 Igor All rights reserved
//
// Created by: Igor
// Created on: Nov 2021
// This program uses a 2D array

#include <iostream>
#include <random>

template <int rows, int cols>
float averageOfNumbers(int (&passedIn2DList)[rows][cols]) {
    // this function adds up all the elements in  a 2D array

    float average = 0;
    float total = 0;
    int numberOfNumbers = 0;

    for (size_t counter1 = 0; counter1 < rows; ++counter1) {
        for (size_t counter2 = 0; counter2 < cols; ++counter2)
            total =  total + passedIn2DList[counter1][counter2];
    }
    numberOfNumbers = rows * cols;
    average = total / numberOfNumbers;

    return average;
}

int main() {
    // this function uses a 2D array

    int randomNumber;
    const int rows = 3;
    const int columns = 3;
    int listD2[rows][columns];
    float average;

    std::cout << "Starting..." << std::endl;

    std::cout << "" << std::endl;

    for (int counter1 = 0; counter1 < rows; counter1++) {
        for (int counter2 = 0; counter2 < columns; counter2++) {
            std::random_device rseed;
            std::mt19937 rgen(rseed());  // mersenne_twister
            std::uniform_int_distribution<int> idist(0, 10);  // [0,10]
            randomNumber = idist(rgen);
            listD2[counter1][counter2] = randomNumber;
            std::cout << randomNumber << " ";
        }
        std::cout << std::endl;
    }
    average = averageOfNumbers(listD2);
    std::cout << "The average of all the numbers is: " << average << std::endl;

    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
