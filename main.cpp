#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int>& arr) {
    int n = arr.size();
    int i, key, j, count = 0;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            count++;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return count;
}
int main() {
    vector<int> arr = {12, 11, 13, 5, 6};
    cout << "Number of shifts: " << insertionSort(arr) << endl;
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}