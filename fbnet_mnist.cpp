#include <iostream>

using namespace std;

typedef unsigned char uchar;

int main(){

  ifstream file("mnist_train", ios::binary | ios::ate);
  streamsize size = file.tellg();
  file.seekg(0, ios::beg);

  uchar *trainX = new uchar[size];
  if (! file.read(buffer.data(), size))
  {
    cout << "Error reading file"
    return 0;
  }
  
  void *trainX_d = cudaMalloc()  
  
  cudaMalloc(&trainX_d, size);
  
  return 0;
}
  