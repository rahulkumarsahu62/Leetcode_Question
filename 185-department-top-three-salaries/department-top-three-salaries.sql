# Write your MySQL query statement below
SELECT Department ,Employee,Salary
FROM (
SELECT e.name AS Employee,
e.salary AS Salary,
d.name AS Department,
dense_rank() OVER (partition by departmentId order by salary desc) as rnk
FROM Employee e
INNER JOIN Department d
ON e.departmentID = d.id 
) AS Ranked
WHERE rnk <=3;