// #include<iostream>
// using namespace std;

// int main()
// {                                                            
//     int n;                                             //*****
//     cin >>n;                                           //*****
                                                          //*****
//     int i=1;                                           //*****
//     while(i<=n){                                       //*****
//         int j=1;

//         while(j<=n){
//             cout<<'*';
//             j++;
//         }
//         i++;
//         cout<< '\n' ;
//     }
// }
//----------------------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// int main()
//     {                                                // 1 1 1 1 1
//       int n;                                         // 2 2 2 2 2
//       cin>>n;                                        // 3 3 3 3 3
//                                                      // 4 4 4 4 4
//       int i=1;                                       // 5 5 5 5 5
//       while(i<=n){
//          int j=1;
//          while(j<=n){
//             cout<<i<<" ";
//             j++;
//          }
//          cout<<endl;
//          i++;
//       }
//     }
//-------------------------------------------------------------------------------------------------
//  #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin>>n;                                         //1 2 3 4 5 
                                                       //1 2 3 4 5          //ulta print kerne ke liye j=n-j+1;
//     int i=1;                                        //1 2 3 4 5
                                                       //1 2 3 4 5
//     while(i<=n){                                    //1 2 3 4 5
//         int j=1;
//         while(j<=n){
//             cout<<j<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//  }
//----------------------------------------------------------------------------------------
//  #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin>>n;                                        
//     int i=1,count=1;                                                            
//         while(i<=n){                                   
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//  }

//  1 2 3 4
//  5 6 7 8
//  9 10 11 12
//  13 14 15 16 
//----------------------------------------------------------------------------------------
//  #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin>>n;                                        
//     int i=1;                                                          
//         while(i<=n){                                   
//         int j=1;
//         while(j<=i){
//             cout<<"*"<<" ";
            
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//  }
// *
// * *
// * * *
// * * * *
// * * * * *
//----------------------------------------------------------------------------------------

// #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin>>n;                                        
//     int i=1;                                                          
//         while(i<=n){                                   
//         int j=1;
//         while(j<=i){
//             cout<<i<<" ";
            
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//  }
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
//---------------------------------------------------------------

// #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin>>n;                                        
//     int i=1,t=1;                                                          
//         while(i<=n){                                   
//         int j=1;
//         while(j<=i){
//             cout<<t<<" ";
//             t++;
            
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//  }
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15
//------------------------------------------------------------------------------------------


// #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin>>n;                                        
//     int i=1;                                                          
//         while(i<=n){                                   
//         int j=1;
//         while(j<=i){
//             cout<<(i-j+1)<<" ";
            
            
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
//  }
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
//--------------------------------------------------------------------------------------

// #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin>>n;                                        
//     int i=1;                                                          
//         while(i<=n){                                   
//         int j=1,space=n-i;
//         while(space){
//             cout<<" ";
//             space--;
            
           
//         }
//         while(j<=i)
//         {
//             cout<<"*";
//             j++;
//         }


//         i++;
//         cout<<endl;
//     }
//  }
//          *
//         **
//        ***
//       ****
//      *****
//     ******
//    *******
//   ********
//  *********
// **********
//------------------------------------------------------------

// #include<iostream>
//  using namespace std;

//  int main()
//  {
//     int n;
//     cin>>n;                                        
//     int i=1;                                                          
//         while(i<=n){                                   
//         int j=1,space=n-i;
//         while(space){
//             cout<<" ";
//             space--;
            
           
//         }
//         while(j<=i)
//         {
//             cout<<"*"<<" ";
//             j++;
//         }


//         i++;
//         cout<<endl;
//     }
//  }

//          *
//         * *
//        * * *
//       * * * *
//      * * * * *
//     * * * * * *
//    * * * * * * *
//   * * * * * * * *
//  * * * * * * * * *
// * * * * * * * * * *

