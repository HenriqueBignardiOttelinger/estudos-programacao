CREATE TABLE vendas AS 
SELECT * FROM (VALUES 
    (1, 'Teclado', 'Eletronicos', 150.00),
    (2, 'Mouse', 'Eletronicos', 80.00),
    (3, 'Cadeira', 'Moveis', 1200.00),
    (4, 'Monitor', 'Eletronicos', 900.00)
) AS t(id, produto, categoria, preco);

SELECT 
    categoria,
    COUNT(*) as total_produtos,
    AVG(preco) as preco_medio
FROM vendas
GROUP BY categoria;