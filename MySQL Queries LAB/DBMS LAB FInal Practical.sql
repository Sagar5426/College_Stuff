create database DBMS_Practical;
use DBMS_Practical;

CREATE TABLE Borrower (
    customer_id INT not null,
    loan_id INT,
    date DATE,
    PRIMARY KEY (customer_id, loan_id)
);

CREATE TABLE Depositor (
    customer_id INT,
    account VARCHAR(20),
    date DATE,
    PRIMARY KEY (customer_id, account)
);

Create Table account (
 account_id int primary key,
 balance decimal(15,2),
 branch_name varchar(50)
);

CREATE TABLE Loan (
    loan_no INT PRIMARY KEY,
    amount DECIMAL(15, 2),
    branch_name VARCHAR(50)
);

CREATE TABLE Branch (
    branch_name VARCHAR(50) PRIMARY KEY,
    city VARCHAR(50),
    assets DECIMAL(15, 2)
    CONSTRAINT chk_assets CHECK (assets >= 100000),
    CONSTRAINT chk_city CHECK (city IN ('Delhi', 'Noida', 'Gurgaon'))
);

CREATE TABLE Customer (
    customer_id INT PRIMARY KEY,
    name VARCHAR(100),
    dob DATE
);


-- q2
INSERT INTO Depositor (customer_id, account, date)
VALUES (1, 'A12345', '2024-11-26');

-- q3
ALTER TABLE Customer ADD COLUMN state VARCHAR(50);

-- q4
SELECT c.*
FROM Customer c
JOIN Depositor d ON c.customer_id = d.customer_id
WHERE c.customer_id NOT IN (SELECT customer_id FROM Borrower);

-- q5
SELECT *
FROM Loan
WHERE amount = (SELECT MAX(amount) FROM Loan);

-- q6
SELECT c.customer_id, c.name, COUNT(d.account) AS total_accounts
FROM Customer c
JOIN Depositor d ON c.customer_id = d.customer_id
GROUP BY c.customer_id, c.name;

-- q7
SELECT *
FROM Loan
ORDER BY amount DESC
LIMIT 5;

-- q8
SELECT *
FROM Customer
ORDER BY dob DESC;

-- q9
SELECT *
FROM Customer
WHERE YEAR(dob) > 1979;

-- q10
SELECT *
FROM Branch
WHERE branch_name LIKE '%B';


