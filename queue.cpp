 #include <iostream>
#include <queue>

using namespace std;

int main() {

  queue<string>color;

  color.push("red");
  color.push("black");
  color.push("white");
  color.push("blue");
  color.push("violet");
  
  cout << "Queue: ";

  while(!color.empty()) {

    cout << color.front() << ", ";
    color.pop();
  }

  cout << endl;
 
  return 0;
}
