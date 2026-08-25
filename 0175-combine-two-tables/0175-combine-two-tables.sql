# Write your MySQL query statement below
    SELECT p.firstName , p.LastName , a.city , a.state 
    from person p 
    left join Address a ON p.personId = a.personId