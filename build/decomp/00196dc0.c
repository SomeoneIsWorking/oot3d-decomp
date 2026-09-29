// OoT3D decomp @ 00196dc0  name=FUN_00196dc0  size=372

void FUN_00196dc0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  uVar1 = DAT_00196f40;
  iVar3 = *(int *)(DAT_00196f34 + param_2);
  fVar4 = *(float *)(param_1 + 0x6c) + DAT_00196f38;
  *(float *)(param_1 + 0x6c) = fVar4;
  if (0x40000000 < (int)fVar4) {
    fVar4 = DAT_00196f3c;
  }
  *(float *)(param_1 + 0x6c) = fVar4;
  iVar2 = FUN_003705a0(uVar1,param_2 + 0x7fc8);
  fVar5 = (float)VectorSignedToFloat((int)*(char *)(param_1 + 0x1c2),(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = *(float *)(param_2 + 0x7fc8) * fVar5;
  fVar4 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x1b0));
  *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar5 * fVar4;
  fVar4 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x1b0));
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar5 * fVar4;
  fVar4 = DAT_00196f44;
  if (iVar2 != 0) {
    *(uint *)(iVar3 + 0x1714) = *(uint *)(iVar3 + 0x1714) & 0xffffffef;
    if ((fVar4 < *(float *)(param_1 + 0x1a8)) &&
       (iVar3 = FUN_0036d288(param_2,param_1,0x1e,0x32,0xffffffec), iVar3 == 0)) {
      FUN_00375bcc(param_1,DAT_00196f48);
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
    *(float *)(param_1 + 0x1a8) = fVar4;
    *(float *)(param_2 + 0x7fc8) = fVar4;
    *(float *)(param_1 + 0x6c) = fVar4;
    *(undefined1 *)(param_1 + 0x1c2) = 5;
    *(char *)(param_2 + 0x7fc7) = *(char *)(param_2 + 0x7fc7) + '\x01';
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00196f4c;
    if (*(char *)(param_1 + 0x1c0) == '\x01') {
      return;
    }
    FUN_00346850(param_1);
    FUN_00346850(*(undefined4 *)(param_1 + 0x124));
  }
  FUN_00373264(param_1,DAT_00196f50);
  return;
}
