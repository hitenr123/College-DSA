#include <iostream>
// #include <string>
// #include <math.h>
#include <vector>
using namespace std;

// int main(){
//     int arr[5]={2,3,4,5,6};
//     int arr2[5];

//     for(int i=0;i<5;i++){
//         arr2[i]=pow(arr[i],3);
//     }
//     for(int j=0;j<5;j++){
//         cout<<arr2[j]<<" ";
//     }
// }

// int main(){
//     int arr[5]={2,5,6,8,7};
//     int arr2[5];
//     int temp=0;

//     for(int i=0;i<5;i++){
//         temp=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//         i=i+1;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main() {
//     int n, sum = 0;

//     cout << "Enter the number of elements: ";
//     cin >> n;

//     int arr[n];

//     cout << "Enter the array elements: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//         sum += arr[i];
//     }

//     float average = (float)sum / n;

//     cout << "Average = " << average << endl;

//     cout << "Elements greater than average are: ";
//     for (int i = 0; i < n; i++) {
//         if (arr[i] > average) {
//             cout << arr[i] << " ";
//         }
//     }

//     return 0;
// }

// int main(){
//     int arr[10]={1,2,3,2,5,5,2,3,4,6};
//     int arr2[10];
//     int count=0;

//     for(int i=0;i<10;i++){
//         for(int j=0;j<10;j++){

//         }
//     }
// }

// int main(){
//     int arr[4]={1,2,3,4};
//     int sum=0;
//     int prod=1;

//     for(int i=0;i<4;i++){
//         sum=sum+arr[i];
//         prod=prod*arr[i];
//     }
//     cout<<sum<<endl;
//     cout<<prod;
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int max=arr[0];
//     int min=arr[0];
//     int mini=0,maxi=0;
//     int temp=0;

//     for(int i=0;i<5;i++){
//         if(max<arr[i]){
//             maxi=i;
//             max=arr[i];
//         }
//         if(min>arr[i]){
//             mini=i;
//             min=arr[i];
//         }
//     }

//     arr[maxi]=min;
//     arr[mini]=max;

//     for(int i=0;i<5;i++){
//         cout<<arr[i];
//     }
// }

// int main(){
//     int arr[10]={1,1,2,2,3,3,4,5};
//     int arr2[10];

//     for(int i=0;i<8;i++){
//         int count=0;
//        for(int j=0;j<8;j++){
//         if(arr[i]==arr[j]){
//             count++;
//         }
//        }
//        if(count==1){
//         cout<<arr[i]<<endl;
//        }
//        else{
//         continue;
//        }
//     }
// }

// int main(){
//     for(int i=0;i<5;i++){
//         for(int k=5;k>i;k--){
//             cout<<" ";
//         }
//         for(int j=0;j<5;j++){
//             if(i==0||j==0||i==4||j==4){
//                 cout<<"*";
//             }
//             else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int count=1;
//     int num=1;
//     for(int i=0;i<6;i++){
//         for(int j=0;j<i;j++){
//             if(j==0||j==i-1){
//                 cout<<1<<" ";
//             }
//             else{

//             }
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int arr2[5]={2,3,4,5,6};

//     for(int i=0;i<5;i++){
//         for(int j=0;j<5;j++){
//             if(arr[i]==arr2[j]){
//                 cout<<arr[i];
//             }
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int rollno;
//     int flag=0;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cin>>rollno;

//     for(int j=0; j<n; j++){
//         if(rollno==arr[j]){
//             cout<<j;
//             flag=1;
//             break;
//         }
//         else{
//             flag=0;
//         }
//     }

