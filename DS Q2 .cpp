#include <iostream>
#include <ctype.h>

using namespace std;

void rev_sent(char str[],int n){

    for(int i=0;i<n/2;i++){
        swap(str[i],str[n-1-i]);
    }

}

void rev_word(char str[],int n){
    
    int inital=0;

    for(int i=0;i<=n;i++){
        if(str[i]==' '|| str[i]=='\0'){
            int start=inital;
            int end=i-1;
            while(start<end){
                swap(str[start],str[end]);
                start++;end--;
            }
        inital = i+1;
        }
        
    }
    
   
}

void vowel_cases(char str[]){

    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            str[i] = toupper(str[i]);
        }
        else{
            str[i] = tolower(str[i]);
        }
    }

}

void remove_space(char str[]){
    
   for(int i=0;str[i]!='\0';i++){
        if(str[i] == ' '){
            for(int j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
        }
    }
}

void print(char str[]){
    cout<<"\n\n\t compressed array:  ";
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }
    cout<<"\n\n\n\n";
}

int main(){
    int size = 11;
    char str[] = "hello world";
    
    cout<<"\n\n\t original array:  ";
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }

    rev_sent(str,size);
    rev_word(str,size);
    vowel_cases(str);
    remove_space(str);
    print(str);

return 0;
}