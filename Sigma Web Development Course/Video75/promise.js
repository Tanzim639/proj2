console.log('This is promise');

let prom1 = new Promise((resolve, reject) => {
    let a = Math.random();
    console.log(a);
    
    if (a < 0.5) {
        reject("No rndm num was supporting you");
    } else {
        setTimeout(() => {
            console.log('Yes I am done');
            resolve("Harry")
        }, 1000);
    }
}
)

prom1.then((a) => {
    console.log(a);
}
).catch((err) => {
  console.log(err);
}
)
