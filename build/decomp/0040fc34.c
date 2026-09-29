// OoT3D decomp @ 0040fc34  name=FUN_0040fc34  size=104

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0040fc34(int *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint local_2c [4];
  int local_1c [3];

  uVar2 = DAT_003140fc;
  local_1c[0] = *DAT_0040fc9c;
  local_1c[1] = DAT_0040fc9c[1];
  local_1c[2] = DAT_0040fc9c[2];
  local_2c[0] = DAT_0040fc9c[4];
  local_2c[1] = DAT_0040fc9c[5];
  local_2c[2] = DAT_0040fc9c[6];
  local_2c[3] = DAT_0040fc9c[7];
  uVar6 = (uint)*(ushort *)(*param_1 + 0x22);
  if (uVar6 != 2) {
    FUN_00314108(param_2,local_2c[uVar6] & 0xffff,local_1c[uVar6] != 0);
    return;
  }
  *(undefined1 *)((int)param_2 + 0x12) = 0;
  *(undefined1 *)((int)param_2 + 0x13) = 0;
  iVar3 = FUN_00307dc8(uVar2);
  uVar1 = *(ushort *)((int)param_2 + 0xe);
  iVar4 = FUN_00307d8c(uVar2);
  uVar6 = DAT_00314100;
  puVar5 = *(uint **)(*param_2 + 8);
  *puVar5 = iVar3 << 4 | (uint)uVar1 << 8;
  puVar5[1] = uVar6;
  puVar5[2] = iVar4 << 0x18;
  puVar5[3] = DAT_00314104;
  *(uint **)(*param_2 + 8) = puVar5 + 4;
  return;
}
