function calcular(){

    let sal = document.getElementById("sal").value
    console.log(sal)
    
    // ----------------- Cálculo Salário Liquido --------------------
    if(sal <= 1212){
        sal = sal - (0.075 * sal)
        document.getElementById("divisor").innerHTML = "Alíquota Aplicada:  7,5% <p></p>Sálario Liquido:  " + sal
    } else if (sal >= 1212.01 && sal <= 2427.35){
        sal = sal - (0.090 * sal)
        document.getElementById("divisor").innerHTML = "Alíquota Aplicada:  9% <p></p>Sálario Liquido:  " + sal
    } else if (sal >= 2427.36 && sal <= 3641.03 ){
        sal = sal - (0.120 * sal)
        document.getElementById("divisor").innerHTML = "Alíquota Aplicada:  12% <p></p>Sálario Liquido:  " + sal
    } else if (sal >= 3641.04 && sal <= 7087.22){
        sal = sal - (0.140 * sal)
        document.getElementById("divisor").innerHTML = "Alíquota Aplicada:  14% <p></p>Sálario Liquido:  " + sal
    }
    // ----------------- Fim Cálculo Salário Liquido ----------------------
    

    // ------------------ Cálculo Tabela IRRF ---------------------------------
    if(sal >= 0 && sal <= 1903.98){
        document.getElementById("divisor").innerHTML += "<p></p> Tabela IRRF: Isento"
    } else if (sal >= 1903.99 && sal <= 2826.65 ) {
        document.getElementById("divisor").innerHTML += "<p></p> Tabela IRRF: 7,5% <p>Dedução:  " + (0.075 * sal)
    } else if (sal >= 2826.66 && sal <= 3751.05 ) {
        document.getElementById("divisor").innerHTML += "<p></p> Tabela IRRF: 15% <p>Dedução:  " + (0.15 * sal)
    } else if (sal >= 3751.06 && sal <= 4664.68 ) {
        document.getElementById("divisor").innerHTML += "<p></p> Tabela IRRF: 22,5% <p>Dedução:  " + (0.225 * sal)
    } else if (sal >= 4664.68) {
        document.getElementById("divisor").innerHTML += "<p></p> Tabela IRRF: 27,5% <p>Dedução:  " + (0.275 * sal)
    }
    // ------------------ Fim Cálculo Tabela IRRF ---------------------------------


    document.getElementById("sal").value = ""
}
