# Write your MySQL query statement below
SELECT customer_id,count(s.visit_id)count_no_trans FROM Visits s LEFT JOIN Transactions t
ON s.visit_id = t.visit_id
WHERE transaction_id is null
GROUP BY customer_id;