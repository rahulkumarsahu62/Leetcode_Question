# Write your MySQL query statement below
SELECT sample_id,dna_sequence,species,if(dna_sequence like 'ATG%',1,0) As has_start,if(dna_sequence like '%TAA'or dna_sequence like '%TAG' or dna_sequence like '%TGA',1,0) AS has_stop,if(dna_sequence like '%ATAT%',1,0) AS has_atat,if(dna_sequence like '%GGG%' or dna_sequence like '%GGGG%',1,0)AS has_ggg FROM Samples
ORDER BY sample_id ASC;