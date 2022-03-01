# Hamiltonian Path
## Medium 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">A <a href="https://en.wikipedia.org/wiki/Hamiltonian_path" target="_blank" style="user-select: auto;">Hamiltonian path</a>,&nbsp;is a path&nbsp;in an undirected or directed graph that visits each vertex exactly once. Given an undirected&nbsp;graph &nbsp;the task is to&nbsp;check if a Hamiltonian path&nbsp;is present in it or not.</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 4, M = 4
Edges[][]= { {1,2}, {2,3}, {3,4}, {2,4} }
<strong style="user-select: auto;">Output:</strong>
1 
<strong style="user-select: auto;">Explanation: </strong>
There is a hamiltonian path: 
1 -&gt; 2 -&gt; 3 -&gt; 4 </span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong>
N = 4, M = 3 
Edges[][] = { {1,2}, {2,3}, {2,4} } 
<strong style="user-select: auto;">Output: </strong>
0 
<strong style="user-select: auto;">Explanation:</strong> 
It can be proved that there is no 
hamiltonian path in the given graph</span></pre>

<p style="user-select: auto;">&nbsp;</p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your task:</strong><br style="user-select: auto;">
You don't need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">check</strong>() which takes the N(&nbsp;the number of vertices), M (Number of edges) and the list of&nbsp;Edges[][] (where Edges[i] denotes the undirected Edge between vertices Edge[i][0] and Edges[i][1] )&nbsp;as input parameter&nbsp;and returns true (boolean value) if the graph contains Hamiltonean path,otherwise returns false.&nbsp;</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(N!)</span><span style="font-size: 18px; user-select: auto;">.</span><br style="user-select: auto;">
<strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Expected Auxiliary Space:</span>&nbsp;</strong><span style="font-size: 18px; user-select: auto;">O(N+M).</span></p>

<p style="user-select: auto;"><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ N ≤ 10</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ M ≤ 15</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">Size of Edges[i] is&nbsp;2</span><br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;">1 ≤ Edges[i][0],Edges[i][1] ≤ N</span></p>
 <p style="user-select: auto;"></p>
            </div>