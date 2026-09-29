// OoT3D decomp @ 00305fdc  name=FUN_00305fdc  size=416

uint FUN_00305fdc(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_38 [16];

  local_40 = *DAT_00306184;
  uStack_3c = DAT_00306184[1];
  local_48 = 0;
  uStack_44 = 0;
  uVar1 = FUN_00305aa4(param_4);
  iVar2 = FUN_00305a3c(param_4);
  switch(param_3) {
  default:
    FUN_00305a20(&local_40,DAT_00306188);
    FUN_00305a20(&local_48,DAT_00306198);
    break;
  case 1:
    FUN_00305a20(&local_40,DAT_00306188);
    if (iVar2 < 0xc) {
      FUN_00305a20(&local_48,DAT_0030618c);
    }
    else {
      FUN_00305a20(&local_48,DAT_00306190);
    }
    iVar5 = (int)((ulonglong)((longlong)DAT_00306194 * (longlong)iVar2) >> 0x20);
    iVar2 = iVar2 + ((iVar5 >> 1) - (iVar5 >> 0x1f)) * -0xc;
    if (iVar2 < 1) {
      iVar2 = 0xc;
    }
  }
  local_50 = &local_48;
  local_54 = uVar1;
  FUN_00306938(local_38,0x20,DAT_0030619c,iVar2,&local_40);
  uVar3 = FUN_003062f8(local_38);
  local_54 = *DAT_003061a0;
  local_50 = (undefined4 *)DAT_003061a0[1];
  uStack_4c = DAT_003061a0[2];
  if (*(char *)((int)&local_54 + param_3) == '\0') {
    if (0xf < uVar3) {
      uVar3 = 0x10;
    }
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        puVar8 = local_38 + uVar7;
        uVar4 = *puVar8;
        uVar6 = (uint)uVar4;
        if ((uVar6 < 0x7f) && (0x1f < uVar6)) {
          uVar4 = *(ushort *)(DAT_003061a4 + uVar6 * 2 + -0x40);
        }
        uVar7 = uVar7 + 1;
        *puVar8 = uVar4;
      } while (uVar7 < uVar3);
    }
  }
  uVar7 = uVar3;
  if (param_1 != 0) {
    uVar7 = param_2 >> 1;
    if (uVar3 < param_2 >> 1) {
      uVar7 = uVar3;
    }
    FUN_0034338c(param_1,local_38,uVar7 << 1);
  }
  return uVar7;
}
