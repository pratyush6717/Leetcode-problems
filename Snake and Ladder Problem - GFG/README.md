# Snake and Ladder Problem
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a <strong style="user-select: auto;">5x6</strong>&nbsp;snakes and ladders board, find the minimum number of dice throws required to reach the destination or last cell (<strong style="user-select: auto;">30<sup style="user-select: auto;">th</sup></strong>&nbsp;cell) from the source (1st cell). </span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">You are given an integer&nbsp;<strong style="user-select: auto;">N </strong>denoting&nbsp;the&nbsp;total number of snakes and ladders&nbsp;and an array <strong style="user-select: auto;">arr[]</strong>&nbsp;of <strong style="user-select: auto;">2*N</strong> size where <strong style="user-select: auto;">2*i</strong> and <strong style="user-select: auto;">(2*i + 1)<sup style="user-select: auto;">th</sup></strong>&nbsp;values denote the starting and ending point respectively of <strong style="user-select: auto;">i<sup style="user-select: auto;">th&nbsp;</sup></strong>snake or ladder. The&nbsp;board looks like the following.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;<img alt="" src="https://contribute.geeksforgeeks.org/wp-content/uploads/snake-and-ladders.jpg" style="border-style: solid; border-width: 4px; height: 292px; width: 436px; user-select: auto;" class="img-responsive"></span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 8
arr[] = {3, 22, 5, 8, 11, 26, 20, 29, 
&nbsp;      17, 4, 19, 7, 27, 1, 21, 9}
<strong style="user-select: auto;">Output: </strong>3
<strong style="user-select: auto;">Explanation:</strong>
The given board is the board shown
in the figure. For the above board 
output will be 3. 
a) For 1st throw get a 2. 
b) For 2nd throw get a 6.
c) For 3rd throw get a 2.</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">minThrow()</strong> which takes <strong style="user-select: auto;">N</strong> and <strong style="user-select: auto;">arr</strong> as input parameters and returns the minimum number of throws required to reach the end of the game.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<br style="user-select: auto;">
1 ≤ arr[i] ≤ 30&nbsp;&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>