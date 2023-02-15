function calcular(){
    document.getElementById("divisor").innerHTML = ""

    let peso = document.getElementById("peso").value
    let alt = document.getElementById("alt").value

    let imc = (peso / (alt * alt));
    console.log(imc)

    let div = document.getElementById("divisor").innerHTML

    div += "<label> IMC = "+ imc.toFixed(2) + "</label>";

    document.getElementById("divisor").innerHTML = div

    if (imc < 18.5){
        document.body.style.backgroundColor = "#ffffe0";
        document.getElementById("divisor").innerHTML += "  Magreza"
    } else if (imc >= 18.5 && imc <= 24.9){
        document.body.style.backgroundColor = "#ffff00"
        document.getElementById("divisor").innerHTML += "  Normal"
    } else if (imc >= 25 && imc <= 29.9){
        document.body.style.backgroundColor = "#ff6961"
        document.getElementById("divisor").innerHTML += "  Sobrepeso"
    } else if (imc >= 30 && imc <= 34.9){
        document.body.style.backgroundColor = "#ff0000"
        document.getElementById("divisor").innerHTML += "  Obesidade Grau I"
    } else if (imc >= 35 && imc <= 39.9){
        document.body.style.backgroundColor = "#800000"
        document.getElementById("divisor").innerHTML += "  Obesidade Grau II"
    } else if (imc >= 40){
        document.body.style.backgroundColor = "#964b00"
        document.getElementById("divisor").innerHTML += "  Obesidade Grau III"
    }
}