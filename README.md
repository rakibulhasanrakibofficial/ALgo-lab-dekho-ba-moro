# Computer Algorithms Lab — Midterm Solutions

Separate C++17 solutions for all six problems in the supplied PDF.

## Set A

| File | Problem | Main technique | Time complexity |
|---|---|---|---|
| A1_Minimum_Battery_Consumption.cpp | Minimum drone battery consumption | Dynamic programming (1 or 2 step transition) | O(N) |
| A2_Maximum_Pages_One_Time_Book_Purchase.cpp | Buy each book at most once to maximize pages | 0/1 Knapsack | O(NX) |
| A3_Minimum_Steps_To_Zero.cpp | Subtract a non-zero digit to reach zero | Dynamic programming | O(N log10 N) |

## Set B

| File | Problem | Main technique | Time complexity |
|---|---|---|---|
| B1_Minimum_Frog_Jump_Cost.cpp | Minimum frog jump cost (jump 1 or 2 stones) | Dynamic programming | O(N) |
| B2_Maximum_Exam_Marks_Within_Hours.cpp | Maximize marks within H hours; each chapter once | 0/1 Knapsack | O(NH) |
| B3_Minimum_Operations_To_Zero.cpp | Subtract a non-zero digit or divide an even number by 2 | Dynamic programming | O(N log10 N) |

## Compile

Use a C++17 compiler. Example:

```bash
g++ -std=c++17 -O2 -o solution file.cpp
./solution
```

Each source file reads input from standard input and prints only the answer.
