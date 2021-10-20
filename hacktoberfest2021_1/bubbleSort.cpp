#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,j,n, temp;
  cin>>n;
  vector<int>a(n);

  // taking the input from the console
  for(i=0;i<n;i++){
    cin>>a[i];
  }

  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      if(a[i]>a[j]){
        // swap the two elements
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  // printing the resulting array
  for(i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

  return 0;
}