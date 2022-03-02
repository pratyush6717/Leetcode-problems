# Find whether path exist
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a grid of size n*n&nbsp;filled with 0, 1, 2, 3. Check whether there is a path possible from the source to destination.&nbsp;You can traverse up, down, right and left.<br style="user-select: auto;">
The description of cells is as follows:</span></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A value of cell&nbsp;<strong style="user-select: auto;">1</strong>&nbsp;means Source.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A value of cell&nbsp;<strong style="user-select: auto;">2</strong>&nbsp;means Destination.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A value of cell&nbsp;<strong style="user-select: auto;">3</strong>&nbsp;means Blank cell.</span></li>
	<li style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A value of cell <strong style="user-select: auto;">0&nbsp;</strong>means&nbsp;Wall.</span></li>
</ul>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note</strong>: There are only a single source and a single destination.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{3,0,3,0,0},{3,0,0,0,3}
,{3,3,3,3,3},{0,2,3,0,0},{3,0,0,1,3}}
<strong style="user-select: auto;">Output: </strong>0
<strong style="user-select: auto;">Explanation: </strong>The grid is-
3 0 3 0 0&nbsp;
3 0 0 0 3&nbsp;
3 3 3 3 3&nbsp;
0 2 3 0 0&nbsp;
3 0 0 1 3&nbsp;
There is no path to reach at (3,1) i,e at 
destination from (4,3) i,e source.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{1,3},{3,2}}
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Explanation: </strong>The grid is-
<span style="color: rgb(255, 0, 0); user-select: auto;">1 3
</span>3<span style="color: rgb(255, 0, 0); user-select: auto;"> 2
</span>There is a path from (0,0) i,e source to (1,1) 
i,e destination.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function <strong style="user-select: auto;">is_Possible()&nbsp;</strong>which takes the grid as input parameter and returns boolean value true if there is a path otherwise returns false.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(n<sup style="user-select: auto;">2</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(n<sup style="user-select: auto;">2</sup>)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n ≤ 500</span></p>
 <p style="user-select: auto;"></p>
            </div>