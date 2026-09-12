# Write your MySQL query statement below
SELECT u.name NAME,SUM(t.amount) BALANCE FROM users u JOIN Transactions t 
ON u.account = t.account
GROUP BY u.account
HAVING SUM(t.amount) > 10000;