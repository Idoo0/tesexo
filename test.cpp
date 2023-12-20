#include <iostream>
using namespace std;
int main() {
  //.dot1 { top: -150px; left: -550px; }
  cout << "Hello World!\n";
  int n = -550;
  int s = 53, t=s;
  for(int i=0; i<14; i++, s++){
    cout << ".dot" << s << "{ top: 350px; left:" << n << "px; }" << endl;
      n += 100;
  }
  cout << endl;
  for(int i=0; i<14; i++, t++){
    cout << "<div class=\"neonDot dot" << t << "\"></div>" << endl; 
  }
}