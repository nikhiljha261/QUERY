SELECT a.Name as Employee FROM 
Employee a JOIN Employee b ON a.ManagerId=b.ID and a.Salary>b.Salary
