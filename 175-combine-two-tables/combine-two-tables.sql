/* Write your PL/SQL query statement below */
-- select p.firstName,p.lastName,a.city,a.state from 
-- Person p,Address a
-- where p.personId=a.personId;

select Person.firstName,Person.lastName,Address.city,Address.state 
from Person 
left join Address on Person.personId=Address.personId;
