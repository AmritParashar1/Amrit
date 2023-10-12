#include<iostream>
using namespace std;

int main(){
    //SOLID SQUARE
// for(int row=0;row<4;row=row+1)
// {
//     for(int col=0;col<4;col=col+1)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//SOLID RECTANGLE
// for(int row=0;row<3;row=row+1)
//    {
//     for(int col=0;col<5;col=col+1)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
//    }

//HOLLOW RECTANGLE
// for(int row=0;row<3;row=row+1)
// {
//   if( row==0 || row==2){
//     for(int col=0;col<5;col=col+1){
//         cout<<"*";
//     }
//   }
//   else{
//     cout<<"*";
//     for(int row=0;row<3;row=row +1){
//         cout<<" ";
//     }
//     cout<<"*";
//   }
//   cout<<endl;
// }
    
    //   for(int row=0;row<6;row=row+1)
    //   {
    //     if(row==0 || row==5){
    //         for(int col=0;col<5;col=col+1){
    //             cout<<"*";
    //         }
    //     }
    //     else{
    //         cout<<"*";
    //         for(int col=0;col<3;col=col+1){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    //   }

    //HOLLOW RECTANGLE
// int rowCount,colCount;
// cin>>rowCount;
// cin>>colCount;
// for (int row=0;row<rowCount;row=row+1)
// {
//     if(row==0 || row==rowCount-1)
//     {
//         for(int col=0;col<colCount;col++)
//         {
//             cout<<"* ";
//         }
//         }
//         else{
//             cout<<"* ";
//             for(int i=0;i<colCount-2;i++)
//             {
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//HALF PYRAMID
// int n; //n=number of rows
// cin>>n;
// for (int row=0; row<n;row++)
// {
//     for(int col=0;col<row+1;col++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }
// } 

//INVERTED PYRAMID
// int n; //number of rows
// cin>>n;
// for(int row=0;row<n;row++)
// {
//     for(int col=0;col<n-row;col++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

//NUMERIC HALF PYRAMID
// int n;
// cin>>n;
// for(int row=0;row<n;row++)
// {
//     for(int col=0;col<row+1;col++)
//     {
//         cout<<col+1;
    
//     }
//     cout<<endl;
// }

//INVERTED NUMERIC HALF PYRAMID
// int n;
// cin>>n;
// for(int row=0;row<n;row++)
// {
//     for(int col=0;col<n-row;col++)
//     {
//         cout<<col+1;
//     }
//     cout<<endl;
// }


//SOLID SQUARE
// for(int row=0;row<5;row++)
// {
//     for(int col=0;col<5;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//HOLLOW SQUARE


// for(int row=0;row<4;row++)
// {
//    if(row==0 ||row==3)
//    {
//     for(int col=0;col<4;col++)
//     {
//         cout<<" * ";
//     }
//    }
//    else{
//     cout<<" * ";
//     for(int i=0;i<2;i++)
//     {
//         cout<<"   ";
//     }
//     cout<<" * ";
//    }
//    cout<<endl;
//  }

//HOLLOW INVERTED HALF PYRAMID
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

//FULL PYRAMID
// int n;
// cin>>n;
// for(int row=0;row<n;row++)                                              //0-0 1-1 2-2 3-3 4-4 5-5 
// {
//     for(int col=0;col<n-row-1;col++)                                     // 0-6 1-5 2-4 3-3 4-2 5-1
//     {
//         cout<<" ";
//     }
//     for(int col=0;col<row+1;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//INVERTED FULL PYRAMID
// int n;
// cin>>n;
// for(int row=0;row<n;row++)
// {
//     for(int col=0;col<row;col++)
//     {
//         cout<<" ";
//     }
//     for(int col=0;col<n-row;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//*****************NEXT TWO CODES WILL BE FOR REVISION PURPOSE 1.FULL PYRAMID 2. INVERTED PYRAMID

// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
//     }
//     for(int k=0;k<i+1;k++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//     for(int j=0;j<i;j++)
//     {
//       cout<<" ";
//     }
//     for(int k=0;k<n-i;k++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Diamond pattern
// int n;
// cin>>n;
// for(int i=0;i<n;i++ )
// {
//     for(int j=0;j<n-i-1;j++)
//     {
//         cout<<" ";
//     }
//     for(int k=0;k<i+1;k++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }
// for(int row=0;row<n;row++)
// {
//     for(int col=0;col<row;col++)
//     {
//        cout<<" ";
//     }
//     for(int col=0;col<n-row;col++)
//     {
//         cout<<"* ";
//     }
//     cout<<endl;
// }

//Check for diamond pattern on next day
// int n;
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


// hollow diamond
int n;
cin>>n;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i-1;j++)
    {
        cout<<" ";
    }
    for(int j=0;j<2*i+1;j++)
    {//if first or if last character 
      if (j==0 || j==2*i)
      {
        cout<<"*";
      }
    //   else if(j==2*i)
    //   {
    //     cout<<"*";
    //   }
      else
      {
        cout<<" ";
      }
    
      
    }
    cout<<endl;
}
for(int i=0;i<n;i++)
{///////for spaces
 for(int j=0;j<i;j++)
 {
  cout<<" ";
 }
 for(int j=0;j<2*n-2*i-1;j++)
 {
  if(j==0 || j==2*n-2*i-2)
  {
    cout<<"*";
  }
  else{
    cout<<" ";
  }
 }
 cout<<endl;
}


