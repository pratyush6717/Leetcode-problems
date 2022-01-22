# Top View of Binary Tree
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given below is a binary tree. The task is to print the top view of binary tree. Top view of a binary tree is the set of nodes visible when the tree is viewed from the top. For the given below tree</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3<br style="user-select: auto;">
&nbsp; /&nbsp; \&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp; \<br style="user-select: auto;">
4&nbsp;&nbsp;&nbsp; 5&nbsp; 6&nbsp;&nbsp; 7</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Top view will be: 4 2 1 3 7<br style="user-select: auto;">
<strong style="user-select: auto;">Note: </strong>Return nodes from <strong style="user-select: auto;">leftmost </strong>node to <strong style="user-select: auto;">rightmost </strong>node.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;     1
  &nbsp;/&nbsp;&nbsp;&nbsp; \
  2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3
<strong style="user-select: auto;">Output: </strong>2 1 3<strong style="user-select: auto;">
</strong></span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;      10
 &nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \
  20&nbsp; &nbsp;&nbsp;&nbsp; &nbsp; 30
 /&nbsp;&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;/&nbsp; &nbsp;&nbsp;\
40&nbsp;&nbsp; 60  90&nbsp; &nbsp;&nbsp;100
<strong style="user-select: auto;">Output: </strong>40 20 10 30 100
</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:</span></strong><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Since this is a function problem. You don't have to take input. Just complete the function<strong style="user-select: auto;">&nbsp;topView() </strong>that takes <strong style="user-select: auto;">root node </strong>as parameter and returns a list of nodes visible from the top view from left to right.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤&nbsp;N ≤&nbsp;10<sup style="user-select: auto;">5</sup><br style="user-select: auto;">
1 ≤ Node Data ≤&nbsp;10<sup style="user-select: auto;">5</sup></span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><strong style="user-select: auto;">Note:</strong>The <strong style="user-select: auto;">Input/Ouput</strong> format and <strong style="user-select: auto;">Example </strong>given are used for system's internal purpose, and should be used by a user for <strong style="user-select: auto;">Expected Output </strong>only. As it is a function problem, hence a user should not read any input from stdin/console. The task is to complete the function specified, and not to write the full code.</p>
 <p style="user-select: auto;"></p>
            </div>