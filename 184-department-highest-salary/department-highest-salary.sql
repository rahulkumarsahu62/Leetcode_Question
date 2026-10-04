# Write your MySQL query statement below
SELECT d.name Department,e.name Employee ,e.salary Salary
FROM Employee e JOIN Department d
ON e.departmentId = d.id
WHERE e.salary = (
    SELECT MAX(e2.salary)
    FROM Employee e2
    WHERE e2.departmentId = e.departmentId
);