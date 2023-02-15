
function btn1(){
    
    let botao = document.getElementById("area").innerHTML
    botao += "<textarea id='msg' class='txt'> </textarea>"
    document.getElementById("area").innerHTML = botao
    
}
function btn2(){
    let mensagem = document.getElementById("msg").value
    let botao = document.getElementById("area").innerHTML

    botao += "<p id='ntl'>" + mensagem + "</p>"

    document.getElementById("area").innerHTML = botao
}
function btn3() {
    var fundo = document.body.style.backgroundColor

    if(fundo = "#fff"){
        document.body.style.backgroundColor = "#000"
        document.getElementById("ntl").style.color = "#fff"
    }
}