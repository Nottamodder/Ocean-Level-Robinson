// Ocean Levels Robinson.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //The ocean’s level is currently rising at about 1.5 millimeters per year
    float oceanLevel = 1.5;
     /*The number of millimeters higher than the current level that the ocean’s level will be in
        5 years.*/
     float oceanFive;
     oceanFive = 5 * oceanLevel ;
     /*The number of millimeters higher than the current level that the ocean’s level will be in
        7 years.*/
     float oceanSeven;
     oceanSeven = 7 * oceanLevel;
     /*The number of millimeters higher than the current level that the ocean’s level will be in
        10 years.*/
     float oceanTen;
     oceanTen = 10 * oceanLevel;
     // display the values of 5,7,10 and display a message with the three values
    std::cout << "The ocean's water level rises 1.5 millimeters per year. \n";
    std::cout << "In five years the ocean's water will rise by: " << oceanFive << " millimeters \n";
    std::cout << "In seven years the ocean's water will rise by: " << oceanSeven << " millimeters \n";
    std::cout << "In ten years the ocean's water will rise by: " << oceanTen << " millimeters \n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
