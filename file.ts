console.log("type script")
console.log("sushant")

let text:HTMLInputElement=<HTMLInputElement>document.getElementById("mytext");
let mydisplay:HTMLInputElement=<HTMLInputElement>document.getElementById("dis");
console.log(text.value);

function display(){

mydisplay.innerText=text.value;
}