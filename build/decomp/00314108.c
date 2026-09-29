// OoT3D decomp @ 00314108  name=FUN_00314108  size=132

void FUN_00314108(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;

  *(undefined1 *)((int)param_1 + 0x12) = 1;
  *(char *)((int)param_1 + 0x13) = (char)param_3;
  iVar1 = FUN_00307dc8(param_2);
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = 0x1000;
  }
  uVar4 = uVar2 | iVar1 << 4 | (uint)*(ushort *)((int)param_1 + 0xe) << 8 | 1;
  iVar1 = FUN_00307d8c(param_2);
  uVar2 = DAT_0031418c;
  puVar3 = *(uint **)(*param_1 + 8);
  *puVar3 = uVar4;
  puVar3[1] = uVar2;
  puVar3[2] = iVar1 << 0x18;
  puVar3[3] = DAT_00314190;
  uVar2 = DAT_00314194;
  puVar3[4] = uVar4;
  puVar3[5] = uVar2;
  *(uint **)(*param_1 + 8) = puVar3 + 6;
  return;
}
