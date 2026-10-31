/*
Number of Buildings Facing the Sun
Given the array arr[] of heights of certain buildings that lie adjacent 
to each other, sunlight starts falling from the left side of the 
buildings. If there is a building of a certain height, all the buildings
 to the right side of it having lesser heights cannot see the sun. 
 Find the total number of buildings that receive sunlight.*/

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

// Function to count buildings receiving sunlight from the left
int countBuildingsWithSunlight(const vector<int>& arr) {
    stack<int> s;
    int count = 0;

    for (int i = 0; i < arr.size(); i++) {
        // A building gets sunlight if it is taller than the tallest building before it
        if (s.empty() || arr[i] > s.top()) {
            s.push(arr[i]); 
            count++;
        }
    }

    return count;
}

int main() {
    vector<int> arr = {6, 2, 8, 4, 11, 13};
    
    cout << "Total buildings receiving sunlight: " 
         << countBuildingsWithSunlight(arr) << endl;

    return 0;
}