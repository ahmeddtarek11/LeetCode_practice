# Write your MySQL query statement below
select e.name AS employee 
from Employee e JOIN employee m 
WHERE e.ManagerId = m.id AND m.salary < e.salary

