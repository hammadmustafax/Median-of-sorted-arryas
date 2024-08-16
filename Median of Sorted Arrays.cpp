#include <iostream>
using namespace std;

int main() {
  int x, y, i, j, m, n, r, temp;
  cout << "Enter the size of first array: ";
  cin >> x;
  cout << "Enter the size of second array: ";
  cin >> y;

  int* a1 = new int[x]; 
  int* a2 = new int[y];

  for (i = 0; i < x; i++) {
    cout << "Enter the element " << i + 1 << " of first array: ";
    cin >> a1[i];
  }
  for (j = 0; j < y; j++) {
    cout << "Enter the element " << j + 1 << " of second array: ";
    cin >> a2[j];
  }

  for (int k = 0; k < y; k++) {
    a1[x + k] = a2[k]; 
  }

  cout << "\nThe merged array is: ";
  for (int l = 0; l < (x + y); l++) {
    cout << a1[l] << ",";
  }
  cout << endl;

  for (m = 0; m < (x + y) - 1; m++) {
    for (n = m + 1; n < (x + y); n++) {
      if (a1[m] > a1[n]) {
        temp = a1[n];
        a1[n] = a1[m];
        a1[m] = temp;
      }
    }
  }

  cout << "The sorted merged array is: ";
  for (r = 0; r < (x + y); r++) {
    cout << a1[r] << ",";
  }
  cout << endl;

 if ((x+y)%2==0)
 {
   cout<<"The MEDIAN is="<<(float)(a1[(x+y)/2]+a1[(x+y)/2-1])/2;
 }
  else
   cout<<"The median is="<<a1[(x+y)/2];
  return 0;
}