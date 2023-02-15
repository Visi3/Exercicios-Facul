function cadProduto (){

    let no = document.getElementById("Nome").value;
    let qu = document.getElementById("quant").value;
    let vl = document.getElementById("valor").value;

    let tabela = document.getElementById("tabela").innerHTML;

    tabela += "<tr>"+ "<td>" +no+ "</td>"+ "<td>" +(qu*vl)+ "</td>" + "</tr";

    document.getElementById("tabela").innerHTML = tabela;

    document.getElementById("Nome").value = ""
    document.getElementById("quant").value = ""
    document.getElementById("valor").value = ""
}
