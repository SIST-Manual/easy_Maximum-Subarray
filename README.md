# easy_Maximum-Subarray

## 提交链接 / Submit 
https://leetcode-cn.com/problems/maximum-subarray/description/

(You need register/login first before submit.)

（在提交前你需要先注册或登录）

## 题目描述 / Description

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。

Bonus:  If you have realized the solution with [time complexity](https://en.wikipedia.org/wiki/Time_complexity) O(n), try something more tricky than standard program by divide-and-conquer method.

附加:如果你已经实现[时间复杂度](https://en.wikipedia.org/wiki/Time_complexity)为 O(n) 的解法，尝试使用比标准程序更为精妙的分治法求解。

## 输入 / Input

Input is an array, of which elements are integers. Please acquire input from standard input stream,  delimited by comma, bounded by square brackets.

输入是一个数组，元素为整数。请从标准输入流获取。数组输入以逗号分隔。两边以方括号为界定。

`Array` is also more formally defined in Backus-Naur Form, see [BNF Wiki](https://en.wikipedia.org/wiki/Backus%E2%80%93Naur_form), which is similar to [Advanced Problem 1: Python Matrix](https://github.com/SIST-Manual/Matrix/blob/master/Python/README.md).

`数组`有以巴科斯范式更为正式的定义，和作业[Advanced Problem 1: Python Matrix](https://github.com/SIST-Manual/Matrix/blob/master/Python/README.md) 较为类似。

```
Array ::="[" Row "]"
Row ::= element | element "," Row
element ::= int
```

e.g: [-2,1,-3,4,-1,2,1,-5,4]

`Note`: Input of local standard script is different from the one of online platform. Tailor your script before your submission to leetcode-cn according to your programming language(C++, python, pascal etc.).

`提示`：给的本地测试程序和leetcode-cn在线评测平台有不同的输入方式。请修改你的代码以适应在线的平台的规范。注意不同编程语言有不同规范，例如：C++, python, pascal等。


## 输出 / Output

An integer

一个整数

e.g: 6

Explanation: The answer is according to the previous section. The max subsequence is [4, -1, 2, 1] with the sum of 6.

解释: 这个即是前面样例输入的答案。因为连续子序列 [4,-1,2,1] 的和最大，所以为 6。

## 样例 / Example

### input1

[-1, -2]

### output1

-1

### input2

 [-2,1,-3,4,-1,2,1,-5,4]

### output2

6

## 答案 / Solutions

[Python](https://github.com/SIST-Manual/easy_Maximum-Subarray/blob/master/solve.py)
[C++](https://github.com/SIST-Manual/easy_Maximum-Subarray/blob/master/solve.cpp)