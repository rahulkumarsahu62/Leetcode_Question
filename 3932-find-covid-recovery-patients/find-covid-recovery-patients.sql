# Write your MySQL query statement below
SELECT p.patient_id,p.patient_name,p.age,
DATEDIFF(MIN(neg.test_date),MIN(pos.test_date)) AS recovery_time
FROM patients p 
JOIN covid_tests pos
ON p.patient_id = pos.patient_id
AND pos.result = 'Positive'
JOIN covid_tests neg
ON p.patient_id = neg.patient_id
AND neg.result = 'Negative'
AND neg.test_date > pos.test_date
GROUP BY p.patient_id,p.patient_name,p.age
ORDER BY recovery_time ASC,patient_name ASC;