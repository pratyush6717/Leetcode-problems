# Rat in a Maze Problem - I
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Consider a rat placed at <strong style="user-select: auto;">(0, 0)</strong> in a square matrix<strong style="user-select: auto;"> </strong>of order <strong style="user-select: auto;">N * N</strong>. It has to reach the destination at <strong style="user-select: auto;">(N - 1, N - 1)</strong>. Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are <strong style="user-select: auto;">'U'(up)</strong>, <strong style="user-select: auto;">'D'(down)</strong>, <strong style="user-select: auto;">'L' (left)</strong>, <strong style="user-select: auto;">'R' (right)</strong>. Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that&nbsp;rat&nbsp;can be travel&nbsp;through it.<br style="user-select: auto;">
<strong style="user-select: auto;">Note</strong>: In a path, no cell can be visited more than one time.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
N = 4
m[][] = {{1, 0, 0, 0},
         {1, 1, 0, 1}, 
         {1, 1, 0, 0},
         {0, 1, 1, 1}}
<strong style="user-select: auto;">Output:</strong>
DDRDRR DRDDRR</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation</strong>:
The rat can reach the destination at 
(3, 3) from (0, 0) by two paths - DRDDRR 
and DDRDRR, when printed in sorted order 
we get DDRDRR DRDDRR.</span></pre>

<div style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></div>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>:
N = 2
m[][] = {{1, 0},
         {1, 0}}
<strong style="user-select: auto;">Output:</strong>
-1</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation</strong>:
No path exists and destination cell is 
blocked.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:&nbsp;&nbsp;</strong><br style="user-select: auto;">
You don't need to read input or print anything. Complete the function <strong style="user-select: auto;">printPath()&nbsp;</strong>which takes <strong style="user-select: auto;">N </strong>and 2D&nbsp;array<strong style="user-select: auto;"> m[ ][ ]</strong><strong style="user-select: auto;"> </strong>as input parameters and returns the list of&nbsp;paths in lexicographically increasing order.</span>&nbsp;<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong>&nbsp;In case of no path, return an empty list. The driver will output <strong style="user-select: auto;">"-1"</strong> automatically.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O((3<sup style="user-select: auto;">N</sup><sup style="user-select: auto;">^2</sup>)).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(L * X), L = length of the path, X = number of paths.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
2 ≤ N ≤ 5<br style="user-select: auto;">
0 ≤ m[i][j] ≤ 1</span></p>
 <p style="user-select: auto;"></p>
            </div>