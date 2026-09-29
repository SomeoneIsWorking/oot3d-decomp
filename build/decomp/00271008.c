// OoT3D decomp @ 00271008  name=FUN_00271008  size=280

void FUN_00271008(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [12];
  float local_24;

  *(undefined1 *)(*(int *)(param_1 + 0x1b4) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1b4),param_1 + 0x148);
  iVar2 = *(int *)(param_1 + 0x1b4);
  uVar5 = *(undefined4 *)(param_1 + 0x2c);
  uVar6 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar2 + 0x28) = uVar5;
  *(undefined4 *)(iVar2 + 0x2c) = uVar6;
  *(undefined1 *)(*(int *)(param_1 + 0x1b4) + 0xad) = 1;
  iVar2 = FUN_003695f8();
  uVar5 = DAT_00271120;
  if (iVar2 == 0) {
    uVar5 = DAT_00271124;
  }
  iVar2 = 0;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b4) + 0xc) + 0xc) = uVar5;
  fVar1 = DAT_00271128;
  if (0 < *(int *)(**(int **)(*(int *)(param_1 + 0x1b8) + 8) + 8)) {
    do {
      iVar4 = *(int *)(*(int *)(param_1 + 0x1b4) + 0x10);
      FUN_00333abc(iVar4,iVar2,auStack_30);
      local_24 = (float)VectorUnsignedToFloat
                                  ((uint)*(byte *)(param_1 + 0x1a7),(byte)(in_fpscr >> 0x15) & 3);
      local_24 = local_24 * fVar1;
      FUN_00333a38(iVar4,iVar2,auStack_30);
      iVar3 = iVar2 + 1;
      *(undefined1 *)(*(int *)(iVar4 + 4) + iVar2 * 0x124) = 1;
      iVar2 = iVar3;
    } while (iVar3 < *(int *)(**(int **)(*(int *)(param_1 + 0x1b8) + 8) + 8));
  }
  FUN_00372170(*(undefined4 *)(param_1 + 0x1b4),0);
  FUN_00287268(param_1,param_2);
  return;
}
