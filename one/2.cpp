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
		      sort(v.begin(), v.end());
		        int i=0;
			  int j;
			    int k;
			      while(i<v.size()-2){
			          j=i+1;
				      k=v.size()-1;
				          while(k>j){
					        if(v[i]+v[j]+v[k]==2020){
						        cout << v[i] << " * " << v[j] << " * "  << v[k] << " = " << v[i]*v[j]*v[k] << endl;
							        return 0;
								      }else if(v[i]+v[j]+v[k]<2020){
								              j++;
									            }else{
										            k--;
											          }
												      }
												          i++;
													    }
													      cout << -1 << endl;
													      }
