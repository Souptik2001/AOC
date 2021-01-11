#include<bits/stdc++.h>
using namespace std;
int main() {
  int ans=0;
    unordered_map<int, int> m;
      m[0]=1;
        vector<int> v;
	  ifstream file;
	    file.open("input.txt");
	      string a; 
	        while(getline(file, a)){
		    // Parsing each line
		        // three variables we need
			    vector<int> r;
			        char m;
				    string pass;
				        // four variables we need
					    string range;
					        string l;
						    stringstream ss;
						        ss << a;
							    // Got password directly ---------------------
							        ss >> range >> l >> pass;
								    ss.clear();
								        ss << range;
									    string s;
									        // Parsing the range ------------------------
										    while(getline(ss, s, '-')){
										          stringstream sss;
											        sss << s;
												      int temp;
												            sss >> temp;
													          r.push_back(temp);
														      }
														          ss.clear();
															      // Get the matching character ----------------
															          m=l[0];
																      // cout << r[0] << " - " << r[1] << " ... " << m << " - " << pass << endl;
																          int c=0;
																	      for(auto i : pass){
																	            if(i==m) c++;
																		        } 
																			    if(c>=r[0] && c<=r[1]){
																			          ans++;
																				      }
																				        }
																					  cout << ans << endl;
																					  }
