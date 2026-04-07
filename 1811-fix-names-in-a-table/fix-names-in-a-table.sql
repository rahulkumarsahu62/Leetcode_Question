# Write your MySQL query statement below
SELECT
user_id,
CONCAT(
    UPPER(left(name,1)),
    LOWER(SUBSTRING(name,2))
    )AS name
    FROM Users
    ORDER by user_id;
