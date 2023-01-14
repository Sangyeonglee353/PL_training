function openPlayerConfig(event) {
    editedPlayer = +event.target.dataset.playerid; // +'1' => 1
    playerConfigOverlayElement.style.display = 'block';
    backdropElement.style.display = 'block';
}

function closePlayerConfig() {
    playerConfigOverlayElement.style.display = 'none';
    backdropElement.style.display = 'none';
    formElement.firstElementChild.classList.remove('error'); // 양식 초기화
    errorsOutputElement.textContent = '';
    formElement.firstElementChild.lastElementChild.value = ''; // 입력 요소 제거하기
}

function savePlayerConfig(event) {
    event.preventDefault(); // 기본 명령 제거
    console.log(event);
    const formData = new FormData(event.target);
    const enteredPlayername = formData.get('playername').trim();
    if(!enteredPlayername){ // enteredPlayername === ''
        event.target.firstElementChild.classList.add('error');
        errorsOutputElement.textContent = 'Please enter a valid name!';
        return; // 함수 실행 멈추기
    }

    // 입력된 플레이어 이름 반영하기(동적)
    const updatedPlayerDataElement = document.getElementById('player-' + editedPlayer + '-data');
    updatedPlayerDataElement.children[1].textContent = enteredPlayername;

    // 입력된 플레이어 이름 배열에 저장하기_방법 1
    // if(editedPlayer === 1){
    //     players[0].name = enteredPlayername;
    // }else{
    //     players[1].name = enteredPlayername;
    // }

    // 입력된 플레이어 이름 배열에 저장하기_방법 2
    players[editedPlayer - 1].name = enteredPlayername;

    // 종료하기
    closePlayerConfig();
}