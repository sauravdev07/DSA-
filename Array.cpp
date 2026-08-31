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

// 5. take the input from the user and print second smallest element of array....
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int small[6];
    int smallest=INT_MAX;
     int secsmallest = INT_MAX;
    for(int i=0;i<6;i++){
        cout<<"Enter the value : ";
        cin>>small[i];
    }
    for(int i=0;i<6;i++){
        if(small[i]<smallest)
        smallest = small[i];
    }
    
    for(int i=0;i<6;i++){
        if(small[i]<secsmallest && small[i]!=smallest)
        secsmallest=small[i];
    }
    cout<<"Second smallest is "<<secsmallest;
} 

// 6. Take array from user and print the odd element present in the array and their index.
#include<iostream>
using namespace std;
int main(){
    int number[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the element at "<<i<<endl;
        cin>>number[i];
    }
    for(int i =0;i<5;i++){
        if(number[i]%2!=0){
             cout<<"The odd element in array is  "<<number[i]<<endl;
        }
       
    }
    for (int i =0;i<5;i++){
        if(number[i]%2!=0){
          cout<<"The index of odd element in array is : "<<i<<endl;  
        }    

        
    }
}


// 7. take the array and take element from user and check whether it is sorted or not 
#include<iostream>
using namespace std;
int main(){
    int arr[4];
    bool check = true;      // starts from true if start with false one one is sorted it will becomes true.
    for(int i=0;i<4;i++){
        cout<<"Enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=1;i<4;i++){       //intialize from 1 because [i-1] will give garbage value when index is zero.
        if(arr[i]<arr[i-1])
        check = false;         
    }
    if(check)
        cout<<"Array is sorted";
    else
        cout<<"Array is unsorted";
} 

//8. take the input from the user and check how many times a element occurs in array 
#include<iostream>
using namespace std;

// Function to find and print duplicate counts
void countDuplicates(int a[], int b) {
    // Array to track if we already counted an element
    bool visited[b];
    for(int i = 0; i < b; i++) {
        visited[i] = false; 
    }

    bool foundDuplicate = false;

    for(int i = 0; i < b; i++) {
        // Skip this element if it was already counted
        if (visited[i] == true) {
            continue;
        }

        int count = 1; // Start counting the current element
        
        // Look ahead in the array for matches
        for(int j = i + 1; j < b; j++) {
            if(a[i] == a[j]) {
                count += 1;
                visited[j] = true; // Mark as visited so we don't count it again
            }
        }

        // Print only if it appears double or more times
        if(count > 1) {
            cout << "Element " << a[i] << " occurs " << count << " times." << endl;
            foundDuplicate = true;
        }
    }

    if(!foundDuplicate) {
        cout << "No duplicate elements found." << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of array: ";
    cin >> size;

   
    int* arr = new int[size];

    for(int i = 0; i < size; i++) {
        cout << "Enter the element at index " << i << ": ";
        cin >> arr[i];
    }

 
    countDuplicates(arr, size);

  
    delete[] arr;

    return 0;
}

// 9. To check how many increasing pair in an array

#include <iostream>
using namespace std;
int count=0;

int main()
{
  int arr[7]={1,2,3,45,67,89,23};
  for(int i= 0;i<7;i++){
      for(int j=i+1;j<6;j++)
      if(arr[i]<arr[i-1])
      count+=1;
  }
  cout<<count;

}

// 10.  to check the first occurance of any element in the array and print their index

#include <iostream>
using namespace std;
int main(){
    int x=6;
    int arr[5]={1,6,3,45,6};
    for(int i =0;i<5;i++){
        if(arr[i]==x){
        cout<<i<<endl;
        break;
            
        }
    }
} 

// 11. TO check first and last elemrnt occurance of any element of array 
#include <iostream>
using namespace std;

int main()
{
    int x=4;
    int first=0;
    int last =0;
    int arr[5]={1,2,4,5,4};
    for(int i =0;i<5;i++){
        if(arr[i]==x){
            if(first==0){
                first=i;
            }
        }
        last = i;
       
    } 
    cout<<first<<endl<<last;
  

    return 0;
}

// 11.take the input from user and print the sum of all the element of array 
#include<iostream>
using namespace std;
int main(){
int arr[6];
int sum=0;
    for(int i = 0;i<6;i++){
        cout<<"Enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<6;i++){
        sum+= arr[i];
    }
    cout<<"The Sum of all the element of array is "<< sum ;
} 

// 12. take the input and print the sum of index of all the even element 
#include<iostream>
using namespace std;
int main(){
int arr[6];
int sum=0;
    for(int i = 0;i<6;i++){
        cout<<"Enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
    for(int i=0;i<6;i++){
       if (arr[i]%2==0)
        sum+= arr[i];
    }
    cout<<"The Sum of all the  even element of array is "<< sum ;
}

// 13. take the element from the user and sort it 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[6];
int sum=0;
    for(int i = 0;i<6;i++){
        cout<<"Enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
    sort(arr,arr+6);
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}

//14. take an array from the user and reverse the array 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int size = 6;
int arr[size];
int sum=0;
    for(int i = 0;i<size;i++){
        cout<<"Enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i =0;i<size/2;i++){
     int x=arr[i];
     arr[i]=arr[size-1-i];
     arr[size-1-i]=x;
    }
      
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
} 

//15. take the input from the user and move the all zero element at the end 
#include <iostream>
using namespace std;

int main() {
    int size = 6;
    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the element at index " << i << endl;
        cin >> arr[i];
    }

    int nonZeroPos = 0; 
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[nonZeroPos] = arr[i];
            nonZeroPos++;
        }
    }

    while (nonZeroPos < size) {
        arr[nonZeroPos] = 0;
        nonZeroPos++;
    }
    cout << "Array after moving zeros: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
} 
//16. take the input from the user and reverse the array in a way that all zero element should be in the last 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int size = 6;
int arr[size];
int sum=0;
    for(int i = 0;i<size;i++){
        cout<<"Enter the element at index "<<i<<endl;
        cin>>arr[i];
    }
    sort(arr,arr+size);
        for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
    for(int i = 0;i<size/2;i++){
        int x=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=x;
    }
    for (int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

// 17. print the pascal triangle using 2D vector 
using namespace std;
int main (){
    int m=5;
    vector<vector<int>>v;
    for(int i=1;i<=m;i++){
        vector<int>a(i);
        v.push_back(a);
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i)
                v[i][j]=1;
            else
                v[i][j]=v[i-1][j]+v[i-1][j-1];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}

