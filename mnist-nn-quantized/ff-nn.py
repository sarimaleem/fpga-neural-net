import os
import io

with open('bias.txt', 'r') as file:
   line = file.readline()
   bias_nums = line.strip().split(',')
   bias_nums = [int(num) for num in bias_nums]

with open('weights.txt', 'r') as file:
   line = file.readline()
   weight_nums = line.strip().split(',')
   weight_nums = [int(num) for num in weight_nums]


