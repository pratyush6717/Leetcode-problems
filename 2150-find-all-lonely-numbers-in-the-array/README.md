<h2><a href="https://leetcode.com/problems/find-all-lonely-numbers-in-the-array/">2150. Find All Lonely Numbers in the Array</a></h2><h3>Medium</h3><hr><div style="user-select: auto;"><p style="user-select: auto;">You are given an integer array <code style="user-select: auto;">nums</code>. A number <code style="user-select: auto;">x</code> is <strong style="user-select: auto;">lonely</strong> when it appears only <strong style="user-select: auto;">once</strong>, and no <strong style="user-select: auto;">adjacent</strong> numbers (i.e. <code style="user-select: auto;">x + 1</code> and <code style="user-select: auto;">x - 1)</code> appear in the array.</p>

<p style="user-select: auto;">Return <em style="user-select: auto;"><strong style="user-select: auto;">all</strong> lonely numbers in </em><code style="user-select: auto;">nums</code>. You may return the answer in <strong style="user-select: auto;">any order</strong>.</p>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Example 1:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [10,6,5,8]
<strong style="user-select: auto;">Output:</strong> [10,8]
<strong style="user-select: auto;">Explanation:</strong> 
- 10 is a lonely number since it appears exactly once and 9 and 11 does not appear in nums.
- 8 is a lonely number since it appears exactly once and 7 and 9 does not appear in nums.
- 5 is not a lonely number since 6 appears in nums and vice versa.
Hence, the lonely numbers in nums are [10, 8].
Note that [8, 10] may also be returned.
</pre>

<p style="user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></p>

<pre style="user-select: auto;"><strong style="user-select: auto;">Input:</strong> nums = [1,3,5,3]
<strong style="user-select: auto;">Output:</strong> [1,5]
<strong style="user-select: auto;">Explanation:</strong> 
- 1 is a lonely number since it appears exactly once and 0 and 2 does not appear in nums.
- 5 is a lonely number since it appears exactly once and 4 and 6 does not appear in nums.
- 3 is not a lonely number since it appears twice.
Hence, the lonely numbers in nums are [1, 5].
Note that [5, 1] may also be returned.
</pre>

<p style="user-select: auto;">&nbsp;</p>
<p style="user-select: auto;"><strong style="user-select: auto;">Constraints:</strong></p>

<ul style="user-select: auto;">
	<li style="user-select: auto;"><code style="user-select: auto;">1 &lt;= nums.length &lt;= 10<sup style="user-select: auto;">5</sup></code></li>
	<li style="user-select: auto;"><code style="user-select: auto;">0 &lt;= nums[i] &lt;= 10<sup style="user-select: auto;">6</sup></code></li>
</ul>
</div>