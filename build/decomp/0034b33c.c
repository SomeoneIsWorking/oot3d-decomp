// OoT3D decomp @ 0034b33c  name=FUN_0034b33c  size=148

undefined4 FUN_0034b33c(float param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float fVar2;
  undefined auStack_14 [4];
  undefined auStack_10 [4];
  
  fVar2 = (float)FUN_0036b4d0(*(float *)(param_4 + 0x48) - param_1,param_4);
  if (fVar2 < DAT_0034b3d0 == (NAN(fVar2) || NAN(DAT_0034b3d0))) {
    iVar1 = FUN_002c3d18(param_2,param_3,DAT_0034b3d4,1);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = FUN_0036b3f4(DAT_0034b3d8,param_3,auStack_10,auStack_14,param_2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0xffffffff;
}

