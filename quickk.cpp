#include <bits/stdc++.h> 
using namespace std;

pair<int, int> DutchNationFlag(vector<int> &arr, int l, int h) {
    int pivot = arr[l];
    int i = l, j = l, k = h;
    while (j <= k) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
            j++;
        } else if (arr[j] > pivot) {
            swap(arr[j], arr[k]);
            k--;
        } else {
            j++;
        }
    }
    return make_pair(i, k);
}

void QuickSort(vector<int> &arr, int l, int h) {
    if (l < h) {
        pair<int, int> p = DutchNationFlag(arr, l, h);
        QuickSort(arr, l, p.first - 1);
        QuickSort(arr, p.second + 1, h);
    }
}

vector<int> quickSortUsingDutchNationalFlag(vector<int> &arr) {
    int s = 0, e = arr.size() - 1;
    QuickSort(arr, s, e);
    return arr;
}

int main() {
    vector<int> arr = {9, 4, 7, 2, 6, 5, 3, 8, 1};
    quickSortUsingDutchNationalFlag(arr);

    for (int num : arr) {
        cout << num << " ";
    }

    return 0;
}
