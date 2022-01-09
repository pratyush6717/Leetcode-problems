# N meetings in one room
## Easy 
<div class="problem-statement dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
                <p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"></p><p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227">There is <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">one</strong> meeting room in a firm. There are <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">N</strong> meetings in the form of <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">(start[i], end[i])</strong> where <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">start[i]&nbsp;</strong>is start time of meeting <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">i </strong>and <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">end[i] </strong>is finish time of meeting <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">i.</strong><br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
What is the <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">maximum</strong> number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time? </span></p>

<p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Note:</strong>&nbsp;Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.</span></p>

<p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Example 1:</strong></span></p>

<pre class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Input:
</strong>N = 6
start[] = {1,3,0,5,8,5}
end[] =  {2,4,6,7,9,9}
<strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Output: </strong>
4<strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
Explanation:
</strong>Maximum four meetings can be held with
given start and end timings.</span>
<span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227">The meetings are - (1, 2),(3, 4), (5,7) and (8,9)</span>
</pre>

<p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Example 2:</strong></span></p>

<pre class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Input:
N</strong> = 3
<strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">start[]</strong> = {10, 12, 20}
<strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">end[]</strong> = {20, 25, 30}
<strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Output: </strong>
1<strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
Explanation:
</strong>Only one&nbsp;meetings can be held
with given start and end timings.</span></pre>

<p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Your Task</strong>&nbsp;:<br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
You don't need to read inputs or print anything. Complete the function <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">maxMeetings()</strong><em class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">&nbsp;</em>that takes two&nbsp;arrays <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">start[] </strong>and <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">end[] </strong>along with their size <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">N</strong> as input parameters and returns the <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">maximum</strong> number of meetings that can be held in the meeting room.</span></p>

<p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Expected Time Complexity </strong>: O(N*LogN)</span><br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Expected Auxilliary Space</strong> : O(N)</span></p>

<p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"><br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227"><strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">Constraints:</strong></span><br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227">1 ≤ N&nbsp;≤ 10<sup class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">5</sup></span><br class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;" class="dp1641718227_text" __decreased__="element1641718227">0 ≤ <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">star</strong>t<strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">[i]</strong> &lt; <strong class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">end[i]</strong>&nbsp;≤ 10<sup class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;">5</sup></span></p>
 <p class="dp1641718227_text" __decreased__="element1641718227" style="user-select: auto;"></p>
            </div>