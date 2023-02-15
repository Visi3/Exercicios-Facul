const cpf = formulario.querySelector('#cpf')

cpf.addEventListener('keypress', () =>{
    let cpftamanho = cpf.value.length
    console.log(cpftamanho)

    if (cpftamanho === 3 || cpftamanho ===7) {

        cpf.value += '.'
    } else if (cpftamanho === 11 ){ 
        cpf.value += '-'
    }
})

const num = formulario.querySelector('#cel')

num.addEventListener('keypress', () => {
    let numtamanho = num.value.length

    if(numtamanho === 0) {
        num.value += '('
    } else if (numtamanho === 3) {
        num.value += ')'
    }
     if (numtamanho === 9) {
        num.value += '-'
    }

}) 

const tel = formulario.querySelector('#tel')

tel.addEventListener('keypress', () => {
    let teltamanho = tel.value.length

    if(teltamanho === 4) {
        tel.value += '-'
    } 
}) 