# Write your MySQL query statement below
delete p from Person as p, Person as q where p.Email = q.Email && p.Id > q.Id; 