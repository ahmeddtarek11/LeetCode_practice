# Write your MySQL query statement below
select e.name AS employee 
from Employee e 
JOIN employee m ON e.ManagerId = m.id 
WHERE m.salary < e.salary

