#include <iostream>
using namespace std;


int main(){

    cout<<"\n\t MASHAAL KHAN (24P-3112) \n\n";

    int roll_no;
    cout<<"\n\t Enter Roll no: ";
    cin>>roll_no;
    
    int* teacher = &roll_no;
    int** incharge = &teacher;
    int*** principal = &incharge;

    cout<<"\n\t Student Roll no: "<<roll_no;
    cout<<"\n\t Student Roll no via teacher: "<<*teacher;
    cout<<"\n\t Student Roll no via incharge: "<<**incharge;
    cout<<"\n\t Student Roll no via principal: "<<***principal;

return 0;    
}