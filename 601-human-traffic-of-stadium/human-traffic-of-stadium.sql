# Write your MySQL query statement below
SELECT DISTINCT s.*
FROM Stadium s
JOIN (
    SELECT s1.id
    FROM Stadium s1
    JOIN Stadium s2
        ON s1.id = s2.id - 1
    JOIN Stadium s3
        ON s2.id = s3.id - 1
    WHERE s1.people >= 100
      AND s2.people >= 100
      AND s3.people >= 100
) t
ON s.id BETWEEN t.id AND t.id + 2
ORDER BY s.visit_date;