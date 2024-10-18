<h2><a href="https://www.geeksforgeeks.org/problems/transform-the-array4344/1">Transform the array</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> containing integers, zero is considered an invalid number, and the rest of the other numbers are valid. If the two nearest valid numbers are equal, then double the value of the first one and make the second number 0. At last, move all the valid numbers on the left.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [2, 4, 5, 0, 0, 5, 4, 8, 6, 0, 6, 8]
<strong>Output:</strong> [2, 4, 10, 4, 8, 12, 8, 0, 0, 0, 0, 0]
<strong>Explanation</strong>: After performing above given operation we get array as [2, 4, 10, 0, 0, 0, 4, 8, 12, 0, 0, 8], then shifting all zero's to the right, we get resultant array as - [2, 4, 10, 4, 8, 12, 8, 0, 0, 0, 0, 0] </span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [0, 0]
<strong>Output:</strong> [0, 0]
<strong>Explanation:</strong> All elements in the array are invalid .</span></pre>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(n)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size()≤ 10<sup>6<br></sup>1 ≤ arr[i]≤ 10<sup>6</sup></span></p>
<p>&nbsp;</p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;