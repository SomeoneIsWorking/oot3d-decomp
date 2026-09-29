// OoT3D decomp @ 00305da4  name=FUN_00305da4  size=304

uint FUN_00305da4(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  ushort local_38 [16];

  local_40 = *(undefined4 *)(DAT_00305ed4 + 8);
  uStack_3c = *(undefined4 *)(DAT_00305ed4 + 0xc);
  local_48 = 0;
  uStack_44 = 0;
  uVar1 = FUN_003059b0(param_4);
  uVar2 = FUN_00305aa4(param_4);
  FUN_00305a20(&local_40,DAT_00305ed8);
  FUN_00305a20(&local_48,DAT_00305edc);
  local_50 = &local_48;
  local_54 = uVar1;
  FUN_00306938(local_38,0x20,DAT_00305ee0,uVar2,&local_40);
  uVar3 = FUN_003062f8(local_38);
  local_54 = *DAT_00305ee4;
  local_50 = (undefined4 *)DAT_00305ee4[1];
  uStack_4c = DAT_00305ee4[2];
  if (*(char *)((int)&local_54 + param_3) == '\0') {
    if (0xf < uVar3) {
      uVar3 = 0x10;
    }
    uVar6 = 0;
    if (uVar3 != 0) {
      do {
        puVar7 = local_38 + uVar6;
        uVar4 = *puVar7;
        uVar5 = (uint)uVar4;
        if ((uVar5 < 0x7f) && (0x1f < uVar5)) {
          uVar4 = *(ushort *)(DAT_00305ee8 + uVar5 * 2 + -0x40);
        }
        uVar6 = uVar6 + 1;
        *puVar7 = uVar4;
      } while (uVar6 < uVar3);
    }
  }
  uVar6 = uVar3;
  if (param_1 != 0) {
    uVar6 = param_2 >> 1;
    if (uVar3 < param_2 >> 1) {
      uVar6 = uVar3;
    }
    FUN_0034338c(param_1,local_38,uVar6 << 1);
  }
  return uVar6;
}
