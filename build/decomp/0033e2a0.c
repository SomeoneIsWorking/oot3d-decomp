// OoT3D decomp @ 0033e2a0  name=FUN_0033e2a0  size=220

int FUN_0033e2a0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int unaff_r4;
  uint in_fpscr;
  float fVar1;
  undefined4 uVar2;

  if ((*(uint *)(param_2 + 4) & 0x20000000) == 0) {
    unaff_r4 = FUN_0035bfb4(param_1 + 0x29c,*param_1);
    if ((*(uint *)(param_2 + 4) & 0x400000) == 0) {
      FUN_0035bf50(unaff_r4,param_1[0x29c],param_2 + 0x28);
      fVar1 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(unaff_r4 + 8),(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = VectorFloatToUnsigned(fVar1 * (float)param_1[0xc87],3);
      *(char *)(unaff_r4 + 8) = (char)uVar2;
      fVar1 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(unaff_r4 + 9),(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = VectorFloatToUnsigned(fVar1 * (float)param_1[0xc87],3);
      *(char *)(unaff_r4 + 9) = (char)uVar2;
      fVar1 = (float)VectorUnsignedToFloat
                               ((uint)*(byte *)(unaff_r4 + 10),(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = VectorFloatToUnsigned(fVar1 * (float)param_1[0xc87],3);
      *(char *)(unaff_r4 + 10) = (char)uVar2;
      FUN_0035bbe0(unaff_r4,param_3);
    }
    else {
      FUN_0035bf50(unaff_r4,param_1[0x29c],0);
      FUN_00340f44(unaff_r4,param_3);
    }
  }
  return unaff_r4;
}
