#include <iostream>
using namespace std;

float average(int n, int arr[]) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  float avg = ((float)sum) / n;

  return avg;
}

int main() {
  int n;

  // Create variables
  // Create array named 'num' of type float of size 100 elements.

  cout << "Enter the numbers of data:";
  cin >> n;
  cout << endl;

  while (n > 100 || n <= 0) {
    cout << "Error! number should in range of (1 to 100)." << endl;
    cout << "Enter the number again: ";
    cin >> n;
  }
  int num[n];

  cout << "Enter list of numbers separated by a space:" << endl;
  for (int i = 0; i < n; ++i) {
    cin >> num[i];
  }

  cout << "Average = " << average(n, num);

  return 0;
}