#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> numbers(n - 1);
    int totalSum = (n * (n + 1)) / 2;
    int givenSum = 0;
    int missingNumber;
    
    for (int i = 0; i < n - 1; i++) {
        cin >> numbers[i];
        givenSum += numbers[i];
    }
    
    missingNumber = totalSum - givenSum;
    
    cout << missingNumber << endl;
    
    return 0;
}