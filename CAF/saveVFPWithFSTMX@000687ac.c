
/* libunwind::Registers_arm::saveVFPWithFSTMX(void*) */

void libunwind::Registers_arm::saveVFPWithFSTMX(void *param_1)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined8 unaff_d12;
  undefined8 unaff_d13;
  undefined8 unaff_d14;
  undefined8 unaff_d15;
  
  *(undefined8 *)param_1 = in_d0;
  *(undefined8 *)((int)param_1 + 8) = in_d1;
  *(undefined8 *)((int)param_1 + 0x10) = in_d2;
  *(undefined8 *)((int)param_1 + 0x18) = in_d3;
  *(undefined8 *)((int)param_1 + 0x20) = in_d4;
  *(undefined8 *)((int)param_1 + 0x28) = in_d5;
  *(undefined8 *)((int)param_1 + 0x30) = in_d6;
  *(undefined8 *)((int)param_1 + 0x38) = in_d7;
  *(undefined8 *)((int)param_1 + 0x40) = unaff_d8;
  *(undefined8 *)((int)param_1 + 0x48) = unaff_d9;
  *(undefined8 *)((int)param_1 + 0x50) = unaff_d10;
  *(undefined8 *)((int)param_1 + 0x58) = unaff_d11;
  *(undefined8 *)((int)param_1 + 0x60) = unaff_d12;
  *(undefined8 *)((int)param_1 + 0x68) = unaff_d13;
  *(undefined8 *)((int)param_1 + 0x70) = unaff_d14;
  *(undefined8 *)((int)param_1 + 0x78) = unaff_d15;
  return;
}

