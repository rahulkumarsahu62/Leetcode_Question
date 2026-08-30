# Write your MySQL query statement below
SELECT if(id <(select max(id) from Seat), if(id % 2 = 0,id-1,id+1),
if(id%2=0,id-1,id))AS id,student
FROM Seat
ORDER BY id;