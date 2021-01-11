#include<bits/stdc++.h>
using namespace std;
int main() {
  unordered_map<int, int> m;
    m[0]=1;
      vector<int> v;
        ifstream file;
	  file.open("input.txt");
	    int a;
	      while(file >> a){
	          v.push_back(a);
		    }
		      int i1=-1;
		        int i2=-1;
			  for(int i : v){
			      if(m[2020-i]){
			            i1=i;
				          i2=(2020-i);
					        cout << i1 << " * " << i2 << " = " << i1*i2 << endl;
						      return 0;
						          }
							      m[i]=1;
							        }
								  cout << -1 << endl;
								  }
