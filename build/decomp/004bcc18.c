// OoT3D decomp @ 004bcc18  name=FUN_004bcc18  size=40

undefined4 FUN_004bcc18(int param_1)

{
  int unaff_r5;
  undefined4 in_cr4;
  undefined8 unaff_d8;
  undefined4 in_stack_000003b0;
  
  FUN_0036b4ec(param_1 + 0x254);
  *(undefined8 *)(unaff_r5 + 8) = unaff_d8;
  coprocessor_load(1,in_cr4,&stack0xfffffff0);
  return in_stack_000003b0;
}

