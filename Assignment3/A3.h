#pragma once
#include <queue>
#include <string>
#include <map>
using namespace std;

// Question 1

// Outputting queue
void printQueue(queue<int> q1);
// Moving front to rear
void move_to_rear(queue<int> q1);

// Question 2

// Checking if palindrome
bool is_Palindrome(string word, int upper, int lower);

// Question 5

// Print Map
void print_map(map<string, string>stateDataMap);
// Finding capital using state
void find_cap(map<string, string>stateDataMap, string userState);