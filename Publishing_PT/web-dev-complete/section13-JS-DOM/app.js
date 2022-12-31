// console.log(window.document);
// console.log(document);
// console.dir(document);

// ############################################
/* window 객체의 메서드 사용법 */
// ############################################
// 방법1
// window.alert();

// 방법 2
// alert();

// ############################################
// 방법 1_anchor 태그의 href 접근하기
// console.log(document.body.children[1].children[0].href);

// 새로운 값 할당
// document.body.children[1].children[0].href = 'https://google.com';
// console.log(document.body.children[1].children[0].href);

// ############################################
/* DOM에서 요소 검색하기 */
// ############################################
// 방법 1_ID로 검색하기
let anchorElement = document.getElementById('external-id');
anchorElement = 'https://google.com';
console.log(anchorElement);

// 방법 2_ID or 클래스, 태그로 검색하기
// ID
anchorElement = document.querySelector('#external-id');
anchorElement = 'https://daum.net';
console.log(anchorElement);

// Class
document.querySelector('.external-class');
anchorElement = 'https://academind.com';
console.log(anchorElement);

// 태그 or 태그 속성으로 검색
document.querySelector('a');
// document.querySelector('a { color: red; }');
anchorElement = 'https://naver.com';
console.log(anchorElement);