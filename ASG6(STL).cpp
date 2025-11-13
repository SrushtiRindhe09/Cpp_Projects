#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
using namespace std;

int main()
{
  cout << "------Vector------" << endl;
  vector<int> v = {1,2,3,4,5};
  v.push_back(6);

  cout << "Vector Elements:" << endl;
  for (int i : v)
  cout << i << "" << endl;
  cout << endl;

  cout <<"======List======"<< endl;
  list<int> l = {10,20,30};
  l.push_back(40);
  l.push_front(5);

  cout << "list elements:" << endl;
  for (int i : l)
  cout << i << "" << endl;
  cout << endl;

  cout << "=======Map=======" << endl;
  map<int, string> m;
  m[1] = "One";
  m[2] = "Two";
  m[3] = "Three";

  cout << "Map Elements:" << endl;
  for (auto pair : m)
  cout << pair.first << "->" << pair.second << endl;
  
  cout << "=====set =====" << endl;
  set<int> s;
  s.insert(100);
  s.insert(200);
  s.insert(300);
  s.insert(400);
  s.insert(500);

  cout << "Set Elements:" << endl;
  for (int i : s)
  cout << i << "" << endl;
   cout << endl;

 return 0;
}
