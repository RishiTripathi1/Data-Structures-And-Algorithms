# Write your MySQL query statement below
SELECT DISTINCT p1.email AS Email
FROM person p1
JOIN person P2
ON p1.email = p2.email
WHERE p1.id != p2.id