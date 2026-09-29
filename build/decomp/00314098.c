// OoT3D decomp @ 00314098  name=FUN_00314098  size=100

void FUN_00314098(int *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;

  uVar2 = DAT_003140fc;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  iVar4 = FUN_00307dc8(uVar2);
  uVar1 = *(ushort *)((int)param_1 + 0xe);
  iVar5 = FUN_00307d8c(uVar2);
  uVar3 = DAT_00314100;
  puVar6 = *(uint **)(*param_1 + 8);
  *puVar6 = iVar4 << 4 | (uint)uVar1 << 8;
  puVar6[1] = uVar3;
  puVar6[2] = iVar5 << 0x18;
  puVar6[3] = DAT_00314104;
  *(uint **)(*param_1 + 8) = puVar6 + 4;
  return;
}
