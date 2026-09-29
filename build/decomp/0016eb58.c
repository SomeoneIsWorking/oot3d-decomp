// OoT3D decomp @ 0016eb58  name=FUN_0016eb58  size=372

void FUN_0016eb58(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;

  iVar3 = FUN_0037571c(param_2);
  iVar2 = DAT_0016ecd0;
  uVar1 = DAT_0016eccc;
  if (((iVar3 != 0) &&
      (*(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) != (short *)0x0)) &&
     (**(short **)(&DAT_000022dc + param_2 + *(short *)(param_1 + 0x292) * 4) == 2)) {
    iVar3 = 0;
    do {
      iVar4 = param_1 + iVar3 * 0xc;
      iVar5 = param_1 + iVar3 * 4;
      local_50 = *(undefined4 *)(iVar4 + 0x2d8);
      local_40 = *(undefined4 *)(iVar4 + 0x2dc);
      local_30 = *(undefined4 *)(iVar4 + 0x2e0);
      local_34 = *(float *)(iVar2 + 0x28);
      local_5c = local_34 * 1.0;
      local_4c = local_34 * 0.0;
      local_3c = local_34 * 0.0;
      local_58 = local_34 * 0.0;
      local_48 = local_34 * 1.0;
      local_38 = local_34 * 0.0;
      local_54 = local_34 * 0.0;
      local_44 = local_34 * 0.0;
      local_34 = local_34 * 1.0;
      *(undefined1 *)(*(int *)(iVar5 + 0x2a8) + 0xac) = 1;
      local_2c = local_50;
      local_28 = local_40;
      local_24 = local_30;
      FUN_003721e0(*(undefined4 *)(iVar5 + 0x2a8),&local_5c);
      FUN_00372170(*(undefined4 *)(iVar5 + 0x2a8),0);
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x2a8) + 0xc) + 0xc) = uVar1;
    } while (iVar3 < 3);
  }
  return;
}
