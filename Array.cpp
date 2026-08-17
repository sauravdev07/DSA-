// 1.Take marks of student from the user and store it in array named marks if marks is less than 35 then print out the index of respective marks ...
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


//2. take the value from user and find the sum of all the element of an array
#include<iostream>
using namespace std;
int main(){
    int sum[7];
    int add=0;
    for(int i =0;i<7;i++){
        cout<<"Enter the value: "<<endl;
        cin>>sum[i];
    }
    for(int i=0;i<7;i++){
        add += sum[i];

    }
    cout<<"Sum of all the element of array is "<<add;
}


// 3.take the value from the user and print the second largest element of the array 
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int largest[8];
    int max=INT_MIN;
   
    for(int i=0;i<8;i++){
        cout<<"Enter the element: ";
        cin>>largest[i];
    }
    for(int i=0; i<8;i++){
        if(largest[i]>max){
            max=largest[i];
        }
    }
    int secmax=INT_MIN;
    for(int i =0;i<8;i++){
        if( largest[i]!=max  && secmax<largest[i]){
            secmax =largest[i];
           
        }
        
    }
     cout<<secmax;
}

// 4.take the value from the user and match whether it is present in the array 
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value of x: ";
    cin>>x;
    int arr[5];
    bool flag = false;
    for(int i =0;i<5;i++){
        cout<<"Enter the element: ";
        cin>>arr[i];
    }
    for(int i=0; i<5;i++){
        if(arr[i]==x) flag = true;
    }
    if(flag==true){
        cout<<"Element present in array";
    }
    else 
    cout<<"Element not present in array";
}
