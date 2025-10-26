#include <iostream>
using namespace std;

//prototypes
void count_freq(int arr[],int unique[],int freq[],int n,int m);
void descend(int unique[],int freq[],int n);
void print(int arr[],int n,int unique[],int freq[],int m);

void remove_dup(int arr[],int n){

    int count= 0;

    for(int i=0;i<n;i++){
        bool read = false;
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){read= true;} 
        }
        if(read!=true){count++;}
    }


    int unique[count];
    count=0;
    for(int i=0;i<n;i++){
        bool read = false;
        for(int j=0;j<i;j++){
            if(arr[i] == arr[j]){read= true;} 
        }

        if(read!=true){
            unique[count] = arr[i];
            count++;
        }
    }

    int freq[count];

    count_freq(arr,unique,freq,n,count);
    descend(unique,freq,count);
    print(arr,n,unique,freq,count);

}

void count_freq(int arr[],int unique[],int freq[],int n,int m){
   int count;
    for(int i=0;i<m;i++){
        count =0;
        for(int j=0;j<n;j++){
            if(unique[i]==arr[j]){count++;}
        }
        freq[i]=count;
    }

}

void descend(int unique[],int freq[],int n){
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            if(freq[j]<freq[i]){
                swap(freq[j],freq[i]);
                swap(unique[j],unique[i]);
            }
            else if(freq[j]==freq[i] && unique[j]>unique[i]){
                swap(freq[j],freq[i]);
                swap(unique[j],unique[i]);
            }
        }
    }

}

void print(int arr[],int n,int unique[],int freq[],int m){

    cout<<"\n\t ORIGINAL ARRAY:  ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<"\n";

    cout<<"\n\t REARRANGED ARRAY :  ";
    for(int i=0;i<m;i++){
        cout<<" "<<unique[i];
    }
    cout<<"\n";

    cout<<"\n\t Frequencies : \n\n";
    for(int i=0;i<m;i++){
        cout<<"\t\t"<<unique[i]<<" -> "<<freq[i]<<"\n";
    }
    cout<<"\n\n";
    
}

int main(){

    cout<<"\n\t MASHAAL KHAN (24P-3112) \n";

    int arr[]={4,5,6,5,4,3,4,6,7,3,5};

    remove_dup(arr,11);


return 0;
}