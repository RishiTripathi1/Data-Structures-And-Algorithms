# Write your MySQL query statement below
SELECT c.name AS Customers
FROM customers c
LEFT JOIN Orders o
ON c.Id = o.customerId
WHERE o.customerId IS NULL