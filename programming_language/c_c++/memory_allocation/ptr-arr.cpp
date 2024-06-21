#include <iostream>

using namespace std;

int main(){

  /* int arr */
  int arr[4] = { 10, 18, 78, 88 };
  int * ptr;
  ptr = arr; // ptr=&arr[0];

  cout << ptr << " " << *ptr << endl; // &arr[0] 10
  ++ptr;
  cout << ptr << " " << *ptr << endl; // &arr[1] 18

  /* char arr */
  char ac_0[] = {'h', 'i'}; 
  char ac_1[] = {'j', 'k'};
  char s[] = {"Mr.Robot"};
  char *p[] = {ac_0, ac_1, s};

  cout << (p[0])[0] <<endl; // h
  cout << (p[0])[1] <<endl; // i
  cout << (p[1])[0] <<endl; // j
  cout << (p[1])[1] <<endl; // k

  cout << p[2][1] << endl; // r
  cout << p[2] << endl; // Mr.Robot

  return 0;
}