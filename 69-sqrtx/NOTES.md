IDEA:- we use binary search to solve this problem we traverse from 1 to x we calculate mid by low+(end-low)/2
case1:-
if mid X mid equal to x then we return mid
case2:-
if mid X mid>= x then we decrease end to mid-1 since mid's right elements will not be the square root of x
case3: -
else if mid X mid <x then we store the mid in ans and change low to mid+1
this is done to check if there is another number that satisfies the condition mid X mid <x if exact square is not present as the new mid will now be the ans which we will return at last
​
NOTE:-
mid X mid will not be done here to check instead use mid>,<,=x/mid as mid X mid could result in signed int overflow