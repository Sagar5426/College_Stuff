// ✅ Import the built-in 'fs' module to work with the file system
const fs = require("fs");


// ✅ Synchronous Operation (Blocking):
// This method blocks the execution of further code until the file is completely read.
// It's simple but not recommended for large-scale applications, as it can freeze the program if the file is large or the operation takes time.
const result = fs.readFileSync("./test.txt", "utf-8");
console.log(result);


// ✅ Asynchronous Operation (Non-blocking):
// This method does not block the execution of the code.
// Instead, it delegates the file reading task to a thread from the thread pool.
// Once the operation is completed, it triggers the callback function.
// You must handle errors explicitly in async functions.
fs.readFile("./contacts.txt", "utf-8", (err, returnedData) => {
    if (err) {
        console.log("Error:", err);
    } else {
        console.log(returnedData);
    }
});


// ✅ Append content to a file (Synchronous):
// Adds content to the end of the file instead of replacing it.
// Useful when you want to log something or maintain a history.
// Note: Don't use writeFileSync here unless you want to overwrite the whole file.
fs.appendFileSync("./test.txt", `${Date.now()} Hey There\n`);


// ✅ Copy a file (Synchronous):
// Copies the content of one file to another.
fs.copyFileSync("./test.txt", "./copy.txt");


// ✅ Delete a file (Synchronous):
// Permanently deletes a file from the system.
fs.unlinkSync("./copy.txt");
