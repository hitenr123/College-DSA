#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

// int main(){
//     // cout<<"array";
//     string s;
//     getline(cin,s);
//     cout<<s;
// }

// Take user input char array, print it ans its size.
// count vowel and consonants in a string.
// find first and last occurence of character in string.


// Q.1

// int main(){
//     int n;
//     cin>>n;
//     char arr[n];
//     for(int i=0;i<n-1;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     int len=strlen(arr);
//     cout<<len;
    
// }



// 709
// int main(){
//     string s="LOVELY";
//     int x=s.size();
//     for(int i=0;i<x;i++){
//         if(s[i]<=90 && s[i]>=65){
//             s[i]=s[i]+32;
//         }
//         cout<<s[i];
//     }
// }



// 344
// int main(){
//     vector <char> s={'h','e','l','l','o'};
//     char temp;
//     for(int i=0;i<(s.size())/2;i++){
//         temp=s[i];
//         s[i]=s[s.size()-i-1];
//         s[s.size()-i-1]=temp;
//     }
//     for(int i=0;i<s.size();i++){
//         cout<<s[i];
//     } 
// }


// 1108
// int main(){
//     string s="1.1.1.1";
//     string temp;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='.'){
//             temp+="[.]";
//         }
//         else{
//             temp+=s[i];
//         }
//     }
//     cout<<temp;
// }



// 1768
// int main(){
//     string w1 = "ab", w2 = "pqrs";
//     string w3;
//     int x1=w1.size();
//     int x2=w2.size();
//     int i=0;

//     while(i<x1||i<x2){
//         if(i<x1){
//             w3+=w1[i];
//         }
//         if(i<x2){
//             w3+=w2[i];
//         }
//         i++;
//     }
//     cout<<w3;
// }

// 1528

// int main(){
//     string s="codeleet";
//     vector <int> indices = {4,5,6,7,0,2,1,3};
//     int n=indices.size();
//     string s2=s;

//     for(int i=0;i<n;i++){
//         s2[indices[i]]=s[i];
//     }
//     cout<<s2;
// }


// 