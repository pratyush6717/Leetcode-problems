# Transitive closure of a Graph
## Easy 
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Given a directed graph, find out if a vertex j is reachable from another vertex i for all vertex pairs (i, j) in the given graph. Here reachable mean that there is a path from vertex i to j. The reach-ability matrix is called transitive closure of a graph. The directed graph is represented by adjacency list <strong style="user-select: auto;">graph</strong>&nbsp;where there are <strong style="user-select: auto;">N</strong> vertices.</span></p>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Example 1:</span></strong></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input:</strong> N = 4
graph = {{1, 1, 0, 1}, 
&nbsp;        {0, 1, 1, 0}, 
&nbsp;        {0, 0, 1, 1}, 
&nbsp;        {0, 0, 0, 1}}
<strong style="user-select: auto;">Output:</strong> {{1, 1, 1, 1}, 
&nbsp;        {0, 1, 1, 1}, 
&nbsp;        {0, 0, 1, 1}, 
&nbsp;        {0, 0, 0, 1}}
<strong style="user-select: auto;">Explaination: </strong>The output list shows the 
reachable indexes.</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Your Task:</strong><br style="user-select: auto;">
You do not need to read input or print anything. Your task is to complete the function <strong style="user-select: auto;">transitiveClosure()</strong> which takes N and graph as input parameters and returns the transitive closure of the graph in&nbsp;form of 2d array.</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:</strong> O(N<sup style="user-select: auto;">3</sup>)<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:</strong> O(N<sup style="user-select: auto;">2</sup>)</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 ≤ N ≤ 100&nbsp;&nbsp;</span></p>
 <p style="user-select: auto;"></p>
            </div>