# Write your MySQL query statement below
SELECT MAX(num) AS num 
FROM (
    SELECT num
    From MyNumbers
    GROUP BY num
    HAVING COUNT(*)=1
)AS SingleNumbers;