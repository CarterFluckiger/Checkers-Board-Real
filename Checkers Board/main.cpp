/*
 Carter Fluckiger
 C++ Fall 2019
 Due: September 12, 2019
 Lab 2 Exploring Output
 Description: In this lab I am attempting to create a checkers board using the * character and spaces. The checkers board will be created using const strings and using them in the most efficient way.
 */

#include <iostream>

using namespace std;

int main()
{
    // These are the const strings for the two types of star and space lines that I need
    const string first ="   *   *   *   *";
    const string second =" *   *   *   *";
    
    
    // the couts that alternate and end the line to make it uniform
    cout<< first <<endl;
    cout<< second<< endl;
    cout<< first <<endl;
    cout<< second<< endl;
    cout<< first <<endl;
    cout<< second<< endl;
    cout<< first <<endl;
    cout<< second<< endl;
    
    
    return 0;
}

