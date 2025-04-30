const http = require("http");
const fs = require("fs");

const myServer = http.createServer((req, res) => {
    const log = `${Date.now()}: ${req.url} New request recieved`;
    fs.appendFile("log.txt", log, (err, data) => {
        switch (req.url) {
            case '/': res.end("HomePage");
            break;
            case '/about': res.end("I am Sagar");
            break;    
            default: res.end("Error 404");
            break;
        }

    });
    
});

myServer.listen(8001, () => console.log("Server Started!"));

// Close server using btn control+Command