# Write your MySQL query statement below
SELECT stock_name,
SUM(
    CASE
    WHEN operation = 'sell' THEN price
    WHEN operation = 'Buy' THEN -price
    END
)
capital_gain_loss FROM Stocks
GROUP by stock_name;
