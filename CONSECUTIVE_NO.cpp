SELECT DISTINCT(a.Num)  AS ConsecutiveNums
FROM Logs a JOIN Logs b ON a.Id=b.Id+1 and a.NUM=b.Num
JOIN Logs c ON a.Id=c.Id+2 and a.NUM=c.Num
