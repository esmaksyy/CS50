-- List the titles and release years of all Harry Potter movies, in chronological order
SELECT year, tittle FROM movies
WHERE title LIKE 'Harry Potter%'
ORDER BY year ASC;
