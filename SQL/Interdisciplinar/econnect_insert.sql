use econnect;

-- Tabela Estado --
insert into estado (estado_nome, estado_sigla) values ('São Paulo', 'SP');
insert into estado (estado_nome, estado_sigla) values ('Paraná', 'PR');
insert into estado (estado_nome, estado_sigla) values ('Minas Gerais', 'MG');

-- Tabela Cidade --
insert into cidade (cidade_nome, estado_id) values ('São José do Rio Preto', 1);
insert into cidade (cidade_nome, estado_id) values ('São Paulo', 1);
insert into cidade (cidade_nome, estado_id) values ('Curitiba', 2);

-- Tabela CEP --
insert into cep (cep_numero, cidade_id) values ('15130000', 1);
insert into cep (cep_numero, cidade_id) values ('81170423', 3);
insert into cep (cep_numero, cidade_id) values ('81170210', 3);

-- Tabela Endereço --
insert into endereco (logradouro, numero_endereco, cep_id) values ('Rua 30 de Fevereiro', 3002, 2);
insert into endereco (logradouro, numero_endereco, cep_id) values ('Avenida Porto do Céu', 5842, 3);
insert into endereco (logradouro, numero_endereco, cep_id) values ('Rua dos Jasmins', 1211, 1);
insert into endereco (logradouro, numero_endereco, cep_id) values ('Rua dos Jasmins', 1222, 1);

-- Tabela Empresas --
insert into empresas (razao_social, nome_fantasia, cnpj, email, senha, endereco_id, tipo_empresa)
values ('Andrade Machado ME', 'Andrade Móveis', '28273540000168', 'comercial@andrademoveis.com.br', '123456', 2, 0);
insert into empresas (razao_social, nome_fantasia, cnpj, email, senha, endereco_id, tipo_empresa)
values ('Isabel e Lucca ME', 'Marvelous Market', '16155134000111', 'diretoria@marvelousmarket.com.br', 'umdoistres', 1, 1);
insert into empresas (razao_social, nome_fantasia, cnpj, email, senha, endereco_id, tipo_empresa)
values ('Thales e Gabriel Maquinários Ltda', 'Monstros Mecânicos T&G', '31540776000128', 'producao@maquinarios.com.br', 'senhapassword', 3, 0);
insert into empresas (razao_social, nome_fantasia, cnpj, email, senha, endereco_id, tipo_empresa)
values ('Isamara ME', 'Auditech', '20714794000162', 'gerencial@auditech.com.br', '1561g54d1f1g5s5d', 4, 0);

-- Tabela Telefone --
insert into telefone (numero_telefone, usuario_telefone) values ('17993456387', 1);
insert into telefone (numero_telefone, usuario_telefone) values ('1734525468', 1);
insert into telefone (numero_telefone, usuario_telefone) values ('23524682679', 3);

-- Tabela Avaliação Empresa --
insert into avaliacao_empresa (empresa_fornecedor, empresa_cliente, avaliacao_empresa_valor) values (1, 2, 7.5);
insert into avaliacao_empresa (empresa_fornecedor, empresa_cliente, avaliacao_empresa_valor) values (3, 2, 5.0);
insert into avaliacao_empresa (empresa_fornecedor, empresa_cliente, avaliacao_empresa_valor) values (4, 2, 10.0);

-- Tabela Categorias --
insert into categorias (nome_categoria) values ('Móveis');
insert into categorias (nome_categoria, categoria_pai) values ('Camas', 1);
insert into categorias (nome_categoria) values ('Torno');

-- Tabela Produtos --
insert into produtos (sku, nome_produto, disponibilidade, estoque, fabricante_id, categoria_id)
values ('mo15234', 'Cama Casal Andrade', 1, 100, 1, 2);
insert into produtos (sku, nome_produto, disponibilidade, estoque, fabricante_id, categoria_id)
values ('mo11235', 'Guarda Toupa Premium 8 Portas', 0, default, 1, 1);
insert into produtos (sku, nome_produto, disponibilidade, estoque, fabricante_id, categoria_id)
values ('to122', 'Torno CNC VX10.000', 1, 10, 3, 3);

-- Tabela Imagens --
insert into imagens (url_imagem, produto_id) values ('www.andrademoveis.com.br/imagens/camaandrade.jpg', 1);
insert into imagens (url_imagem, produto_id) values ('www.monstrosmecanicos.com/imagens/torno10000_A.jpg', 3);
insert into imagens (url_imagem, produto_id) values ('www.monstrosmecanicos.com/imagens/torno10000_B.jpg', 3);

-- Tabela Atributos Personalizados --
insert into atributos_personalizados (nome_atibuto, valor_atributo, produto_id) values ('Material', 'Madeira', 1);
insert into atributos_personalizados (nome_atibuto, valor_atributo, produto_id) values ('Material', 'Aço', 3);
insert into atributos_personalizados (nome_atibuto, valor_atributo, produto_id) values ('Voltagem', '220V', 3);

-- Tabela Avaliação Produto --
insert into avaliacao_produto (produto_id, empresa_id, avaliacao_produto_valor) values (1, 2, 7.0);
insert into avaliacao_produto (produto_id, empresa_id, avaliacao_produto_valor) values (2, 2, 4.0);
insert into avaliacao_produto (produto_id, empresa_id, avaliacao_produto_valor) values (3, 2, 8.5);

-- Tabela Pedido --
insert into pedido (data_pedido, preco, cliente) values ('2017-07-13', 700, 2);
insert into pedido (data_pedido, preco, cliente) values ('2018-04-02', 420, 2);
insert into pedido (data_pedido, preco, cliente) values ('2018-10-25', 8000, 2);

-- Tabela Itens Pedido --
insert into itens_pedido (produto_id, qtde_produto, pedido_id) values (2, 1, 1);
insert into itens_pedido (produto_id, qtde_produto, pedido_id) values (1, 2, 2);
insert into itens_pedido (produto_id, qtde_produto, pedido_id) values (3, 1, 3);
