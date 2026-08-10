# Write your MySQL query statement below
SELECT unique_id,name FROM Employees e left join EmployeeUNI eu 
ON e.id = eu.id;