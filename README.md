# CatalogandoBebidas
Trabalho 1 da Disciplina de Introdução a Ciências da Computação II - SCC0201. Universidade de São Paulo - ICMC. <br/>
Professor Responsável: Fernando Pereira dos Santos <br/>
> O Trabalho consiste em abrir um base de dados obtido através de um arquivo .CSV, e armazenar os valores. Após isso, recebe a quantidade n de buscas que serão realizadas. Então, recebe n vezes o parâmetro buscado e o valor do parâmetro. Após isso, como a busca binária foi implementada, torna-se necessário ordenar o vetor pelo parâmetro dado. Após realizar a ordenação e busca, retorna-se o elemento desejado, além da quantidade de elementos com o mesmo valor de parâmetro.
Para isso, o algoritmo conta com a seguinte estrutura: <br/>
- Abertura do arquivo .csv segundo nome fornecido pelo usuário.
- Leitura e armazenagem dos dados obtidos do arquivo. 
- Desde que seja pedido uma busca:
  - Ordenação do vetor segundo parâmetro dado. (obs.: No caso de empate do valor do parâmetro fornecido, o elemento com menor ID é colocado a frente)
  - Elemento com o valor pedido (em caso de empate, o de menor ID), é impresso no CMD.
  - Contagem de quantos elementos com o mesmo valor de parâmetro existem no vetor 
- Desaloca qualquer memoria utilizada dinamicamente durante a execução do algortimo. 

