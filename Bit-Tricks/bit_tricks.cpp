#include <iostream>

using namespace std;

// N & (N-1) = 0 if power of two if not N = N-1
bool check_power2(int N){
  return (N && !(N & (N-1)));
}

int count_one_bit(int N){
  int count = 0;
  while(N){
     N = N & (N-1);
     count++;
  }
  return count;
}


void combination(int a[], int N){
  for(int i=0;i < (1 << N);i++){
     for(int j=0;j<N;j++){
	if(i & (1 << j)){
	    cout<<a[j]<<" ";
	}
     }
     cout<<endl;	
  }
}


int main(){

  int a[5];  
  
  for(int i=0;i<4;i++){
    a[i] = i+1;	
  }
	

  combination(a,4);
  
  cout<<count_one_bit(0)<<endl;
  
  cout<<check_power2(16)<<endl;

  
  return 0;
}

