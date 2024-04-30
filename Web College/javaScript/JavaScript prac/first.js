let btn = document.createElement("button");
btn.innerText = "Click me!";
btn.style.backgroundColor = "red";
btn.style.color = "white";

let div = document.querySelector("body");
div.prepend(btn);


let para = document.querySelector("p");
para.classList.add("newClass");