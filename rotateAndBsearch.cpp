#include <iostream>
using namespace std;

int getpivot(int* arr, int n){

    int s=0;

    int e=n-1;

    int mid=s+(e-s)/2;

    while(s<e){

        if(arr[0]<=arr[mid]){

            s=mid+1;

        }

        else{

            e=mid;

        }

        mid=s+(e-s)/2;

    }

    return mid;

}

int binarysearch(int* arr, int s,int e, int key){

    int mid=s+(e-s)/2;

    int ans=-1;

    while(s<=e){

        if(arr[mid]==key){

            ans=mid;

            return ans;

        }

        else if(arr[mid]<key){

            s=mid+1;

        }

        else{

            e=mid-1;

        }

        mid=s+(e-s)/2;

    }

    return ans;

}

int search(int* arr, int n, int key) {

 int pivot=getpivot(arr,n);

 int e=n-1;

 int ans;

 if(key>=arr[pivot] && key<=arr[e]){

     ans=binarysearch(arr,pivot,e,key);

 }

 else{

     ans=binarysearch(arr,0,pivot-1,key);

 }

 return ans;

}
int main() {
    int arr[] = {7, 9, 11, 12, 15, 2, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int key = 12;  // Target key to search for

    int result = search(arr, n, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    return 0;
}






