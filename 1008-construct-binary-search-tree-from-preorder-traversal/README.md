<h2><a href="https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/">1008. Construct Binary Search Tree from Preorder Traversal</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">Given an array of integers preorder, which represents the <strong style="user-select: auto;">preorder traversal</strong> of a BST (i.e., <strong style="user-select: auto;">binary search tree</strong>), construct the tree and return <em style="user-select: auto;">its root</em>.</p>

<p style="user-select: auto;">It is <strong style="user-select: auto;">guaranteed</strong> that there is always possible to find a binary search tree with the given requirements for the given test cases.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">binary search tree</strong> is a binary tree where for every node, any descendant of <code style="user-select: auto;">Node.left</code> has a value <strong style="user-select: auto;">strictly less than</strong> <code style="user-select: auto;">Node.val</code>, and any descendant of <code style="user-select: auto;">Node.right</code> has a value <strong style="user-select: auto;">strictly greater than</strong> <code style="user-select: auto;">Node.val</code>.</p>

<p style="user-select: auto;">A <strong style="user-select: auto;">preorder traversal</strong> of a binary tree displays the value of the node first, then traverses <code style="user-select: auto;">Node.left</code>, then traverses <code style="user-select: auto;">Node.right</code>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2019/03/06/1266.png" style="height: 386px; width: 590px; user-select: auto;">
<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> preorder = [8,5,1,7,10,12]
<strong style="user-select: auto;">Output:</strong> [8,5,10,1,7,null,12]
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> preorder = [1,3]
<strong style="user-select: auto;">Output:</strong> [1,null,3]
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= preorder.length &lt;= 100</code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= preorder[i] &lt;= 1000</code></li>
	<li style="user-select: auto;">All the values of <code style="user-select: auto;">preorder</code> are <strong style="user-select: auto;">unique</strong>.</li>
</ul>
</div>