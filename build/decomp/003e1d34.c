// OoT3D decomp @ 003e1d34  name=FUN_003e1d34  size=428

void FUN_003e1d34(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;

  iVar4 = *(int *)(DAT_003e1ee0 + param_2);
  FUN_003731e0(param_1 + 0x1a4);
  uVar1 = DAT_003e1ee8;
  uVar3 = DAT_003e1ee4;
  if (*(short *)(param_1 + 0x1c) != 0) {
    *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
  }
  iVar2 = FUN_003736fc(uVar1,uVar3,param_1 + 0x1a4);
  if ((iVar2 != 0) || (iVar2 = FUN_003736fc(DAT_003e1eec,uVar3,param_1 + 0x1a4), iVar2 != 0)) {
    FUN_00375bcc(param_1,DAT_003e1ef0);
  }
  uVar3 = DAT_003e1ef4;
  if ((*(byte *)(param_1 + 0x3d1) & 2) == 0) {
    fVar6 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 8);
    fVar5 = *(float *)(iVar4 + 0x30) - *(float *)(param_1 + 0x10);
    if (DAT_003e1f08 < (int)SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,0);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_003e1f0c,uVar3,uVar1,DAT_003e1f0c,param_1 + 0x1a4,0,2);
      *(undefined4 *)(param_1 + 0x400) = DAT_003e1f10;
      uVar1 = DAT_003e1f14;
      *(undefined4 *)(param_1 + 0x404) = DAT_003e1f14;
      *(undefined1 *)(param_1 + 0x3d4) = 0xc;
      *(byte *)(param_1 + 0x3d1) = *(byte *)(param_1 + 0x3d1) | 4;
      *(undefined4 *)(param_1 + 0x3e0) = 0xffcfffff;
      uVar3 = DAT_003e1f18;
      *(undefined4 *)(param_1 + 0x3ac) = uVar1;
    }
    else {
      if (*(short *)(param_1 + 0x1c) != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x1c) = 0x28;
      uVar3 = DAT_003e1f1c;
    }
    *(undefined4 *)(param_1 + 0x228) = uVar3;
    return;
  }
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar1 = DAT_003e1f00;
  *(undefined4 *)(param_1 + 100) = DAT_003e1ef8;
  uVar3 = DAT_003e1efc;
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + -0x8000;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  FUN_00375bcc(param_1,uVar1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
  *(undefined4 *)(param_1 + 0x228) = DAT_003e1f04;
  FUN_00375b70(param_2,param_1);
  return;
}
