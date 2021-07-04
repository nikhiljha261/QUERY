CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
SET N=N-1;
  RETURN (
      SELECT DISTINCT(Salary)
      FROM Employee 
      ORDER BY Salary Desc
      LIMIT 1 OFFSET N
      
  );
END
