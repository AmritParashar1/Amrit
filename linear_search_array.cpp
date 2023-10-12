#include<iostream>
#include<limits.h>
using namespace std;

// bool find(int arr[],int size , int key)
// {
//     //linear search
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==key) return true;

//     }

//     return false;
// }

// int main(){
    
// int arr[5]={1,3,5,7,9};
// int size=5;
// int key;
// cin>>key;

// if(find(arr,size,key))
// {
//     cout<<"Found"<<endl;
// }
// else cout<<"Not Found"<<endl;


//     return 0;
// }

int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int key;
    cin>>key;

    bool flag=0;
    //0-->Not found
    //1-->Found

    //linear search
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            break;
        }
        
     }

     if (flag)  cout<<"Present"<<endl;
     else cout<<"Absent"<<endl;
    
}

//*************************Counting 0's and 1's*****************//
// int main()
// {
//     int arr[]={0,1,1,1,1,0,0,0,0,1,1,1,0,1,0};
//     int size = 15;
//     int numZero=0;
//     int numOne=0;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]==0)
//         {
//             numZero++;
//         }
//         if(arr[i]==1)
//         {
//             numOne++;
//         }
//     }
//     cout<<"The number of zeroes in an array are "<<numZero<<endl;
//     cout<<"The number of ones in an array are "<<numOne;
// }


//**********Finding maximum and minimum number in an array*******************//

// int main()
// {
//     int arr[]={7,2,3,4,5,17};
//     int size = 6;
//     int min=INT_MAX;
//     for(int i=0;i<size;i++)
//     {
//         if(min>arr[i])
//         {
//             min=arr[i];
//         }
//     }
//     cout<<min;

    
// }


//*****************EXTREME PRINT IN ARRAY*****************//
// int main()
// {
//     int arr[]={10,20,30,40,50,60,70};
//     int size=7;

//     int start=0;
//     int end=size-1;

//     while(start<=end)
//     {
//         if(start==end) cout<<arr[start];
//         else 
//         {
            
//         cout<<arr[start]<<" "<<endl;
//         cout<<arr[end]<<" "<<endl;
//         } 
         
         
//         start++;
//         end--;
//     }
//    return 0;
// }



//***********************REVERSE AN ARRAY*********************//

int main()
{
    int arr[]={1,2,3,4,5};
    int size=5;

    int start=0;
    int end=size-1;
    
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
  
   


}