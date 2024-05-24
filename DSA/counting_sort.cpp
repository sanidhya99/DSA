#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
//counting_sort---> in this we basically make a frequency array or vector of size of largest element in original
//vector and initialize all elements of frequency vector with 0 and then iterate over original array and keep 
//increasing the value in freq vector at index corresponding to value of current element in original array 
//then iterate over freq  array and keep putting values in original array in sorted order according to freq of values
//frequency vector.
//time complexity of count sort-------> o(n+range)
void counting_sort(int arr[],int n){
    int largest_element=-1;
    for (int i = 0; i < n; i++)
    {
        largest_element=max(largest_element,arr[i]);
    }
    vector<int>freq(largest_element+1,0);
    for (int i = 0; i <n; i++)
    {
        freq[arr[i]]++;
    }
    int j=0;
    for (int i = 0; i <freq.size(); i++)
    {
        while(freq[i]>0){
            arr[j]=i;
            j++;
            freq[i]--;
        }
    }
    
}
int main(){
int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
  int n = sizeof(arr) / sizeof(int);
  counting_sort(arr,n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
return 0;
}