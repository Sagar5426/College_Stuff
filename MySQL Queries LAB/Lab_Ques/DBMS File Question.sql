create database if not exists abc_company;

use abc_company;

--  > Q1. DDL(create) and DML(insert) commands
-- Schema
CREATE TABLE if not exists employees (
    EmployeeId INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    DOB DATE,
    Department VARCHAR(50),
    Salary INT,
    HireDate DATE
);

CREATE TABLE if not exists Departments (
	DepartmentId int primary key,
    DepartmentName varchar(50),
    ManagerId int
);

CREATE TABLE IF NOT EXISTS Projects (
	ProjectId INT PRIMARY KEY,
    ProjectName VARCHAR(100),
    StartDate DATE,
    EndDate DATE,
    Budget DECIMAL(15,2)   -- (total digits, digits after decimal)
);

CREATE TABLE IF NOT EXISTS Employee_Project (
	EmployeeID INT,
    ProjectID INT,
    HoursWorked INT
);

-- Insertion

INSERT INTO employees 
(EmployeeId, FirstName, LastName, DOB, Department, Salary, HireDate)
VALUES 
(1, 'John', 'Doe', '1985-02-15', 'IT', 60000, '2010-06-25'),
(2, 'Jane', 'Smith', '1990-08-05', 'HR', 55000, '2015-09-15'),
(3, 'Mike', 'Johnson', '1982-11-20', 'Sales', 65000, '2008-03-17'),
(4, 'Emily', 'Davis', '1979-03-22', 'IT', 70000, '2005-01-12'),
(5, 'Sarah', 'Brown', '1987-09-10', 'Finance', 75000, '2012-05-29');

INSERT INTO Departments
(DepartmentId, DepartmentName, ManagerId)
VALUES
(1, 'IT',4),
(2, 'HR',2),
(3, 'Sales',3),
(4, 'Finance',5);

INSERT INTO Projects
(ProjectId, ProjectName, StartDate, EndDate, Budget)
VALUES
(101, 'Website Redesign', '2023-01-10', '2023-06-30', 20000),
(102, 'HR System', '2022-09-15', '2023-03-31', 15000),
(103, 'Marketing Campaign', '2023-02-01', '2023-05-15', 18000);

INSERT INTO Employee_Project
(EmployeeID, ProjectID, HoursWorked)
VALUES
(1, 101, 150),
(2, 102, 120),
(3, 103, 200),
(4, 101, 130),
(5, 102, 110);

-- Print
SELECT * FROM employees;

SELECT * FROM departments;

SELECT * FROM Projects;
SELECT ProjectName, Budget FROM Projects; -- to print col seperately

SELECT * FROM Employee_Project;

show tables;

-- shows schema of table
describe projects; 

-- > Q2 DDL(Drop, Alter, Rename)

	-- 1. Alter the employees table to Add an Email Column
ALTER TABLE employees ADD COLUMN Email varchar(50); 

	-- 2. Modify the salary column in Employees Table
ALTER TABLE employees MODIFY Salary BIGINT;    

	-- 3. Rename the Department Column in Employees Table.
ALTER TABLE employees RENAME COLUMN Department TO Departments;

	-- 4. Drop Projects Table
DROP TABLE Projects;

	-- 5. Rename Employees to Staff
ALTER TABLE employees RENAME TO Staff;

-- > Q3 Delete Queries

	-- 1. Delete all employees who were hired before the year 2000.
DELETE FROM Staff WHERE HireDate < '2000-01-01';

	-- 2. Delete a project from the Projects table with a specific ProjectID 101
DELETE FROM Projects WHERE id = '101';

	-- 3. Remove all employees with a salary below 70000.
DELETE FROM Staff WHERE salary < 7000;

-- > Q4 Update Queries

	-- 1. Update the department of all employees in the Employees table from "Sales" to "Marketing".
UPDATE Staff
SET Departments = 'Marketing'
WHERE Departments = 'Sales';

	-- 2. Increase the salary of all employees in the IT department by 15%.
UPDATE Staff
SET Salary = Salary + (0.15 * Salary)
WHERE Departments = 'IT';

	-- 3. Update the EndDate of a project in the Projects table to today's date.
UPDATE Projects
SET EndDate = curdate();

	-- 4. Set the ManagerID to NULL for all departments where the manager is no longer an employee

UPDATE Departments
SET ManagerID = null
WHERE ManagerId NOT IN (SELECT EmployeeId FROM Staff);

    