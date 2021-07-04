SELECT Score , DENSE_RANK() OVER (ORDER BY Score DESC)  AS "Rank"
FROM Scores


//2



SELECT Score, (SELECT COUNT(DISTINCT(Score)) FROM  Scores s2 WHERE s2.Score>=S1.Score) AS "Rank" From Scores s1 ORDER BY Score DESC
