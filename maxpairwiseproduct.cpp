/**
 * Task: Given a sequence of non-negative integers, compute the maximum pairwise product. This is defined as the largest integer obtainable by multiplying two distinct elements (elements at different indices, even if their values are the same).

Output Format:
A single integer representing the maximum pairwise product.

Sample Input:

text
4  
2 5 9 9  
Sample Output:

text
81  
 */

#include <iostream>
#include <sstream>

int main() {
    int a = 0, b = 0;
    int n;
    std::cin >> n;
    std::cin.ignore(); // ignore new line character for next line

    std::string line;
    std::getline(std::cin, line);

    std::stringstream ss(line);
    int value;
    while (ss >> value) {
        if (value > a) {
            b = a;
            a = value;
        }
        else if (value > b) b = value;
    }
    std::cout << a * b;
    return 0;
}