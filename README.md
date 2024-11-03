Steps of the DIV-REC(a, b) Algorithm
Base Condition:

If 
𝑎
<
𝑏
a<b:
Set 
𝑞
=
0
q=0 and 
𝑟
=
𝑎
r=a.
This means that a is already the remainder, since a is smaller than b and therefore cannot be divided by b at least once.
Recursive Case:

If 
𝑎
≥
𝑏
a≥b:
Recursively call DIV-REC(a - b, b).
This recursive call returns a quotient q' and a remainder r.
After the recursive call, increment the quotient q by 1 (so 
𝑞
=
𝑞
′
+
1
q=q 
′
 +1).
This increment accounts for each time b can be subtracted from a.
Final Property:

At the end of the recursion, the algorithm returns 
𝑞
q and 
𝑟
r such that 
𝑎
=
𝑏
⋅
𝑞
+
𝑟
a=b⋅q+r and 
0
≤
𝑟
<
𝑏
0≤r<b.
This relationship is the property of integer division: a is divided by b with q as the quotient and r as the remainder.
