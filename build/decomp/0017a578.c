// OoT3D decomp @ 0017a578  name=FUN_0017a578  size=66

undefined4 FUN_0017a578(void)

{
  undefined4 uVar1;
  int unaff_r4;
  int unaff_r5;
  undefined4 in_cr0;
  undefined4 in_cr12;
  undefined4 in_cr13;
  float unaff_s24;

  coprocessor_movefromRt(10,5,0,in_cr13,in_cr0);
  uVar1 = coprocessor_movefromRt(10,5,0,in_cr13,in_cr0);
  coprocessor_function(0xc,1,6,in_cr0,in_cr0,in_cr12);
  *(float *)(unaff_r4 + 0xd0) =
       *(float *)(unaff_r4 + 0x220) + *(float *)(unaff_r4 + 0x220) * unaff_s24;
  coprocessor_load(0xe,in_cr0,unaff_r5 + 0x78);
  software_hlt(0x10);
  return uVar1;
}
