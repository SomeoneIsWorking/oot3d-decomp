// OoT3D decomp @ 00487fb8  name=FUN_00487fb8  size=436

uint FUN_00487fb8(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  undefined4 *local_60;
  int local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  ushort local_3c [16];

  local_44 = *(undefined4 *)(DAT_0048818c + 0x20);
  local_40 = *(undefined4 *)(DAT_0048818c + 0x24);
  local_4c = *(undefined4 *)(DAT_0048818c + 0x28);
  uStack_48 = *(undefined4 *)(DAT_0048818c + 0x2c);
  local_54 = 0;
  uStack_50 = 0;
  iVar1 = FUN_0048baec(param_4);
  iVar1 = (int)((ulonglong)((longlong)DAT_00488190 * (longlong)iVar1) >> 0x20);
  uVar2 = FUN_003059b0(param_4);
  uVar3 = FUN_00305aa4(param_4);
  switch(param_3) {
  case 0:
  case 1:
  case 2:
  case 7:
    FUN_00305a20(&local_44,DAT_00488194);
    FUN_00305a20(&local_4c,DAT_00488198);
    FUN_00305a20(&local_54,DAT_0048819c);
    break;
  default:
    FUN_00305a20(&local_44,DAT_00488194);
    FUN_00305a20(&local_4c,DAT_004881a0);
    FUN_00305a20(&local_54,DAT_0048819c);
  }
  local_58 = &local_54;
  local_60 = &local_4c;
  local_5c = (iVar1 >> 2) - (iVar1 >> 0x1f);
  FUN_00306938(local_3c,0x20,DAT_004881a4,uVar3,&local_44,uVar2);
  uVar4 = FUN_003062f8(local_3c);
  local_60 = (undefined4 *)*DAT_004881a8;
  local_5c = DAT_004881a8[1];
  local_58 = (undefined4 *)DAT_004881a8[2];
  if (*(char *)((int)&local_60 + param_3) == '\0') {
    if (0xf < uVar4) {
      uVar4 = 0x10;
    }
    uVar7 = 0;
    if (uVar4 != 0) {
      do {
        puVar8 = local_3c + uVar7;
        uVar5 = *puVar8;
        uVar6 = (uint)uVar5;
        if ((uVar6 < 0x7f) && (0x1f < uVar6)) {
          uVar5 = *(ushort *)(DAT_004881ac + uVar6 * 2 + -0x40);
        }
        uVar7 = uVar7 + 1;
        *puVar8 = uVar5;
      } while (uVar7 < uVar4);
    }
  }
  uVar7 = uVar4;
  if (param_1 != 0) {
    uVar7 = param_2 >> 1;
    if (uVar4 < param_2 >> 1) {
      uVar7 = uVar4;
    }
    FUN_0034338c(param_1,local_3c,uVar7 << 1);
  }
  return uVar7;
}
