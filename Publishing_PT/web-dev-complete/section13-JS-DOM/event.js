//********************************
// click에 이벤트 추가
//********************************
// 1. 작동에 관여한 태그 지정
let paragraphElement = document.querySelector('p');

// 2. 발생할 함수 지정
function changeParagraphText(event) {
    paragraphElement.textContent = 'Clicked!';
    console.log('Paragrpah clicked!');
    console.log(event);
}

// 3. '클릭'과 관련한 이벤트 설정
paragraphElement.addEventListener('click', changeParagraphText);

//********************************
// input에 이벤트 추가
//********************************
// 1. 작동에 관여한 태그 지정
let inputElement = document.querySelector('input');

// 2. 발생할 함수 지정(입력값 가져오기)
function retriveUserInput(event) {
    // 방법 1
    // let enteredText = inputElement.value;
    // 방법 2
    let enteredText = event.target.value;
    // 방법 3(입력된 한 문자씩 출력)
    // let enteredText = event.data;
    console.log(enteredText);
    console.log(event);
}

// 3. '입력'과 관련한 이벤트 설정
inputElement.addEventListener('input', retriveUserInput);
