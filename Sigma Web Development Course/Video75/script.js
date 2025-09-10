console.log("Harry is a hacker")
console.log("Rohan is a hecker")

setTimeout(() => {
    console.log("I am inside settimeout")
}, 0);

setTimeout(() => {
    console.log("I am inside settimeout 2")
}, 0);

console.log("The End")

const callback = (arg) => {
    console.log(arg)
}


const loadScript = (src, callback) => {
    let sc = document.createElement("script")
    sc.scr = scr;
    sc.onload = callback("Harry");
    document.head.append(sc)
}
