# 📊 LeetCode Problem:  Edit Distance

## 🧩 Problem Statement

Given two strings `word1` and `word2`, return the **minimum** number of operations required to **convert** `word1` to `word2`.

> **Note :**
> - You have the following three operations permitted on a word:
> - Insert a character
> - Delete a character
> - Replace a character



## 🧠 Approach: Dynamic Programming

> **Base Cases**:
> - If one string is **empty**, the only option is to insert or delete all characters.
> - `dp[i][0] = i` -> **delete** all characters.
> - `dp[0][j] = j` -> **insert** all characters.

> **Transition**:
> - If characters match -> no operation needed.
> - `dp[i][j] = dp[i-1][j-1]`

- If they don’t match -> take **minimum** of three operations: Insert , Delete , Replace

- `dp[i][j] = 1 + min(insert, delete, replace)`



## ✅ Example Walkthrough

### Example 1

##### Input: word1 = "horse", word2 = "ros"
##### Output: 3

##### Explanation: 
<pre> 
- horse -> rorse (replace 'h' with 'r')
- rorse -> rose (remove 'r')
- rose -> ros (remove 'e')
  
</pre>

### Example 2

##### Input: word1 = "intention", word2 = "execution"
##### Output: 5

##### Explanation: 
<pre> 
- intention -> inention (remove 't')
- inention -> enention (replace 'i' with 'e')
- enention -> exention (replace 'n' with 'x')
- exention -> exection (replace 'n' with 'c')
- exection -> execution (insert 'u')
  
</pre>


## 🛠️ Constraints

- `0 <= word1.length, word2.length <= 500`
- `word1` and `word2` consist of **lowercase** English letters.
