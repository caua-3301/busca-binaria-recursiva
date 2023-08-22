# Busca binária recursivsa
<h2>Busca binária, o que é?</h2>
<p>A pesquisa ou <strong>busca binária</strong> é um algoritmo de busca em vetores que segue o paradigma de <strong> divisão e conquista </strong>. Ela parte do pressuposto
de que o <strong>vetor está ordenado</strong> e realiza sucessivas divisões do espaço de busca comparando o elemento buscado com o elemento no meio do vetor.
</p>

<h2>Operação realizada: </h2>
<p>Ela funciona dividindo repetidamente pela metade a porção da lista que deve conter o item, até reduzir as localizações possíveis a apenas uma.</p>
<p>Um dos modos mais comuns de se usar a busca binária é para encontrar um item em um array, como o exemplo abaixo: </p>

![binario](https://github.com/caua-3301/busca-binaria-recursiva/assets/134548536/b0417f59-aca7-429a-88c9-a254428cbce1)

<h2>Redução de tempo de execução</h2>

<p>Para entender a velocidade que uma busca binária tem em comparação a uma busca linear, segue o exemplo: 
Imagine o catálogo estelar Tycho-2 contém informações sobre as 2.539.913 estrelas 
mais brilhantes na nossa galáxia. Suponha que você queira buscar por uma estrela em particular no catálogo, com base no nome da estrela. Se o programa examinou cada estrela do 
catálogo de estrelas em ordem começando com o primeiro nome, utilizando um algoritmo chamado busca linear, no pior caso, o computador pode ter examinado todas as 2,539,913 estrelas
para encontrar a estrela que você está procurando. 
Se o catálogo estivesse organizado alfabeticamente pelos nomes das estrelas, a busca binária não teria que examinar mais do que 22 estrelas, mesmo no pior caso.</p>

<p>Entenda melhor com o exemplo abaixo:</p>

![exemplovisual](https://github.com/caua-3301/busca-binaria-recursiva/assets/134548536/7bf5fa0d-8b54-4cb0-a3b5-f9cb04859ba7)

<ul>
  <li>low = inicio, ou, valor mais baixo</li>
  <li>high = fim, ou, o valir mais alto</li>
  <li>mid = meio, o meio é dado por: (low + high)/2</li>
</ul>

<p>Com isso, não restam dúvidas que, quando bem implementada, a busca binária se torna muito eficiente em nossos programas :)</p>
<p>Linguagem - <br> C</p>

<p>Observação: Como um defensor do clean code, todo o projeto está comentado e devidamente indentado, aqui é Cauã falando e até a próxima :)</p>

<p>Créditos: <br>
https://pt.khanacademy.org <br>
https://carlacastanho.github.io <br>
</p>

