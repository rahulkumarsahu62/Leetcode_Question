# Write your MySQL query statement below
SELECT MAX(num) AS num 
FROM (
SELECT num
FROM MYNumbers
group BY num having count(num) = 1
) AS single_number;