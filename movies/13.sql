-- List the names of all people who starred in a movie in which Kevin Bacon also starred
SELECT DISTINCT name FROM people
JOIN stars ON stars.person_id = people.id
JOIN movies ON movies.id = stars.movie_id
WHERE movies.id IN
(SELECT movies.id FROM movies
JOIN stars ON stars.movie_id = movies.id
)
