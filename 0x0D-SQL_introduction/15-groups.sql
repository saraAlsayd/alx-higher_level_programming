-- Select count and grouping
SELECT score, COUNT(score) AS number FROM second_table GROUP By score ORDER BY score DESC;
