# Write your MySQL query statement below
SELECT person_name FROM
(
SELECT person_id,person_name,weight,turn,
SUM(weight) OVER(order by turn ) AS cf
FROM Queue
)q1
WHERE q1.cf <= 1000
ORDER BY q1.cf DESC
LIMIT 1;