//FLIPPED SOLID DIAMOND
int n;
cin>>n;
for(int i=0;i<n;i++)
{//half pyramid
 for(int j=0;j<n-i;j++)
 {
  cout<<"*";
 }
 for(int j=0;j<2*i+1;j++)
 {
  cout<<" ";
 }
 for(int j=0;j<n-i;j++)
 {
  cout<<"*";
 }

 cout<<endl;
}
for(int i=0;i<n;i++)
{
  for(int j=0;j<i+1;j++)
  {
    cout<<"*";
  }
  for(int j=0;j<2*n-2*i-1;j++)
  {
    cout<<" ";
  }
  for(int j=0;j<i+1;j++)
  {
    cout<<"*";
  }
  cout<<endl;
}

//FANCY PATTERN(NUMERIC)

int n;
cin>>n;
for(int i=0;i<n;i++)
{
  for(int j=0;j<i+1;j++)
  {
    cout<<i+1;
      if(j!=i)
      {
         cout<<"*";
      }
  }
 
  cout<<endl;
}
for(int i=0;i<n;i++)
{
  for(int j=0;j<n-i;j++)
  {
    cout<<n-i;
    if(j!=n-i-1)
    {
      cout<<"*";
    }
  }
  cout<<endl;
}



//check(next day)

// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//   for(int j=0;j<n-i-1;j++)
//   {
//     cout<<" ";
//   }
//   for(int j=0;j<2*i+1;j++)
//   {
//     if(j==0 || j==2*i)
//     {
//       cout<<"*";
//     }
//     else{
//       cout<<" ";
//     }
//   }
//   cout<<endl;
// }
// for(int i=0;i<n;i++)
// {
//   for(int j=0;j<i;j++)
//   {
//     cout<<" ";
//   }
//   for(int j=0;j<2*n-2*i-1;j++)
//   {
//     if(j==0 || j==2*n-2*i-2)
//     {
//       cout<<"*";
//     }
//     else{
//       cout<<" ";
//     }
//   }
//   cout<<endl;
// }

//CHECK #2

// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//   for(int j=0;j<i+1;j++)
//   {
//     cout<<i+1;
//     if(j!=i)
//     {
//       cout<<"*";
//     }
    
//   }
//   cout<<endl;
// }
// for(int i=0;i<n;i++)
// {
//   for(int j=0;j<n-i-1;j++)
//   {
//     cout<<n-i-1;
//     if(j!=n-i-2)
//     {
//       cout<<"*";
//     }
//   }
//   cout<<endl;
// }

//Numeric pattern involving reverse counting printing
// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//   for(int j=0;j<i+1;j++)
//   {
//     int ans = j+1;
//     char ch=ans + 'A'-1;

//     cout<<ch;
//   }
//   for(int j=i;j>=1;j--)
//   {
//     int ans = j;
//     char ch=ans + 'A'-1;
//      cout<<ch;
//   }
//   cout<<endl;
// }

//Numeric Pyramid using count++

// int n;
// cin>>n;
// for(int i=0;i<n;i++)
// {
//   //row+1 elements print karne wale hai
//   int count=i+1;
//   for(int j=0;j<i+1;j++)
//   {
//     cout<<count<<" ";
//     count++;
//   }
//   cout<<endl;
// }

//Numeric Full Pyramid
// int n;
// cin>>n;
// for(int row=0;row<n;row++)
// { //spaces
//   for(int col=0;col<n-row-1;col++)
//   {
//     cout<<" ";
//   }
//       //Numbers
//     int go=row+1;
//   for(int col=0;col<row+1;col++)
//     {
//         cout<<go;
//         go=go+1;
        
//     }
  

//     //reverse counting
//     int start=2*row;
//     for(int col=0;col<row;col++)
//     {
//       cout<<start;          
//       start=start-1;
//     }
//      cout<<endl;

    
//   }


//Numeric Hollow pyramid
//  int n;
//  cin>>n;
//  for(int row=0;row<n;row++)
//  {
//    for(int col=0;col<n-row-1;col++)
//    {
//     cout<<" ";
//    }
//    int start=1;
//    for(int col=0;col<2*row+1;col++)
//    {
//     if(row==0 || row==n-1)
//     {
//       if(col%2==0)
//       {
//         cout<<start;
//         start++;
//       }
//       else
//       {
//         cout<<" ";
//       }
//     }
//     else{
//       if(col==0)
//       {
//         cout<<1;
//       }
//       else if (col==2*row)
//       {
//         cout<<row+1;
//       }
//       else{
//         cout<<" ";
//       }
//     }
//    }
//    cout<<endl;
//  }
}



















