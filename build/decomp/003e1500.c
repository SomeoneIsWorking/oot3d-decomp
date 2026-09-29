// OoT3D decomp @ 003e1500  name=FUN_003e1500  size=228

void FUN_003e1500(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;

  if (*(short *)(param_1 + 0x7e0) != 0) {
    *(short *)(param_1 + 0x7e0) = *(short *)(param_1 + 0x7e0) + -1;
  }
  FUN_00370378(param_1 + 0xbc,0,0x200);
  FUN_00370734(param_1 + 0x1a4);
  uVar1 = DAT_003e15e8;
  iVar2 = FUN_0036e5e0(DAT_003e15e8,DAT_003e15e4,param_1 + 0x1a4);
  if (iVar2 != 0) {
    FUN_00375bcc(param_1,DAT_003e15ec);
  }
  if ((*(ushort *)(param_1 + 0x90) & 2) != 0) {
    FUN_00375bcc(param_1,DAT_003e15f0);
  }
  iVar2 = DAT_003e15f4;
  if (*(short *)(param_1 + 0x7e0) == 0) {
    *(undefined4 *)(param_1 + 0x70) = uVar1;
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x834) = *(undefined4 *)(iVar2 + 0x24);
    uVar1 = DAT_003e15f8;
    *(undefined2 *)(param_1 + 0x7e2) = *(undefined2 *)(param_1 + 0xbe);
    fVar3 = (float)FUN_00372674(uVar1);
    uVar1 = DAT_003e1600;
    *(float *)(param_1 + 0x7e8) = *(float *)(param_1 + 0x2c) + fVar3 * DAT_003e15fc;
    FUN_00370350(uVar1,param_1 + 0x1a4,2);
    *(undefined2 *)(param_1 + 0x7e0) = 0x3c;
    *(undefined4 *)(param_1 + 0x7dc) = DAT_003e1604;
  }
  return;
}
