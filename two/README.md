This day mainly focused on the input taking capabilities and parsing the raw input string to get proper input data.
So, I program in C++ so I will be explaining my input taking procedure in C++.
Actually we need three data.
[x] A pair containing two integers.
[x] A character.
[x] And a string.
So, all of the data is given in a single string in the format : `i-i c: string`.
- Now we can just set delimiter as ' ' and get three strings using getline from a string stream which will contain this input string.
- So, by this we get the password string directly as it is alone. Now to get the two integers we can repeat the first step on the first data we got from the first step but this time delimiter as '-'.
- Now lastly we need to get the  character by again the same process but delimiter as ':'.
And now as we got all three data then it is really a simple problem.
