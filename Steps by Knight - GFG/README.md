# Steps by Knight
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a square chessboard, the initial position of Knight and position of a target. Find out the minimum steps a Knight will take to reach the target position.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Note:</strong><br style="user-select: auto;">
The initial and the target position co-ordinates of&nbsp;Knight have been given accoring to 1-base indexing.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N=6
knightPos[ ] = {4, 5}
targetPos[ ] = {1, 1}</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Output:</strong>
3</span>
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Explanation:</strong></span>
<img src="https://media.geeksforgeeks.org/wp-content/uploads/KnightChess.jpg" class="img-responsive" style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Knight takes 3 step to reach from 
(4, 5) to (1, 1):
(4, 5) -&gt; (5, 3) -&gt; (3, 2) -&gt; (1, 1).</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">minStepToReachTarget()</strong>&nbsp;which takes the inital position of Knight (KnightPos), the target position of Knight (TargetPos) and the size of the chess board (N) as an input parameters&nbsp;and returns the minimum number of steps required by the knight to reach from its current position to the given target position.</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong>&nbsp;O(N<sup style="user-select: auto;">2</sup>).<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong>&nbsp;O(N<sup style="user-select: auto;">2</sup>).</span></p>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= N &lt;= 1000<br style="user-select: auto;">
1 &lt;= Knight_pos(X, Y), Targer_pos(X, Y)&nbsp;&lt;= N</span></p>
 <p style="user-select: auto;"></p>
            </div>