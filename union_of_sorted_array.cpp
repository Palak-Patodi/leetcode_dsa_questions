#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(int arr1[], int n, int arr2[], int m) {
    vector<int> unionArr;
    int i = 0, j = 0;
    
    // Traverse both arrays using two pointers
    while (i < n && j < m) {
        // If duplicate elements are found, add only one and move both pointers
        if (arr1[i] == arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        // If arr1[i] is smaller, add it and increment i
        else if (arr1[i] < arr2[j]) {
            if (unionArr.empty() || unionArr.back() != arr1[i]) {
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        // If arr2[j] is smaller, add it and increment j
        else {
            if (unionArr.empty() || unionArr.back() != arr2[j]) {
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    
    // Add remaining elements from arr1
    while (i < n) {
        if (unionArr.empty() || unionArr.back() != arr1[i]) {
            unionArr.push_back(arr1[i]);
        }
        i++;
    }
    
    // Add remaining elements from arr2
    while (j < m) {
        if (unionArr.empty() || unionArr.back() != arr2[j]) {
            unionArr.push_back(arr2[j]);
        }
        j++;
    }
    
    return unionArr;
}