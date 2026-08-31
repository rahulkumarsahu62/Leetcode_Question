# Write your MySQL query statement below
SELECT visited_on,
(SELECT sum(amount) FROM Customer
WHERE visited_on between date_sub(c1.visited_on,interval 6 day) and c1.visited_on)
AS amount,
ROUND((SELECT SUM(amount)/7 FROM Customer
WHERE visited_on between date_sub(c1.visited_on,interval 6 day) and c1.visited_on),2)
AS average_amount
FROM Customer c1
WHERE visited_on >= (SELECT date_add(min(visited_on),interval 6 day) FROM Customer)
GROUP BY visited_on; 