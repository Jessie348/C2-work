#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        string result = "";
        
        for (int i = 1; i <= n; ++i) {
            result += to_string(i);

            int remainder = i % 3;
            if (remainder == 1) {
                result += "+";
            } else if (remainder == 2) {
                result += "--";
            } else {
                result += "***";
            }
        }
        
        cout << result << "\n";
    }

    return 0;
}