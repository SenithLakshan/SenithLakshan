#include <iostream>
using namespace std;

//OOC_Lab2_EX1

/*
const int SIZE = 10;

int searchkey(int numbers[],int size , int key) {

  for (int i = 0; i < size; i++) {
    if (numbers[i] == key) {
      return i;
    }
  }
  return -1;

}

int findmax(int numbers[],int size) {

  int max=0;
  for (int i = 0; i < size ; i++) {

    if (numbers[i] > max) {
      max = numbers[i];
    }

  }
  return max;
}

int main() {

  int numbers[SIZE], key;

  for (int i = 0; i < SIZE; i++) {
    cout << "Enter your " << i + 1 << " number : ";
    cin >> numbers[i];
  }

  cout << "Enter search key : ";
  cin >> key;

  int index = searchkey(numbers,SIZE,key);
  findmax(numbers,SIZE);

  if (index != -1) {
    cout << "Index is : " << index << endl;

  }
  else {
    cout << "Value not found" << endl;
  }

  cout << "Maxium number is :" << findmax(numbers, SIZE);
}

*/

// OOC_Lab2_EX2

struct Rectangle {

  int width;
  int length;

};

int area(Rectangle x) {
  return x.width * x.length;
}


int main() {

  Rectangle h, y;

  cout << "Enter the width of house : ";
  cin >> h.width;
  cout << "Enter the length of house : ";
  cin >> h.length;
  int HouseaArea = area(h);

  cout << "Enter the width of yard : ";
  cin >> y.width;
  cout << "Enter the length of yard : ";
  cin >> y.length;
  int YardArea = area(y);

  int LawnArea = YardArea - HouseaArea;

  cout << "Free Space : " << LawnArea << "m2";

}