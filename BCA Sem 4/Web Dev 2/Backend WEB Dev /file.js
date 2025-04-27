// library to manage file system
const fs = require("fs");

// Synchronous func
fs.writeFileSync("./test.txt", "Hello World")

const result = fs.readFileSync("./test.txt", "utf-8")
console.log(result)

//Asynchronous functions require error handling
const result2 = fs.readFile("./contacts.txt", "utf-8", (err, returnedData) => {
    if(err) {
        console.log("Error", err);
    } else {
        console.log(returnedData);
    }
})