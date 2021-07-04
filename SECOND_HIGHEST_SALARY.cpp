SELECT MAX(Salary) AS secondhighestsalary
FROM Employee 
WHERE Salary NOT IN (SELECT MAX(Salary) FROM Employee)
