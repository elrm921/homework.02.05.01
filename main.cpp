#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
T pow_2(T n) {
    return n * n;
}
template<>
vector<int> pow_2(vector<int> vec) {
    for (auto &n : vec) {
        n = n * n;
    }
    return vec;
}

int main() {
    {
        int number = 4;
        cout << "Input: " << number << endl;
        cout << "Output: " << pow_2(number) << endl;
    }
    {
        vector<int> vector = {1,2,3,4};
        cout << "Input: ";
        for (auto &n : vector) { cout << n << " "; }
        cout << endl;
        auto new_vector = pow_2(vector);
        cout << "Output: ";
        for (auto &n : new_vector) { cout << n << " "; }
        cout << endl;
    }
    return 0;
}