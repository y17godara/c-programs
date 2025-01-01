#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Function to explain the time complexities
void explainTimeComplexity() {
    // List of time complexities with explanations and examples
    vector<tuple<string, string, string>> timeComplexities = {
        {"O(1)", "Constant Time", "Time doesn't depend on the input size. Only one operation is performed. Example: Accessing an element in an array by index (arr[5])."},
        {"O(log n)", "Logarithmic Time", "Time grows slowly as the input size increases (divide and conquer approach). Example: Binary search, finding an item in a sorted list."},
        {"O(n)", "Linear Time", "Time grows directly proportional to the input size. Example: Searching for an item in an unsorted list."},
        {"O(n log n)", "Linearithmic Time", "Time grows faster than linear but slower than quadratic. Example: Efficient sorting algorithms (e.g., Merge Sort, Quick Sort)."},
        {"O(n²)", "Quadratic Time", "Time grows quadratically with the input size. Example: Bubble Sort, Selection Sort, or checking all pairs in a list."},
        {"O(n³)", "Cubic Time", "Time grows cubically with the input size. Example: Algorithms involving triple nested loops."},
        {"O(2ⁿ)", "Exponential Time", "Time doubles with each additional input element. Example: Solving the Traveling Salesman Problem with brute force."},
        {"O(n!)", "Factorial Time", "Time grows factorially with the input size. Extremely inefficient for large n. Example: Generating all permutations of n items."}
    };

    // Output the time complexities in a readable format
    cout << "Time Complexity Explanation\n";
    cout << "------------------------------------------\n";
    cout << "| Time Complexity | Name               | Description                                                                 | Example\n";
    cout << "------------------------------------------\n";

    // Print each time complexity with description and example
    for (const auto& item : timeComplexities) {
        cout << "| " << setw(15) << get<0>(item) 
             << " | " << setw(15) << get<1>(item) 
             << " | " << setw(70) << get<2>(item) << "\n";
    }
    cout << "------------------------------------------\n";
}

// Function to display the time complexity table for various input sizes
void displayTimeComplexityTable() {
    // Input sizes and time complexity values
    vector<vector<string>> timeComplexityTable = {
        {"1", "1", "0", "1", "0", "1", "1", "2", "1"},
        {"2", "1", "1", "2", "2", "4", "8", "4", "2"},
        {"5", "1", "2", "5", "11", "25", "125", "32", "120"},
        {"10", "1", "3", "10", "33", "100", "1000", "1024", "3.63M"},
        {"20", "1", "4", "20", "86", "400", "8000", "1M", "2.43E+18"}
    };

    // Display the time complexity table
    cout << "\nTime Complexity Table for Various Input Sizes (n)\n";
    cout << "------------------------------------------------------------\n";
    cout << "| Input Size (n) | O(1) | O(log n) | O(n) | O(n log n) | O(n²) | O(n³) | O(2ⁿ) | O(n!)  |\n";
    cout << "------------------------------------------------------------\n";

    // Print each row of the table
    for (const auto& row : timeComplexityTable) {
        cout << "| " << setw(15) << row[0];
        for (size_t i = 1; i < row.size(); ++i) {
            cout << " | " << setw(10) << row[i];
        }
        cout << " |\n";
    }
    cout << "------------------------------------------------------------\n";
}

int main() {
    // Print Time Complexity explanation
    explainTimeComplexity();

    // Display the time complexity table for various input sizes
    displayTimeComplexityTable();

    return 0;
}
