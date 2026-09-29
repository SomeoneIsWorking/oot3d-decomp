// OoT3D decomp @ 00235e84  name=FUN_00235e84  size=48

void FUN_00235e84(void)

{
  int unaff_r4;
  undefined4 unaff_r9;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr10;
  undefined4 in_cr14;
  undefined4 in_cr15;

  coprocessor_store(0,in_cr1,unaff_r4 + 0x3d0);
  coprocessor_function(10,0xf,4,in_cr0,in_cr8,in_cr10);
  coprocessor_storelong(2,in_cr1,unaff_r4 + 0x3c0);
  coprocessor_store(0,in_cr15,unaff_r4);
  coprocessor_function(0,0xb,0,in_cr1,in_cr0,in_cr8);
  coprocessor_storelong(2,in_cr14,unaff_r9);
  return;
}
