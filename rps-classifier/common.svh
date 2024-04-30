`ifndef GLOBAL_PARAMS_VH
`define GLOBAL_PARAMS_VH

parameter LENGTH = 20;
parameter WIDTH = 30;

parameter SHIFT = LENGTH / 10;
parameter LEFT = LENGTH * 4 / 10 - 1;

parameter MIN_HUE = 18;
parameter MIN_SATURATION = 25;
parameter MIN_VALUE = 25;

parameter MAX_HUE = 43;
parameter MAX_SATURATION = 255;
parameter MAX_VALUE = 255;

`endif