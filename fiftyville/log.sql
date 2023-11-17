-- Keep a log of any SQL queries you execute as you solve the mystery.

-- Select crime reports
SELECT description FROM crime_scene_reports
WHERE year = 2021 AND month = 7 AND day = 28;

-- Select interview transcripts
SELECT transcript FROM interviews
WHERE year = 2021 AND month = 7 AND day = 28 AND transcript LIKE "%bakery%";

-- Select oven safety records
SELECT bakery_security_logs.activity, bakery_security_logs.license_plate, people.name FROM people
JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate
WHERE bakery_security_logs.year = 2021
AND bakery_security_logs.month = 7
AND bakery_security_logs.day = 28
AND bakery_security_logs.hour = 10
AND bakery_security_logs.minute >= 15
AND bakery_security_logs.minute <= 25;

-- Select contacts' names and ATM transaction type
SELECT people.name, atm_transactions.transaction_type FROM people
JOIN bank_accounts ON bank_accounts.person_id = people.id
JOIN atm_transactions ON atm_transactions.account_number = bank_accounts.account_number
WHERE atm_transactions.year = 2021
AND atm_transactions.month = 7
AND atm_transactions.day = 28
AND atm_transactions.atm_location = "Leggett Street"
AND atm_transactions.transaction_type = "withdraw";

-- Update phone calls (caller_name and receiver_name fields)
UPDATE phone_calls
SET caller_name = people.name
FROM people
WHERE phone_calls.caller = people.phone_number;

UPDATE phone_calls
SET receiver_name = people.name
FROM people
WHERE phone_calls.receiver = people.phone_number;

-- Select phone calls
SELECT caller, caller_name, receiver, receiver_name FROM phone_calls
WHERE year = 2021
AND month = 7
AND day = 28
AND duration < 60;

-- Update origin_airport_ids of flights
UPDATE flights
SET origin_airport_id =(SELECT city
FROM airports
WHERE airports.id = 36);

-- Update destination_airport_ids of flights
UPDATE flights
SET destination_airport_id = (SELECT city FROM airports WHERE airports.id = 36);

-- Select the earliest flight on a specific date
SELECT id, hour, minute, origin_airport_id, (SELECT city FROM airports WHERE id = 4) AS destination_airport_id
FROM flights
WHERE id = 36;

-- Select passengers and other information for a specific flight
SELECT flights.destination_airport_id, people.name, people.phone_number, people.license_plate FROM people
JOIN passengers ON people.passport_number = passengers.passport_number
JOIN flights ON flights.id = passengers.flight_id
WHERE flights.id = 36
ORDER BY flights.hour ASC;

-- Choose complex query to solve the mystery
SELECT name FROM people
JOIN passengers ON people.passport_number = passengers.passport_number
JOIN flights ON flights.id = passengers.flight_id
WHERE (flights.year = 2021 AND flights.month = 7 AND flights.day = 29 AND flights.id = 36)
AND name IN
(SELECT phone_calls.caller_name FROM phone_calls
WHERE year = 2021
AND month = 7
AND day = 28
AND duration < 60)
AND name IN
(SELECT people.name FROM people
JOIN bank_accounts ON bank_accounts.person_id = people.id
JOIN atm_transactions ON atm_transactions.account_number = bank_accounts.account_number
WHERE atm_transactions.year = 2021
AND atm_transactions.month = 7
AND atm_transactions.day = 28
AND atm_transactions.atm_location = "Leggett Street"
AND atm_transactions.transaction_type = "withdraw")
AND name IN
(SELECT people.name FROM people
JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate
WHERE bakery_security_logs.year = 2021
AND bakery_security_logs.month = 7
AND bakery_security_logs.day = 28
AND bakery_security_logs.hour = 10
AND bakery_security_logs.minute >= 15
AND bakery_security_logs.minute <= 25);
