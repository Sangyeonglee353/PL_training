let age = 32;
let userName = 'Max';
let hobbies = ['Sports', 'Cooking', 'Reading'];
let job = { title: 'Developer', place: 'new York', salary: 50000 };

console.log(hobbies);
console.log(job.title);

let totalAdultYears;

function calculateAdultYears(userAge) {
    return userAge - 18;
}

totalAdultYears = calculateAdultYears(age);
console.log(totalAdultYears);

age = 45;
totalAdultYears = calculateAdultYears(age);
console.log(totalAdultYears);

let person = {
    name: 'Max', // Property
    greet() {
        console.log('Hello');
    }
};

person.greet();
