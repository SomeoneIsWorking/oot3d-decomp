// OoT3D decomp @ 001c524c  name=FUN_001c524c  size=116

void FUN_001c524c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  float fVar4;
  float fVar5;

  iVar2 = FUN_00371e40();
  iVar1 = DAT_001c52c0;
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xd3d) == '\x01') {
      uVar3 = 0x24;
    }
    else {
      uVar3 = 0x2d;
    }
    fVar5 = ABS(*(float *)(param_1 + 0x9c)) + DAT_001c52c8;
    fVar4 = *(float *)(param_1 + 0x98) + DAT_001c52c8;
    *(undefined1 *)(param_1 + 0xf4c) = uVar3;
    FUN_003724dc(fVar4,fVar5,param_1,param_2);
    return;
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined2 *)(iVar1 + param_1) = 1;
  *(undefined4 *)(param_1 + 0xcb8) = DAT_001c52c4;
  return;
}
