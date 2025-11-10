#include <iostream>
#include <vector>

/** 
 * There are 2 point: 
 * (px, py) 
 * (qx, qy)
 * Need to find reflection point using those point
 * **/

std::vector<int> find_point(int px, int py, int qx, int qy) {
  std::vector<int> r; // empty array
  int rx, ry; // initialize rx and ry 

  // reflection formula;
  rx = 2*qx - px;
  ry = 2*qy - py;

  r.insert(r.begin(), rx); // insert rx into r array at first index;
  r.push_back(ry); // insert ry into last array (1);

  return r;
}

int main() {
  return 0;
}
