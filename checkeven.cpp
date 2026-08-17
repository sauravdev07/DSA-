// To check how many even numbers in an array ...
#include<iostream>
using namespace std;
int main(){
    int marks[6]={1,7,10,11,2,5};
    int count=0;
    for(int i=0;i<6;i++){
        if(marks[i]%2==0)
            count+=1;
        }
         cout<<"Total even number is "<<count<<endl;
}
