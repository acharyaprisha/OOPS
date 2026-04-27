#include <iostream>
#include <fstream>
using namespace std;

int countt()
{  ifstream file("NOTES.TXT");
  char ch;
  int count = 0;

  if (!file){
    cout << "file cannot be opened" << endl;
    return -1;
  }

  while (file.get(ch)) {
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
      count++;
  }

  file.close();
  return count;
}

int main(){
  int result = countt();

  if (result != -1)
    cout << "number of alphabets in file: " << result << endl;

  return 0;
}