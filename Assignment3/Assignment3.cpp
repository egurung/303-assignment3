// Assignment3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "A3.h"
#include <queue>
#include <string>
#include <iterator>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Question 1 

    queue<int> q1;
    // For testing purposes
    q1.push(1);
    q1.push(2);
    q1.push(3);

    // Putting in function
    move_to_rear(q1);

    // Question 2 

    // Test word
    string word = "racr";
    int upper = word.length() - 1;

    // Putting in function
    cout << is_Palindrome(word, upper, 0);
    cout << endl;

    // Question 5

    // Creating map
    map<string, string> stateDataMap;

    // Inputting map keys and values
    stateDataMap.insert({ "Nebraska", "Lincoln"});
    stateDataMap.insert({ "New York", "Albany" });
    stateDataMap.insert({ "Ohio", "Columbus" });
    stateDataMap.insert({ "California", "Sacramento" });
    stateDataMap.insert({ "Massachusetts", "Boston" });
    stateDataMap.insert({ "Texas", "Austin" });
    
    // Printing map
    print_map(stateDataMap);

    // Changing California's value to LA
    stateDataMap.at("California") = "Los Angeles";

    // Getting user input
    string userInput;
    cout << "Please enter state: ";
    getline(cin, userInput);
    cout << endl; 

    // Putting through function
    find_cap(stateDataMap, userInput);

    return 0;
}
