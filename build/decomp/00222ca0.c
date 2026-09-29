// OoT3D decomp @ 00222ca0  name=FUN_00222ca0  size=328

void FUN_00222ca0(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,7,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,7,0x1e,param_1 + 0x228,param_1 + 0xa48,0x13);
  uVar3 = DAT_00222df4;
  fVar2 = DAT_00222de8;
  sVar1 = *(short *)(param_1 + 0x1c);
  fVar5 = DAT_00222de8;
  if (sVar1 == 0x1e) {
    uVar4 = 2;
  }
  else if (sVar1 == 0x1f) {
    uVar4 = 3;
  }
  else if (sVar1 == 0x20) {
    uVar4 = 2;
    fVar5 = DAT_00222df0;
  }
  else {
    uVar4 = 0x1e;
    fVar5 = DAT_00222dec;
  }
  FUN_0033391c(DAT_00222df4,param_1,uVar4,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,2,3,0xffffffff);
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) * fVar5;
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) * fVar5;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) * fVar5;
  *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
  FUN_003fd1b8(fVar2,param_2,param_1,param_1 + 0x1a4);
  FUN_00372d4c(uVar3,DAT_00222df8,param_1 + 0xbc,DAT_00222dfc);
  *(undefined4 *)(param_1 + 0x126c) = 0x1b;
  *(undefined4 *)(param_1 + 0x1270) = 0x16;
  return;
}
