/*
6. What are the common steps to connect Node.js with a database? Write the code for it.

✅ Common Steps:
1. Initialize a Node.js project
2. Install MongoDB driver or Mongoose
3. Import MongoDB/Mongoose in your code
4. Connect to the MongoDB database
5. Perform CRUD operations

*/

// index.js

const mongoose = require('mongoose');

// Replace with your MongoDB connection string
const mongoURI = 'mongodb://localhost:27017/mydatabase'; // or use your MongoDB Atlas URI

// Connect to MongoDB
mongoose.connect(mongoURI)
  .then(() => console.log('✅ Connected to MongoDB successfully'))
  .catch(err => console.error('❌ Error connecting to MongoDB:', err));


// Optional: Define a Schema and Model
const userSchema = new mongoose.Schema({
  name: String,
  email: String,
  age: Number
});

const User = mongoose.model('User', userSchema);

// Example: Insert a user
const newUser = new User({
  name: 'Sagar',
  email: 'sagar@example.com',
  age: 22
});

newUser.save()
  .then(() => console.log('✅ User saved'))
  .catch(err => console.log('❌ Error saving user:', err));
