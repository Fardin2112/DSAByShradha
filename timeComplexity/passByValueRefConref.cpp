#include <iostream>
#include <vector>
#include <chrono>  // For measuring execution time

using namespace std;
using namespace chrono;

// Function 1: Pass-by-Value (Makes a Copy)
void passByValue(vector<int> vec) {
    vec[0] = 100;  // Modify (won't affect original vector)
}

// Function 2: Pass-by-Reference (No Copy, Modifies Original)
void passByReference(vector<int>& vec) {
    vec[0] = 100;  // Modify (affects original vector)
}

// Function 3: Pass-by-Const-Reference (No Copy, Read-Only)
void passByConstReference(const vector<int>& vec) {
    // vec[0] = 100;  // ❌ ERROR: Cannot modify due to const
}

int main() {
    // Create a large vector
    vector<int> vec(1000000, 1);  // 1 million elements, all initialized to 1

    // Measure time for passByValue
    auto start = high_resolution_clock::now();
    passByValue(vec);
    auto stop = high_resolution_clock::now();
    cout << "Time taken by passByValue: "
         << duration_cast<milliseconds>(stop - start).count() << " ms" << endl;

    // Measure time for passByReference
    start = high_resolution_clock::now();
    passByReference(vec);
    stop = high_resolution_clock::now();
    cout << "Time taken by passByReference: "
         << duration_cast<milliseconds>(stop - start).count() << " ms" << endl;

    // Measure time for passByConstReference
    start = high_resolution_clock::now();
    passByConstReference(vec);
    stop = high_resolution_clock::now();
    cout << "Time taken by passByConstReference: "
         << duration_cast<milliseconds>(stop - start).count() << " ms" << endl;

    return 0;
}
