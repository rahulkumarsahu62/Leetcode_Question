# Write your MySQL query statement below
SELECT request_at AS Day ,
ROUND(SUM(IF(status != "completed",1,0))/COUNT(status),2) AS 'Cancellation Rate'
FROM Trips
WHERE request_at Between "2013-10-01" AND "2013-10-03"
AND client_id NOT IN (SELECT users_id FROM users WHERE Banned = "YES")
AND driver_id NOT IN (SELECT users_id FROM users WHERE Banned = "YES")
GROUP BY request_at;