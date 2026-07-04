// OoT3D decomp @ 00217c2c  name=FUN_00217c2c  size=56

undefined4 FUN_00217c2c(undefined4 param_1,int param_2,int param_3)

{
  uint in_fpscr;
  undefined4 uVar1;
  
  *(short *)(param_2 + 0x3220) = (short)*(char *)(param_3 + 4);
  *(short *)(param_2 + 0x3222) = (short)*(char *)(param_3 + 5);
  *(short *)(param_2 + 0x3224) = (short)*(char *)(param_3 + 6);
  uVar1 = VectorUnsignedToFloat((uint)*(byte *)(param_3 + 7),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_2 + 0x3228) = uVar1;
  return 1;
}

