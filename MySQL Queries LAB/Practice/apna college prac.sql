
CREATE DATABASE Student_DB;
USE Student_DB;


CREATE TABLE student (
    rollno INT PRIMARY KEY,
    name VARCHAR(50),
    marks INT NOT NULL,
    grade VARCHAR(1),
    city VARCHAR(20)
);

INSERT INTO student (rollno, name, marks, grade, city) VALUES
(101, 'anit', 78, 'C', 'pune'),
(102, 'bhumika', 93, 'A', 'Mumbai'),
(103, 'chetan', 85, 'B', 'Mumbai'),
(104, 'dhruv', 96, 'A', 'Delhi'),
(105, 'emanuel', 12, 'F', 'Delhi'), 
(106, 'farah', 82, 'B', 'Delhi');

SELECT DISTINCT CITY FROM student;

SELECT * FROM student WHERE marks > 90 OR city = "mumbai";
 
-- BETWEEN Operator (selects for a given range)
SELECT * FROM student WHERE marks BETWEEN 80 AND 90;

-- IN Operator (print/selects if matches any value in the list)
SELECT * FROM student WHERE city IN ("Delhi","Mumbai");

-- NOT IN Operator 
SELECT * FROM student WHERE city NOT IN ("Delhi","Mumbai");

-- LIMIT Clause returns first N  values
SELECT * FROM student LIMIT 3; -- returns first three values

SELECT * FROM student WHERE marks > 75 LIMIT 3;

-- ORDER BY Clause: To sort in ascending(ASC) or in decending(DESC)
SELECT * FROM student ORDER BY city ASC;

SELECT * FROM student ORDER BY marks DESC;
SELECT * FROM student ORDER BY marks DESC LIMIT 3;

-- Turn off safe mode
SET SQL_SAFE_UPDATES = 0;

-- Turn on safe mode
SET SQL_SAFE_UPDATES = 1;

-- UPDATE command 
UPDATE student 
SET grade = "O" WHERE grade = "A";

UPDATE student 
SET marks = 12 WHERE rollno = 105;

UPDATE student
SET grade = "C" WHERE marks BETWEEN 60 AND 80;

UPDATE student SET marks = marks + 1; -- Update all marks by 1

-- Delete Command
DELETE FROM student WHERE marks > 100; -- no such data exist -> cannot retrieve once deleted

-- 

select * from student;









