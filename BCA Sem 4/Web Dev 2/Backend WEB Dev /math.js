function add(a, b) {
    return a+b;
}

function subtract(a, b) {
    return a-b;
}


// need to export function using this command else this func is 
// recognised as private func
module.exports = {add, subtract};