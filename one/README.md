# Outcomes 
## Part one
Two sum : The two sum problem can be easily solved by using a hash map.
## Part two
Three sum : This can be done by brute force in O(n^3) time. But to optimize it is to first store all the elemets of the input in a hash map and then just repeate just the process of two sum, n times! That is in this case the time complexity is O(n^2) and the space complexity is O(n). *But we can bring down the space to O(1) by sortinh the array and using the two pointer technique*.
