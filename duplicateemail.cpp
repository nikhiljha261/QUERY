# Write your MySQL query statement below
SELECT Email FROM 
(select count(email) as co,email from person GROUP BY Email) as temp where co>1
  
  
//2
  
  
  
SELECT Email from Person Group by Email having count(email)>1
  
  
  
