# Write your MySQL query statement belowselect *
from cinema
where mod(id, 2) = 1 and description != 'boring'
order by rating DESC
;