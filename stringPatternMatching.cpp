#include <iostream>
#include <string>
using namespace std;

int naivePatternMatch(const string& text, const string& pattern) {
    if (pattern.empty()) return -1; // handle empty pattern
    int n = text.size();
    int m = pattern.size();

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i; // found at index i
    }
    return -1; // not found
}

int main() {
    // Test case 1: Pattern at the beginning
    cout << "Index: " << naivePatternMatch("hello world", "hello") << endl;

    // Test case 2: Pattern at the end
    cout << "Index: " << naivePatternMatch("programming", "ming") << endl;

    // Test case 3: Pattern not present
    cout << "Index: " << naivePatternMatch("abcdef", "gh") << endl;

    // Test case 4: Empty pattern
    cout << "Index: " << naivePatternMatch("abcdef", "") << endl;

    return 0;
}