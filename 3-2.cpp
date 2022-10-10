#include <iostream>
using namespace std;
int partition(int arr[], int low, int high, int pivot){
	int PIndex = low;
    for(int i=low;i<=high;i++) {
        if(arr[i]<=pivot) {
            swap(arr[PIndex],arr[i]);
            PIndex++;
        }
    }

    PIndex--;

	return PIndex;
}
void quickSort(int arr[], int low, int high){
	if(low < high) {
	    int pivot = arr[high];
	    int PIndex = partition(arr, low, high, pivot);
            quickSort(arr, low, PIndex-1);
            quickSort(arr, PIndex+1, high);
	}
}

int main()
{

	int arr[8]={7,5,12,16,216,122,68,1};
	int n=8;

	quickSort(arr, 0 , n-1);

	cout<<"The sorted array is: ";
	for( int i = 0 ; i < n; i++){
		cout<< arr[i]<<" ";
	}

    return 0;
}