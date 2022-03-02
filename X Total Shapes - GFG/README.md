# X Total Shapes
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given&nbsp; a grid of <strong style="user-select: auto;">n</strong>*<strong style="user-select: auto;">m</strong>&nbsp;consisting<strong style="user-select: auto;">&nbsp;</strong>of <strong style="user-select: auto;">O<code style="user-select: auto;">'s</code></strong>&nbsp;and <strong style="user-select: auto;">X<code style="user-select: auto;">'s</code></strong>. The task is to find the number of '<strong style="user-select: auto;">X</strong>' total shapes.<br style="user-select: auto;">
<strong style="user-select: auto;">Note:&nbsp;</strong>'<strong style="user-select: auto;">X</strong>' shape consists of one or more adjacent <strong style="user-select: auto;">X</strong><code style="user-select: auto;">'s</code>&nbsp;(diagonals not included).</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{X,O,X},{O,X,O},{X,X,X}}
<strong style="user-select: auto;">Output: </strong>3
<strong style="user-select: auto;">Explanation: 
</strong>The grid is-
<span style="color: rgb(238, 130, 238); user-select: auto;"><strong style="user-select: auto;">X</strong></span> O <span style="color: rgb(255, 140, 0); user-select: auto;"><strong style="user-select: auto;">X</strong></span>
O <span style="color: rgb(0, 255, 0); user-select: auto;"><strong style="user-select: auto;">X</strong></span> O
<strong style="user-select: auto;"><span style="color: rgb(0, 255, 0); user-select: auto;">X</span> <span style="color: rgb(0, 255, 0); user-select: auto;">X</span> <span style="color: rgb(0, 255, 0); user-select: auto;">X</span>
</strong>So, X with same colour are adjacent to each 
other vertically for horizontally (diagonals 
not included). So, there are 3 different groups 
in the given grid.</span><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">
</strong></span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: </strong>grid = {{X,X},{X,X}}
<strong style="user-select: auto;">Output: </strong>1
<strong style="user-select: auto;">Expanation: 
</strong>The grid is- 
<span style="color: rgb(238, 130, 238); user-select: auto;"><strong style="user-select: auto;">X</strong></span> <span style="color: rgb(238, 130, 238); user-select: auto;"><strong style="user-select: auto;">X</strong></span>
<strong style="user-select: auto;"><span style="color: rgb(238, 130, 238); user-select: auto;">X</span> <span style="color: rgb(238, 130, 238); user-select: auto;">X</span></strong>
So, X with same colour are adjacent to each
other vertically for horizontally (diagonals
not included). So, there is only 1 group
in the given grid.</span>
</pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read or print anything. Your task is to complete the function <strong style="user-select: auto;">xShape()&nbsp;</strong>which takes grid as input parameter and returns the count of total X shapes.</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Compelxity:&nbsp;</strong>O(n*m)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Space Compelxity:&nbsp;</strong>O(n*m)</span><br style="user-select: auto;">
&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ n, m&nbsp;≤ 100</span></p>
 <p style="user-select: auto;"></p>
            </div>