# Write your MySQL query statement below
SELECT id,COUNT(temp.id) num FROM
(SELECT requester_id AS id from RequestAccepted 
UNION ALL
SELECT accepter_id AS id from RequestAccepted) temp
GROUP BY id
ORDER BY num DESC LIMIT 1;