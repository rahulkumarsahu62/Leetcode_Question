# Write your MySQL query statement below
(SELECT u.name AS results FROM Users u JOIN MovieRating m
ON u.user_id = m.user_id
GROUP BY u.user_id
ORDER BY COUNT(m.movie_id)DESC,u.name LIMIT 1)
UNION ALL
(SELECT mo.title AS result FROM Movies mo JOIN MovieRating m
ON mo.movie_id = m.movie_id
WHERE m.created_at >='2020-02-01' AND m.created_at < '2020-03-01'
GROUP BY m.movie_id
ORDER BY AVG(m.rating) DESC,mo.title LIMIT 1);
