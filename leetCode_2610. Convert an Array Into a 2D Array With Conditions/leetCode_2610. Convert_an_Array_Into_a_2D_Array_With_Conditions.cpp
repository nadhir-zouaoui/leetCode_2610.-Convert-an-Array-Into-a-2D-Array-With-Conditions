// leetCode_2610. Convert an Array Into a 2D Array With Conditions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<vector<int>> findMatrix(vector<int>& nums) {
    int count = 0;
    int length = nums.size();
    unordered_map<int, int> myMap;
    vector<vector<int>> res;

    int max = 0;
    for (int i = 0;i < length;i++) {
        myMap[nums[i]] += 1;
        if (myMap[nums[i]] > max) {
            max = myMap[nums[i]];
        }
    }
    for (int i = 0;i < max;i++) {
        res.push_back(vector<int>());
    }
    for (const auto& entry : myMap) {
        int num = entry.first;
        int freq = entry.second;
        for (int i = 0; i < freq; i++) {
            res[i].push_back(num);
        }
    }
    return res;
}
int main()
{
    vector<int> test = { 1,3,4,1,2,3,1 };
    vector<vector<int>> res = findMatrix(test);
    std::cout << "Hello World!\n";
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
