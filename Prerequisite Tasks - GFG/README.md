# Prerequisite Tasks
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">There are a total of N tasks, labeled from 0 to N-1. Some tasks may have prerequisites, for example to do task 0 you have to first complete task 1, which is expressed as a pair: [0, 1]<br style="user-select: auto;">
Given the total number of <strong style="user-select: auto;">tasks N</strong> and a list of <strong style="user-select: auto;">prerequisite pairs P</strong>, find if it is possible to finish all tasks.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input: 
</strong>N = 4, P = 3
prerequisites = {{1,0},{2,1},{3,2}}
<strong style="user-select: auto;">Output:</strong>
Yes
<strong style="user-select: auto;">Explanation</strong>:
To do task 1 you should have completed
task 0, and to do task 2 you should 
have finished task 1, and to do task 3 you 
should have finished task 2. So it is possible.</span>
</pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 2, P = 2
prerequisites = {{1,0},{0,1}}
<strong style="user-select: auto;">Output:</strong>
No
<strong style="user-select: auto;">Explanation</strong>:
To do task 1 you should have completed
task 0, and to do task 0 you should
have finished task 1. So it is impossible.
</span></pre>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong><br style="user-select: auto;">
You don’t need to read input or print anything. Your task is to complete the function&nbsp;<strong style="user-select: auto;">isPossible()</strong>&nbsp;which takes the integer N denoting the number of tasks, P denoting the number of&nbsp;prerequisite pairs and&nbsp;prerequisite as input parameters and returns true</span>&nbsp;<span style="font-size: 18px; user-select: auto;">if it is possible to finish all tasks otherwise returns false.</span><span style="font-size: 18px; user-select: auto;">&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N + P)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(N + P)</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 10<sup style="user-select: auto;">4</sup><br style="user-select: auto;">
1 ≤ P ≤ 10<sup style="user-select: auto;">5</sup></span></p>
 <p style="user-select: auto;"></p>
            </div>