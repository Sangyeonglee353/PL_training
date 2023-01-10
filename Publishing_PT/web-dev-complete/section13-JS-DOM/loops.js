// 1. for 반복문
for(let i = 0; i < 10; i++){
    console.log(i);
}

// 2. for..of 반복문
const users = ['Max', 'Anna', 'Joel'];
for(const user of users){
    console.log(user);
}

// 2.1 for.of 반복문(예전)
const someArray = ['Korea', 'China', 'Japen'];
for (let i = 0; i < someArray.length; i++) {
    console.log(someArray[i]);
}

// 3. for..in 반복문
const loggedInUser = {
    name: 'Max',
    age: 32,
    isAdmin: true
}

for(const propertyName in loggedInUser) {
    console.log(propertyName);
    // console.log(loggedInUser[propertyName]); // propertyName 동적 접근, loggedInUser.propertyName (x)
}

// 4. while 반복문
let isFinished = false;

while(!isFinished) {
    isFinished = confirm('Do you want to quit?');
}

console.log('Done!');