// OoT3D decomp @ 0021cde4  name=FUN_0021cde4  size=126

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0021cde4(int param_1)

{
  int unaff_pc;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  FUN_0036ae14(param_1 + 0x2fc,*DAT_0021ce4c);
  coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
  coprocessor_function(0,0xf,0,in_cr0,in_cr1,in_cr4);
  coprocessor_movefromRt(10,5,0,in_cr0,in_cr11);
  coprocessor_storelong(0,in_cr0,param_1);
  coprocessor_loadlong(1,in_cr1,unaff_pc + 0x2f0);
  return 0x21ce00;
}

