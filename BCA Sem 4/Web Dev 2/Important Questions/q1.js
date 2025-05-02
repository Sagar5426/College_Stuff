/* 
1. Write a simple Express.js route that handles a POST request at /login 
and returns a JSON response.
*/

const express = require('express');
const app = express();

// Middleware to parse JSON bodies
app.use(express.json());

app.post('/login', (req, res) => {
    const { username, password } = req.body;
    res.end(`Welcome ${username}` );
});

app.listen(3000, () => {
    console.log("✅ Server is running on port 3000");
});

// Step 1: Run the server using "node q1"
// Step 2: paste this terminal to see output
// curl -X POST http://localhost:3000/login -H "Content-Type: application/json" -d '{"username": "Sagar", "password": "1234"}'
