#include <iostream>
using namespace std;

int findsecondlarge(int *arr, int n){

    int largest = *(arr);
    for(int i=1;i<n;i++){
        if(largest <*(arr+i)){
            largest= *(arr+i);
        }
    }

    int second = 0;
    for(int i=1;i<n;i++){
        if(*(arr+i)==largest){
            continue;
        }
        else if(second<*(arr+i)){
            second=*(arr+i);
        }
    }

    return second;
}

void countevenodd(int *arr, int n, int *evenCount, int *oddCount){
    
    for(int i=0;i<n;i++){
        if(*(arr+i)%2==0){
             *evenCount += 1;
        }
        else{
            *oddCount += 1;
        }
    }

}

void rotatearr(int *arr,int n,int k){

    for(int i=0;i<k;i++){
    for(int i=0;i<n-1;i++){
        int temp = *(arr+i);
        *(arr+i) = *(arr+i+1);
        *(arr+i+1) = temp;
    }}

}

int sumofprimes(int* arr, int n){
    int sum =0;

    for(int i=0;i<n;i++){
        
        if(*(arr+i)<=1){continue;}

        int count = 0;
        for(int j=2;j<=*(arr+i)/2; j++){
            if(*(arr+i)%j==0){count++;}
        }

        if(count==0){
            sum += *(arr+i);
        }

    }

return sum;
}


int main(){

    cout<<"\n\t MASHAAL KHAN (24P-3112) \n\n";

    int size = 5;
    int even=0,odd=0;

    int arr[size]={1,2,3,4,5};

    cout<<"\n\t ORIGINAL ARRAY: ";
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i];
    }

    int secondlarge = findsecondlarge(arr, size);

    int k;
    cout<<"\n\t Rotating array index: ";
    cin>>k;
    rotatearr(arr,size,k);
    
    int prime_sum = sumofprimes(arr, size);
    
    countevenodd(arr, size, &even, &odd);

    cout<<"\n\t Rotated Array: ";
    for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<"\n\n\t The second largest no in the array = "<<secondlarge;
    cout<<"\n\n\t Sum of all the prime numbers = "<<prime_sum;
    cout<<"\n\n\t Even numbers count : "<<even;
    cout<<"\n\n\t Odd numbers count : "<<odd<<"\n\n\n";

return 0;    
}