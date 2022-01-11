# Implement Stack using Linked List
## Easy
<div class="problem-statement" style="user-select: auto;">
                <p style="user-select: auto;"></p><p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Let's give it a try!&nbsp;You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list.&nbsp;Your task is to use the class as shown in the comments in the code editor&nbsp;and complete&nbsp;the functions push() and pop() to implement a stack.&nbsp;</span></p>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 1</strong>:</span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
push(2)
push(3)
pop()
push(4) 
pop()
<strong style="user-select: auto;">Output</strong>: 3 4
<strong style="user-select: auto;">Explanation</strong>: 
push(2)    the stack will be {2}
push(3)    the stack will be {2 3}
pop()      poped element will be 3,
&nbsp;          the stack will be {2}
push(4)    the stack will be {2 4}
pop()      poped element will be 4</span></pre>

<p style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Example 2:</strong></span></p>

<pre style="user-select: auto;"><span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Input</strong>: 
pop()
push(4)
push(5)
pop()
<strong style="user-select: auto;">Output</strong>: -1 5</span></pre>

<p style="user-select: auto;"><strong style="user-select: auto;"><span style="font-size: 18px; user-select: auto;">Your Task:&nbsp;</span></strong><span style="font-size: 18px; user-select: auto;">You are required to complete two methods&nbsp;<strong style="user-select: auto;">push() and pop(). </strong>The push() method&nbsp;takes one argument, an integer <strong style="user-select: auto;">'x'</strong>&nbsp;to be pushed into the stack and&nbsp;<strong style="user-select: auto;">pop()</strong>&nbsp;which returns an integer present at the top and popped out from the stack. If the stack is empty then return <strong style="user-select: auto;">-1</strong> from the pop() method.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Expected Time Complexity:&nbsp;</strong>O(1) for both&nbsp;<strong style="user-select: auto;">push()&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">pop()</strong>.<br style="user-select: auto;">
<strong style="user-select: auto;">Expected Auxiliary Space:&nbsp;</strong>O(1) for both&nbsp;<strong style="user-select: auto;">push()&nbsp;</strong>and&nbsp;<strong style="user-select: auto;">pop()</strong>.</span><br style="user-select: auto;">
<br style="user-select: auto;">
<span style="font-size: 18px; user-select: auto;"><strong style="user-select: auto;">Constraints:</strong><br style="user-select: auto;">
1 &lt;= Q &lt;= 100<br style="user-select: auto;">
1 &lt;= x &lt;= 100</span></p>
 <p style="user-select: auto;"></p>
            </div>