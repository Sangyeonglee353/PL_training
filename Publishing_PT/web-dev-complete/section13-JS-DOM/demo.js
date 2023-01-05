const productNameInputElement = document.getElementById('product-name');
const remainingCharsElement = document.getElementById('remaining-chars');

// maxLength, camel case 사용한다는 것 잊지말 것!
const maxAllowedChars = productNameInputElement.maxLength;

function updateRemainingCharacters(event) {
    const enteredText = event.target.value;
    const enteredTextLength = enteredText.length;
    
    const remainingCharacters = maxAllowedChars - enteredTextLength;

    if(remainingCharacters < 10){
        remainingCharsElement.style.color = 'red';
    }
    remainingCharsElement.textContent = remainingCharacters;
}
productNameInputElement.addEventListener('input', updateRemainingCharacters);