/* 
2. What are middleware functions in Express.js? Give an example of how 
you would use one for logging ?

Definition: Middleware functions are functions that have access to the request and 
response objects and the next middleware function. 
They're used for things like logging, authentication, etc.
*/

const express = require('express');
const app = express();

// ✅ Custom middleware to log requests
const logger = (req, res, next) => {
    console.log(`${req.method} ${req.url}`);
    next(); // Important! Passes to next middleware or route
};

// ✅ Use middleware for all routes
app.use(logger);

// ✅ Simple GET route
app.get('/', (req, res) => {
    res.send('Home Page');
});

app.listen(3001, () => {
    console.log('Server is running on port 3001');
});
