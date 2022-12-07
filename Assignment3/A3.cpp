#include "A3.h"
#include <iostream>
#include <string>
#include <map>
using namespace std;

// Printing the Queue
void printQueue(queue<int> q1) {
    while (!q1.empty()) {
        cout << q1.front() << " ";
        q1.pop();
    }
    cout << endl;
}

// Question 1 Function
void move_to_rear(queue<int> q1) {
    // Outputting queue to check
    cout << "Original Queue: ";
    printQueue(q1);
    cout << endl;
    // Doing the functions
    int first = q1.front();
    q1.pop();
    q1.push(first);
    // Outputting queue to check
    cout << "Changed Queue: ";
    printQueue(q1);
}

// Question 2 Function
bool is_Palindrome(string word, int upper, int lower) {
    // End of function, telling to stop
    if (upper <= lower) 
        return true;
    // False case
    if (word.at(upper) != word.at(lower)) 
        return false;
    // Recursion magic
    return is_Palindrome(word, upper - 1, lower + 1);
}

// Question 5
void print_map(map<string, string>stateDataMap) {
    for (auto x : stateDataMap)
        cout << x.first << " " << x.second << endl;
}
void find_cap(map<string, string>stateDataMap, string userState) {
    cout << stateDataMap.at(userState);
}
