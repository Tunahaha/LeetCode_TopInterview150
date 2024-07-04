### 45. Jump Game II

- Difficulty: Medium
- Language: C++
- Runtime: 8ms
- Faster than: 81.68% of C++ submissions

#### Problem Description

You are given a **0-indexed** array of integers `nums` of length `n`. You are initially positioned at `nums[0]`.

Each element `nums[i]` represents the maximum length of a forward jump from index `i`. In other words, if you are at `nums[i]`, you can jump to any `nums[i + j]` where:
* `0 <= j <= nums[i]` and
* `i + j < n`

Return *the minimum number of jumps to reach* `nums[n - 1]`. The test cases are generated such that you can reach `nums[n - 1]`.

####
每次都是更新當下能走到的最大距離 