function isPalindrome(str) {
    str = str.toLowerCase();

    let left = 0;
    let right = str.length - 1;

    while (left < right) {
        if (str[left] !== str[right]) {
            return false;
        } else {
            left++;
            right--;
        }
    }
    return true;
}

const inputStr = "noon";
console.log("Is", inputStr, "a palindrome?", isPalindrome(inputStr));  

const num = parseInt(prompt("Which table number do you want to print?"));

function printTable(num){
    for(let i = 1; i <= 10; i++){
        console.log(`${num} x ${i} = ${num*i}`);
    }
}

printTable(num);

