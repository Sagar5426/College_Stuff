/*
5. What is the purpose of bcrypt in authentication systems?
 How would you use it to store a password securely?

Ans: bcrypt is a hashing library that hashes passwords, 
making them unreadable in the database.
*/ 

const express = require('express');
const bcrypt = require('bcryptjs');
const app = express();
app.use(express.json());

// Simulating a user "database"
let users = [];

// ✅ Register route
app.post('/register', async (req, res) => {
    const { username, password } = req.body;

    // 1. Hash the password
    const hashedPassword = await bcrypt.hash(password, 10); // 10 = salt rounds

    // 2. Save user with hashed password
    users.push({ username, password: hashedPassword });

    res.json({ message: 'User registered successfully!' });
});

// ✅ Login route
app.post('/login', async (req, res) => {
    const { username, password } = req.body;

    // 1. Find user in "database"
    const user = users.find(u => u.username === username);
    if (!user) return res.status(404).json({ message: 'User not found' });

    // 2. Compare plain password with hashed password
    const isMatch = await bcrypt.compare(password, user.password);

    if (isMatch) {
        res.json({ message: `Welcome back, ${username}!` });
    } else {
        res.status(401).json({ message: 'Invalid password' });
    }
});

app.listen(3000, () => {
    console.log('Server running on http://localhost:3000');
});
