#include <iostream>
#include <string>
using namespace std;

int main() {
    string sequence;
    cin >> sequence;

    int n = sequence.length();
    int max_repetition = 0;
    int current_repetition = 1;

    for (int i = 1; i < n; i++) {
        if (sequence[i] == sequence[i - 1]) {
            current_repetition++;
        } else {
            max_repetition = max(max_repetition, current_repetition);
            current_repetition = 1;
        }
    }

    max_repetition = max(max_repetition, current_repetition);
    cout << max_repetition << endl;

    return 0;
}