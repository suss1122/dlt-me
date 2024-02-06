//initialize canvas
var canvas:HTMLCanvasElement=<HTMLCanvasElement>document.getElementById("mycanvas");
var context:CanvasRenderingContext2D=canvas.getContext("2d");



///draw a line on canvas
context.beginPath();
context.moveTo(0,0);
context.lineTo(50,50);
context.stroke();
context.lineWidth=10;


//draw rectangle
context.beginPath();
context.rect(25,100,60,60);
context.strokeStyle="yellow";
context.lineWidth=10;
context.fillStyle="red";
context.fill();
context.stroke;




//circle on canvas
context.beginPath();
context.arc(100,63,65,0,2*Math.PI,true);
context.strokeStyle="black"
context.lineWidth=3;
context.fillStyle="yellow"
context.fill();
context.stroke();


//insert text on canvas

context.font="20pt Calibri";
context.fillStyle="black";
context.fillText("sushant",200,400)






