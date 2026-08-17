//Take marks of student from the user and store it in array named marks if marks is less than 35 then print out the index of respective marks ...
#include<iostream>
using namespace std;
int main(){
    int marks[7];
    for(int i =0;i<7;i++){
        cout<<"Enter the marks: "<<endl;
        cin>>marks[i];
    }
    for(int i=0;i<7;i++){
        if(marks[i]<35)
        cout<<i<<" ";
    }
}
