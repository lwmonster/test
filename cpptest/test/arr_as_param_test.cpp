#include<iostream>

using namespace std;


//double avg(int arr[], int size) {
double avg(int *arr, int size) {
    int sum = 0;

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum/size;

}


int main() {
    int size = 5;
    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
    } 

    cout << avg(arr, 5) << endl;

}
