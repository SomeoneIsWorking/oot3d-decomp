// OoT3D decomp @ 00178488  name=FUN_00178488  size=328

void FUN_00178488(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar2 != 0) {
    FUN_00370350(DAT_001785d0,param_1 + 0x1a4,2);
    iVar2 = FUN_0036ae14(param_1 + 0x1a4,2);
    fVar6 = DAT_001785d8;
    fVar1 = DAT_001785d4;
    if ((iVar2 + 1) * 7 < 1) {
      iVar2 = FUN_0036ae14(param_1 + 0x1a4,2);
      fVar5 = (float)VectorSignedToFloat((iVar2 + 1) * 7,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = fVar5 * fVar1 * fVar6 - fVar6;
    }
    else {
      iVar2 = FUN_0036ae14(param_1 + 0x1a4,2);
      fVar5 = (float)VectorSignedToFloat((iVar2 + 1) * 7,(byte)(in_fpscr >> 0x15) & 3);
      fVar6 = fVar6 + fVar5 * fVar1 * fVar6;
    }
    *(short *)(param_1 + 0x9e6) = (short)(int)fVar6;
    iVar2 = *(int *)(param_1 + 0x124);
    if (iVar2 == 0) {
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
      *(short *)(param_1 + 0x9e6) = (short)(int)fVar6 + 1;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0x2c);
      uVar4 = *(undefined4 *)(iVar2 + 0x30);
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = uVar3;
      *(undefined4 *)(param_1 + 0x30) = uVar4;
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(*(int *)(param_1 + 0x124) + 0xbe);
    }
    if (*(char *)(param_1 + 0x9e1) == '\0') {
      FUN_00375bcc(param_1,DAT_001785dc);
    }
    *(undefined4 *)(param_1 + 0x9dc) = DAT_001785e0;
  }
  FUN_00366c24(param_1,param_2);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_001785e4;
  FUN_0037322c(DAT_001785e8,param_1);
  return;
}
