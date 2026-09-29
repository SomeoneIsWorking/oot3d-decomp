// OoT3D decomp @ 00180674  name=FUN_00180674  size=144

void FUN_00180674(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  FUN_00375a18(param_1 + 0xc0,DAT_00180704,5,(int)(short)(int)*(float *)(param_1 + 0x930),0);
  FUN_00373500(DAT_00180710,DAT_0018070c,DAT_00180708,param_1 + 0x930);
  iVar1 = DAT_00180714;
  *(short *)(param_1 + 0x38) = *(short *)(param_1 + 0xc0);
  if (*(short *)(param_1 + 0xc0) < iVar1) {
    FUN_00367c7c(param_2,DAT_00180718,0);
    uVar2 = DAT_0018071c;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    uVar3 = DAT_00180720;
    *(undefined4 *)(param_1 + 0x930) = uVar2;
    *(undefined4 *)(param_1 + 0x8a8) = uVar3;
  }
  return;
}
