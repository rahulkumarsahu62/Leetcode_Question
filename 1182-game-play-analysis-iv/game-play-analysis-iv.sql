# Write your MySQL query statement below
SELECT ROUND(COUNT(player_id)/( SELECT COUNT(distinct player_id) FROM Activity),2) fraction
FROM Activity WHERE (player_id,date_sub(event_date,interval 1 day))in (
SELECT player_id,min(event_date) from Activity
GROUP BY player_id );