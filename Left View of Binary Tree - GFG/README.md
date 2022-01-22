# Left View of Binary Tree
##  Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function <strong style="user-select: auto;">leftView()</strong>, which accepts root of the tree as argument.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Left view of following tree is 1 2 4 8.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 1<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /&nbsp;&nbsp;&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp; 2&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3<br style="user-select: auto;">
&nbsp;&nbsp; /&nbsp;&nbsp; &nbsp; \ &nbsp;&nbsp; /&nbsp;&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp; 4&nbsp;&nbsp;&nbsp;&nbsp; 5&nbsp;&nbsp; 6&nbsp;&nbsp;&nbsp; 7<br style="user-select: auto;">
&nbsp;&nbsp; \<br style="user-select: auto;">
&nbsp;&nbsp;&nbsp;&nbsp; 8&nbsp; &nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong>&nbsp;  1
&nbsp;/&nbsp; \
3&nbsp; &nbsp; 2
<strong style="user-select: auto;">Output: </strong>1 3<strong style="user-select: auto;">
</strong></span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:
</strong><img alt="" src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190221103723/leftview.jpg" style="height: 272px; width: 285px; user-select: auto;" class="img-responsive">
<strong style="user-select: auto;">Output: </strong>10 20 40
</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You just have to <strong style="user-select: auto;">complete </strong>the function <strong style="user-select: auto;">leftView() </strong>that prints the left view. The newline is automatically appended by the driver code.</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(Height of the Tree).</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
0 &lt;= Number of nodes &lt;= 100<br style="user-select: auto;">
1 &lt;= Data of a node &lt;= 1000</span></p>
 <p style="user-select: auto;"></p>
            </div>