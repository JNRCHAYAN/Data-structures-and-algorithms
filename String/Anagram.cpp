#include <iostream>
#include <string>
using namespace std;

int main() {
    string input1, input2;

    cout << "Enter the first string: ";
    cin >> input1;
    cout << "Enter the second string: ";
    cin >> input2;

    for (int i = 0; i < input1.length() - 1; i++) {
        for (int j = 0; j < input1.length() - i - 1; j++) {
            if (input1[j] > input1[j + 1]) {
                char temp = input1[j];
                input1[j] = input1[j + 1];
                input1[j + 1] = temp;
            }

            if (input2[j] > input2[j + 1]) {
                char temp = input2[j];
                input2[j] = input2[j + 1];
                input2[j + 1] = temp;
            }
        }
    }

    if (input1 == input2) {
        cout << "Anagrams!\n";
    } else {
        cout << "No anagrams.\n";
    }

    return 0;
}
