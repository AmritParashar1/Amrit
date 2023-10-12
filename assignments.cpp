#include<iostream>
using namespace std;

//QUESTION 1
// int main(){
//     int a,b,c;
//      cin>>a;
//     cin>>b;
//     cin>>c;
//     int perimeter = a+b+c;
   
//     cout<<"The perimeter of triangle is "<<perimeter<<endl;
//     return 0;
// }

//QUESTION 2
// int main()
// {
//     int p,r,t;
//     cin>>p;
//     cin>>r;
//     cin>>t;
//     int si=(p*r*t)/100;
//     cout<<si<<endl;
// }

//QUESTION 3
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--)
//     {
//         cout<<i<<endl;
//     }
// }

//QUESTION 4
// int main()
// {
//     int n;
//     cin>>n;
//     int fcatorial=1;
//     for(int i=1;i<=n;i++)
//     {
//         fcatorial=fcatorial*i;
//     }
//     cout<<fcatorial;
// }

//QUESTION 6

//Solid Rectangle
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//            cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//Hollow Rectangle

// int main()
// {
//     for(int i=0;i<3;i++)
//     {
//        if(i==0 || i==2)
//        {
//         for(int j=0;j<5;j++)
//         {
//             cout<<"*";
//         }
//        }
//        else{
//         cout<<'*';
//         for(int i=0;i<3;i++)
//         {
//             cout<<" ";
//         }
//         cout<<"*";
//        }
//        cout<<endl;
//     }
//}

//Half Pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//Inverted Half pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//Hollow inverted half pyramid
// int main()
// {
// for(int row=0;row<6;row++)
// {
//     for(int col=0;col<6;col++)
//     {
//       if(row==0 || col==0 || col==6-row-1)
//       {
//         cout<<" * ";
//       }
//        else{
//         cout<<"   ";
//        }
       
//     }
//     cout<<endl;
// }
// }

//Question if a year is leap or not 

// int main() {
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;

//     if (year % 4 != 0) {
//         cout << year << " is not a leap year.";
//     } else if (year % 100 != 0) {
//         cout << year << " is a leap year.";
//     } else if (year % 400 != 0) {
//         cout << year << " is not a leap year.";
//     } else {
//         cout << year << " is a leap year.";
//     }

//     return 0;
// }

//Prime or not
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<n<<"is not prime";
//             break;
//         }
        
//         else{
//             cout<<n<<" is prime";
//             break;
//         }
//     }
// }

//Hollow inverted half pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i==0 || j==0 || j==n-i-1 )
//             {
//                    cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// } 


//Full pyramid

// int main()
// {
//     int n;
//     cin>>n;
//    for(int row=0;row<n;row++)
//    {
//     for(int col=0;col<n-row-1;col++)
//     {
//        cout<<" ";
//     }
//     for(int col=0;col<row+1;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//    }
// }

//Inverted full pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int row=0;row<n;row++)
//     {
//         for(int col=0;col<row;col++)
//         {
//             cout<<" ";
//         }
//         for(int col=0;col<n-row;col++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//Holow full pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//            cout<<" ";
//         }
//         for(int j=0;j<n;j++)
//         {
//             if(i==0 ||i==5)
//             {
//                 cout<<"*";
//             }
//             else{
//                 cout<<"*";

//             }
//         }
//     }
// }

//diamond
// int main()
// {
//     int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<i+1;j++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<i;j++)
//     {
//         cout<<" ";
//     }
//     for(int j=0;j<n-i;j++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// }


//Half numeric pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }

//Inverted Hallf numeric pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=0;j<n-i-1;j++)
//         {
//            cout<<count;
//            count++;
//         }
//         cout<<endl;
//     }
// }

//Hollow numeric half pyramid

// int main()
// {
//     int n;
//     cin>>n;
//   for(int i=0;i<n;i++)
//   {
//     // int count=1;
//     for(int j=0;j<i+1;j++)
//     {
//       if(j==0 || j==i || i==n-1 )
//       {
//         cout<<j+1;
        
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }


// int main()
// {
//     int n;
//     cin>>n;
//   for(int i=0;i<n;i++)
//   {
//      int count=1;
//     for(int j=0;j<i+1;j++)
//     {
//       if(j==0 || j==i || i==n-1 )
//       {
//         cout<<count;
//            count++;
        
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
// }


// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=0;j<i+1;j++)
//         {
//             if(j==0 || j==i || i==n-1 )
//             {
//                 cout<<count;
//                 // count++;
//             }
//             else
//             {
//                 cout<<" ";
//             }
//             count++;
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(j==0 || i==0 || j==n-i-1)
//             {
//                 cout<<count;
//                 // count++;
//             }
//             else{
//                 cout<<" ";
//             }
//             count++;
//         }
//         cout<<endl;
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<)
//     }
// }


//Diamond printing

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//       for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             cout<<" ";
//         }
//         for(int j=0;j<n-i;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            if(j==0 || j==2*i)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-2*i-1;j++)
        {
            if(j==0 || j==2*n-2*i-2)  cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
        
    }
 }

//Solid Half Diamond

// int main()
// {
// //     int n;
// //     cin>>n;
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<4-i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//Half numberic pyramid

// int main()
// {
//     int n;
//     cin>>n;
    
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=0;j<i+1;j++)
//         {
//             cout<<count;
//             count++;
//         }
//         cout<<endl;
 
//     }
// }

//Inverted numeric half pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=0;j<n-i;j++)
//         {
//             cout<<count;
//             count++;
//         }
//         cout<<endl;
//     }
// }

//Inverted Hollow Half Pyramid

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i==0 || j==0 || j==n-i-1)
//             {
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=0;j<n;j++)
//         {
//             if(i==0 || j==0 || j==n-i-1)
//             {
//                 cout<<count;
                
//             }
//             else cout<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
// }

//Hollow Half pyramid numeric
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         int count=1;
//         for(int j=0;j<n;j++)
//         {
            
//             if(j==0 || i==n-1 ||j==i)
//             {
//                 cout<<count;
                
//             }
//             else cout<<" ";
//              count++;
            
//         }
//         cout<<endl;
//     }
// }

//Hollow inverted half pyramid numeric

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i+1;j<=n;j++)
//         {
//             if(j==i+1 || j==n || i==0)
//             {
//                 cout<<j;
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }

//Full numeric Pyramid

// int main()
// {
    
// int n;
// cin>>n;
// int k=n;
// for(int i=0;i<n;i++)
// {
//     int c=1;
//     for(int j=0;j<k;j++)
//     {
//         if(j<n-i-1)
//         {
//             cout<<" ";
//         }
//         else if (j<n)
//         {
//             cout<<c;
//             c++;
//         }
//         else if (j==n)
//         {
//             c=c-2;
//             cout<<c;
//             c--;
//         }
//         else{
//             cout<<c;
//             c--;
//         }
//     }
//     k++;
//     cout<<endl;
// }
// }


//SOLID RECTANGLE
// int main()
// {
//     for(int i=0;i<4;i++)
//     {
//         for(int j=0;j<7;j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }


//HOLLOW RECTANGLE

// int main()
// {
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             if(j==0 || i==0 || i==2 || j==4)
//             {
//                 cout<<"* ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
// }


//HALF PYRAMID
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


//Hollow half

// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(i==0 || j==0 || j==n-i-1)
//             {
//                 cout<<"*";
//             }
//             else cout<<" ";
//         }
//         cout<<endl;
//     }
// }
