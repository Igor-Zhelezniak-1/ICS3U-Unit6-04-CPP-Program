// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Dec 2019
// This program uses a 2D array

#include <iostream>
#include <random>

template <int rows, int cols>
int averageOfNumbers(int (&passedIn2DList)[rows][cols]) {
    // this function adds up all the elements in  a 2D array

    int average = 0;
    int total = 0;

    for (size_t counter1 = 0; counter1 < rows; ++counter1) {
        for (size_t counter2 = 0; counter2 < cols; ++counter2)
            total =  total + passedIn2DList[counter1][counter2];
    }
    average = total / 4;

    return average;
}

int main() {
    // this function uses a 2D array

    int randomNumber;
    const int rows = 2;
    const int columns = 2;
    int listD2[rows][columns];
    int average;

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
