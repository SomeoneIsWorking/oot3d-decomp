// OoT3D decomp @ 00127260  name=FUN_00127260  size=344

void FUN_00127260(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_20 [4];

  iVar1 = FUN_00370734(param_1 + 0x1a4);
  if ((int)*(float *)(param_1 + 0x1e0) < DAT_001273b8) {
    fVar4 = *(float *)(param_1 + 0x1e0) * DAT_001273bc;
    fVar2 = (float)FUN_00372674(fVar4);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + (DAT_001273c0 - fVar2) * DAT_001273c4;
    fVar2 = (float)FUN_003727f0(fVar4);
    fVar2 = fVar2 * DAT_001273c8;
    fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x7e4) + fVar2 * fVar4;
    fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0xbe));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x7ec) + fVar2 * fVar4;
  }
  else {
    FUN_003705a0(*(float *)(param_1 + 0xc) + DAT_001273cc,DAT_001273d0,param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x6c) = DAT_001273d4;
  }
  uVar3 = DAT_001273d8;
  if (iVar1 != 0) {
    *(byte *)(param_1 + 0x801) = *(byte *)(param_1 + 0x801) | 1;
    *(undefined2 *)(param_1 + 0x7e2) = *(undefined2 *)(param_1 + 0xbe);
    fVar2 = (float)FUN_00372674(uVar3);
    uVar3 = DAT_001273e0;
    *(float *)(param_1 + 0x7e8) = *(float *)(param_1 + 0x2c) + fVar2 * DAT_001273dc;
    FUN_00370350(uVar3,param_1 + 0x1a4,2);
    *(undefined2 *)(param_1 + 0x7e0) = 0x3c;
    *(undefined4 *)(param_1 + 0x7dc) = DAT_001273e4;
    return;
  }
  uVar3 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_20,param_1,param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  return;
}
