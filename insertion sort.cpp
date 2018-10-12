//
//  main.cpp
//  insertion sort(test)
//
//  Created by Mac on 2018/10/12.
//  Copyright © 2018年 Mac. All rights reserved.
//

#include <iostream>
using namespace std;


void InsertionSort(int *arr, int siz){
    
    for (int i = 1; i < siz; i++) {
        int key = arr[i];
        int j = i - 1;
        while (key < arr[j] && j >= 0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    
    int arr[6] = { 5, 3, 1, 2, 6, 4 };
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    InsertionSort(arr, 6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
