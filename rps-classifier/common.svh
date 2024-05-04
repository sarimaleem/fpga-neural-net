`ifndef GLOBAL_PARAMS_VH
`define GLOBAL_PARAMS_VH

parameter LENGTH = 10;
parameter WIDTH = 15;

parameter SHIFT = LENGTH / 10;
parameter LEFT = WIDTH * 4 / 10; // can change by one if needed

parameter MIN_HUE = 36;
parameter MIN_SATURATION = 25;
parameter MIN_VALUE = 25;

parameter MAX_HUE = 86;

`endif