//     if(flag==0){
//         cout<<-1;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int count=0;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[i+1]){
//             cout<<"NO";
//             break;
//         }
//         else{
//             count++;
//         }
//     }
//     if(count==n){
//         cout<<"YES";
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int max=0;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=n-1;i>=0;i--){
//         if(i==n-1){
//             cout<<arr[i]<<" ";
//         }
//         else{
//             for(int j=i+1;j<n;j++){
//                 if(arr[i]<arr[j]){
//                     break;
//                 }else{
//                     if(j==n-1){
//                         cout<<arr[i]<<" ";
//                     }
//                 }
//             }

//         }
//     }
// }

// int main(){
//     int arr[10]={1,2,3,4,5};
//     // int k;
//     // cin>>k;
//     // int size=sizeof(arr)/sizeof(arr[0]);
//     // cout<<size<<endl;
//     // int curr=0;

//     // for(int i=0;i<10;i++){
//     //     if(arr[i]==0){
//     //         break;
//     //     }
//     //     curr++;
//     // }
//     // cout<<curr;

//     // for(int i=0;i<10;i++){
//         //     if(arr[i]==0){
//             //         break;
//     //     }
//     //     cout<<arr[i];
//     // }
//     // cout<<endl;
//     // for(int i=0;i<10;i++){
//         //     if(arr[i]==0){
//             //         arr[i]=6;
//             //         break;
//             //     }
//             // }

//             // for(int i=0;i<10;i++){
//                 //     if(arr[i]==0){
//                     //         break;
//                     //     }
//                     //     cout<<arr[i];
//                     // }

// Rotating of array

// int main(){
//     int n;
//     cout<<"Size of Array:";
//     cin>>n;
//     cout<<endl;
//     int arr[n];
//     cout<<"Enter elements: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int n1;
//     cout<<"Enter no of rotation: ";
//     cin>>n1;
//     n1=n1%n;
//     int num[n1];
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     for(int j=0;j<n1;j++){
//         num[j]=arr[n-n1+j];
//     }
//     for(int j=0;j<n-n1;j++){
//         arr[n-j-1]=arr[n-n1-1-j];
//     }
//     for(int j=0;j<n1;j++){
//         arr[j]=num[j];
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// int main(){
//     int arr[10]={0,1,2,0,3,0,1,2};
//     int temp;
//     int count=0;
//     for(int i=0;i<8;i++){
//         if(arr[i]==0){
//             temp=arr[i];
//             arr[i]=arr[8-count-1];
//             arr[8-count-1]=temp;
//             count++;
//         }
//     }
//     for(int i=0;i<8;i++){
//         cout<<arr[i];
//     }
// }

// Pass By Reference

// void change(int *a){
//     *a=20;
// }
// int main(){
//     int a=10;
//     change(&a);

//     cout<<a;
//     return 0;
// }

// Binary search

/*mid=(low+high)/2  --> this will throw a out of range error because when we add twoo high value it will become more large.
 thats why we use mid=low+((high-low)/2) */

// int main(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int length=sizeof(arr)/sizeof(int);
//     int high=length-1;
//     int low=0;
//     int target;
//     cin>>target;

//     while(low<=high){
//         int mid=(low+(high-low))/2;
//         if(arr[mid]==target){
//             cout<<mid;
//             break;
//         }else{
//             if(arr[mid]>target){
//                 high=mid-1;
//             }else{
//                 low=mid+1;
//             }
//         }
//     }
// }

// Rotating of array

// int main(){
//     int n;
//     cout<<"Size of Array:";
//     cin>>n;
//     int a;
//     cout<<endl;
//     vector <int> vec;
//     cout<<"Enter elements: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>a;
//         vec.push_back(a);
//     }

//     for(int i:vec){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     int n1;
//     cout<<"Enter no of rotation: ";
//     cin>>n1;
//     n1=n1%n;
//     int num[n1];
//     cout<<endl;
//     for(int j=0;j<n1;j++){
//         num[j]=vec[n-n1+j];
//     }
//     for(int j=0;j<n-n1;j++){
//         vec[n-j-1]=vec[n-n1-1-j];
//     }
//     for(int j=0;j<n1;j++){
//         vec[j]=num[j];
//     }

//     for(int i: vec){
//         cout<<i<<" ";
//     }
// }

// Pivot Index

// int main(){
//     int N;
//     cin>>N;
//     int arr[N];
//     int ptr=0;
//     vector <int> ptr2;
//     int suml=0;
//     int sumr=0;

//     for(int i=0;i<N;i++){
//         cin>>arr[i];
//     }
//     // for(int i=0;i<N;i++){
//     //     cout<<arr[i]<<" ";
//     // }
//     // cout<<endl;
//     for(int i=0;i<N;i++){
//         for(int j=0;j<ptr;j++){
//             suml=suml+arr[j];
//         }
//         for(int j=ptr+1;j<N;j++){
//             sumr=sumr+arr[j];
//         }
//         // cout<<suml<<","<<sumr<<endl;
//         if(suml==sumr){
//             ptr2.push_back(ptr);
//         }
//         suml=0;
//         sumr=0;
//         ptr++;
//     }
//     // cout<<endl;
//     if(ptr2.size()!=0){
//         cout<<ptr2[0];
//     }
//     else{
//         cout<<-1;
//     }
//     // cout<<endl;
//     // cout<<ptr2.size();

// }

// int main(){
//     int N;
//     cin>>N;
//     int X;

//     int arr[N];
//     int low=0;
//     int high=N;

//     for(int i=0;i<N;i++){
//         cin>>arr[i];
//     }

//     cin>>X;

//     for(int i=0;i<N;i++){
//         if(X==arr[i]){
//             cout<<i;
//             break;
//         }
//         if(X>arr[i]&&X<arr[i+1]){
//             cout<<i+1;
//             break;
//         }
//         if(X<arr[0]){
//             cout<<0;
//             break;
//         }
//         if(X>arr[N-1]){
//             cout<<N;
//             break;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cout << "Size of Array:";
//     cin >> n;
//     cout << endl;
//     int arr[n];
//     int arr2[n],temp,min;
//     int count=0,countf=0;
//     cout << "Enter elements: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         arr2[i]=arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr2[j]<arr2[min]){
//                 min = j;
//             }
//         }
//         temp = arr2[i];
//         arr2[i] = arr2[min];
//         arr2[min] = temp;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr2[i]<<" ";
//     }
//     cout<<endl;
//     countf=0;
//     for (int n1 = 0; n1 <= n; n1++)
//     {
//         count=0;
//         int num[n1];
//         int arr3[n];
//         for(int i=0;i<n;i++){
//             arr3[i]=arr[i];
//         }
//         for (int j = 0; j < n1; j++)
//         {
//             num[j] = arr3[n - n1 + j];
//         }
//         for (int j = 0; j < n - n1; j++)
//         {
//             arr3[n - j - 1] = arr3[n - n1 - 1 - j];
//         }
//         for (int j = 0; j < n1; j++)
//         {
//             arr3[j] = num[j];
//         }
//         for (int i = 0; i < n; i++)
//         {
//             if(arr3[i]==arr2[i]){
//                 count++;
//             }
//         }
//         if(count==n){
//             cout<<"true";
//             break;
//         }
//         countf++;
//     }
//     if(countf==n+1){
//         cout<<"false";
//     }
// }


// int main(){
//     vector <int> nums={5,7,7,8,8,10};
//     int target=8;
//     int low=0;
//     int high=nums.size()-1;
//     vector <int> arr={-1,-1};

//     while(low<=high){
//         int mid=low+(high-low)/2;
//         if(nums[mid]==target){
//             arr.push_back(mid);
//             break;
//         }
//         else if(nums.at(mid)>target){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }
//     }
//     if(arr.size()>2){
//         for(int i=3;i<arr.size()-1)
//     }
// }



// int main(){
//     vector <vector<int>> matrix;
//     // matrix = {{1,1,1},{1,0,1},{1,1,1}};
//     // matrix = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};
//     // matrix={{1}};
//     matrix={{1,2,3,4},{5,0,7,8},{0,10,11,12},{13,14,15,0}};
//     int n=matrix.size();
//     int m=matrix[0].size();
//     int target=0;
//     vector <int> k,l;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==target){
//                 k.push_back(i);
//                 l.push_back(j);
//             }
//         }
//     }


//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             // if(i==k||j==l||j==k||i==l){
//             //     matrix[i][j]=0;
//             // }
//             for(int rows: k){
//                 if(i==rows){
//                     matrix[i][j]=0;
//                 }
//             }
//             for(int col: l){
//                 if(j==col){
//                     matrix[i][j]=0;
//                 }
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout<<matrix[i][j]<<" ";
//         }
//         cout<<endl;
//     }


// }



// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int suml=0;
//     int sumr=0;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         suml=0,sumr=0;
//         for(int j=0;j<i;j++){
//             suml=suml+arr[j];
//         }
//         for(int j=i+1;j<n;j++){
//             sumr=sumr+arr[j];
//         }
//         // cout<<suml<<","<<sumr<<endl;
//         int ans=suml-sumr;
//         if(ans<0){
//             ans=-ans;
//         }
//         cout<<ans<<" ";
//     }
// }


// int main(){
//     int n;
//     cin>>n;
//     int x;
//     int arr[n];
//     int c=0;

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cin>>x;

//     for(int i=0;i<n;i++){
//         if(arr[i]==x){
//             cout<<i<<" ";
//             break;
//         }
//         else{
//             c++;
//         }
//     }

//     for(int i=n-1;i>=0;i--){
//         if(arr[i]==x){
//             cout<<i;
//             break;
//         }
//     }

//     if(c==n){
//         cout<<"-1 -1";
//     }

// }


// Dynamic array
// Vector

// int main(){
    // vector <int> arr;
    // arr.push_back(1);
    // vector <int> arr(5,10);
    // vector <int> arr={1,2,3,4,5};
// }


// Leetcode 1572

// int main(){
//     vector <vector <int>> mat = {{5}};

//     int r=mat.size();
//     int sum=0;

//     for(int i=0;i<r;i++){
//         sum+=mat[i][i]+mat[i][r-i-1];
//     }
//     if(r%2!=0){
//         sum-=mat[(r-1)/2][(r-1)/2];
//     }
//     cout<<sum;
// }

// Leetcode 2114

// int main(){
//     vector <string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
//     int max=0,count=0;
//     int n=sentences.size();

//     for(int i=0;i<n;i++){
//         count=0;
//         for(int j=0;j<sentences[i].size();j++){
//             if(sentences[i][j]==' '){
//                 count++;
//             }
//         }
//         count=count+1;
//         if(count>max){
//             max=count;
//         }
//     }
//     cout<<max<<endl;
// }