// List of all mouse events 
// https://developer.mozilla.org/en-US/docs/Web/API/Element#mouse_events

let button = document.getElementById("btn")



button.addEventListener("click", ()=>{
    // alert("I was clicked. Yayy!")
    document.querySelector(".box").innerHTML = "<b>Yayy you were clicked<b> Enjoy your click!"
})

button.addEventListener("contextmenu", ()=>{
    alert("Dont hack us by right click please!")
})

document.addEventListener("keydown", (e)=>{
    console.log(`${e.key}`)
})
