#include<iostream>
using namespace std;

// void printName()
// {
//     int n;
//     cout<<"Enter the number"<<endl;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Babbar"<<endl;
//     }
// }

// int max(int a , int b)
// {
//     if(a>b)
//     return a ;
//     else
//     return b;

// }
// int main(){

//    int a;
//    int b;
//    cin>>a>>b;
//    cout<<max(a,b);
    

//Pass by value = bhai copy create hogi, actual value pass nahi hogi
    // void printNumber(int a)
    // {   
    //     a++;
    //     a++;
        
    //     cout<<a<<endl;
    // }

    // int main()
    // {
    //   int a=5;
     
    //   printNumber(a);
    //   a++;
    //   a--;
    //   --a;
    //   cout<<a;
//     // }
 

 //SUM OF TWO NUMBERS
//  int add(int a,int b)
//  {
//    int result=a+b;
//    return result;
//  }
//  int main()
//  {
//    int a;
//    cin>>a;
//    int b;
//    cin>>b;
//    int sum=add( a ,  b);
//    cout<<sum;
//  }

//FIND MAXIMUM OF 3 NUMBERS
// int findMax(int a , int b, int c)
// {
//     if(a>b && a>c)
//     {
//         return a;
//     }
//     else if (b>a && b>c)
//     {
//         return b;
//     }
//     else 
//    { 
//     return c;
//    }
    
    
// }

// int main()
// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     int maximumNumber=findMax(a,b,c);
//     cout<<maximumNumber<<endl;
//     return 0;
// }

//Printing 1 to n
// void hihi(int n)
// {
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//        cout<<i<<endl;
//     }
// }
// int main()
// {
//     int n;
//    hihi(n);
// }
 
 //Students and grade problem
//  char getGrades(int marks)
//  {
//     cin>>marks;
//    if(marks>=90)
//    {
//     return 'A';
//    }
//    else if(marks>=80)
//    {
//     return 'B';
//    }
//     else if(marks>=70)
//    {
//     return 'C';
//    }
//     else if(marks>=60)
//    {
//     return 'D';
//    }
//    else{
//     return 'E';
//    }

   
//  }
//  int main()
//  {
//     int marks;
//    char finalGrade= getGrades(marks);
//    cout<<finalGrade;
//  }

//Sum of even numbers upto n


int getSum(int n)
{   
    int sum=0;
    for(int i=2;i<n;i=i+2)
    {
      sum=sum+i;  
    }
    return sum;
}
int main()
{ 
    int n;
    cin>>n;
    int ans = getSum(n);
    cout<<"Sum upto "<<n<<"is"<<ans<<endl;
    return 0;
}