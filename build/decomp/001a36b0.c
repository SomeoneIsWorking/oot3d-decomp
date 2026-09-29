// OoT3D decomp @ 001a36b0  name=FUN_001a36b0  size=412

void FUN_001a36b0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_18 [12];

  FUN_0036df4c(auStack_18,param_1 + 0x28);
  FUN_0036df4c(param_1 + 0x28,*(int *)(param_1 + 0x128) + 0x28);
  FUN_0036df4c(*(int *)(param_1 + 0x128) + 0x28,auStack_18);
  uVar1 = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(param_1 + 0x128) + 0x36);
  *(undefined2 *)(*(int *)(param_1 + 0x128) + 0x36) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0xbe);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(*(int *)(param_1 + 0x128) + 0xbe);
  *(undefined2 *)(*(int *)(param_1 + 0x128) + 0xbe) = uVar1;
  uVar1 = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(*(int *)(param_1 + 0x128) + 0x18);
  *(undefined2 *)(*(int *)(param_1 + 0x128) + 0x18) = uVar1;
  FUN_0036df4c(auStack_18,param_1 + 0x54);
  FUN_0036df4c(param_1 + 0x54,*(int *)(param_1 + 0x128) + 0x54);
  FUN_0036df4c(*(int *)(param_1 + 0x128) + 0x54,auStack_18);
  FUN_0036df4c(auStack_18,param_1 + 0x3c);
  FUN_0036df4c(param_1 + 0x3c,*(int *)(param_1 + 0x128) + 0x3c);
  FUN_0036df4c(*(int *)(param_1 + 0x128) + 0x3c,auStack_18);
  iVar3 = *(int *)(param_1 + 0x128);
  uVar4 = *(undefined4 *)(param_1 + 0x48);
  uVar5 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(iVar3 + 0x48);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(iVar3 + 0x4a);
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(iVar3 + 0x4c);
  *(short *)(iVar3 + 0x48) = (short)uVar4;
  *(short *)(iVar3 + 0x4a) = (short)((uint)uVar4 >> 0x10);
  *(short *)(iVar3 + 0x4c) = (short)uVar5;
  iVar3 = *(int *)(param_1 + 0x128);
  uVar2 = *(ushort *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x1c) = uVar2 & 0x8000 | *(ushort *)(iVar3 + 0x1c) & 0x7fff;
  *(ushort *)(iVar3 + 0x1c) = uVar2 & 0x7fff | *(ushort *)(iVar3 + 0x1c) & 0x8000;
  fVar8 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0xc);
  fVar7 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x10);
  if ((int)(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7) < DAT_001a384c) {
    FUN_0036beac();
    return;
  }
  FUN_00375c10(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  return;
}
