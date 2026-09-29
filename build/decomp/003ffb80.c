// OoT3D decomp @ 003ffb80  name=FUN_003ffb80  size=340

uint FUN_003ffb80(int param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_78;
  int iStack_74;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  int local_60;
  undefined4 uStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [12];
  undefined1 auStack_44 [12];
  undefined1 auStack_38 [12];
  int local_2c;
  undefined4 uStack_28;
  int local_24;
  undefined4 uStack_20;

  if (*param_3 == 4) {
    iStack_74 = param_3[1];
  }
  else {
    iStack_74 = 0;
  }
  local_78 = 0;
  uVar3 = FUN_00415be8(param_1 + 8,auStack_38,auStack_44,auStack_50);
  if (-1 < (int)uVar3) {
    uVar3 = FUN_0030e990(param_1 + 0x30,auStack_68,auStack_64,auStack_50);
    if ((int)uVar3 < 0) {
      uVar4 = (uVar3 & 0x3fc00) >> 10;
      bVar7 = uVar4 == 0x11;
      if (bVar7) {
        uVar4 = uVar3 & 0x3ff;
      }
      if ((bVar7 && uVar4 == 0x6f) &&
         (uVar4 = FUN_0030e7b8(param_1 + 8,auStack_6c,&local_78,auStack_50), uVar3 = DAT_003ffcd4,
         (int)uVar4 < 0)) {
        uVar1 = (uVar4 & 0x3fc00) >> 10;
        bVar7 = uVar1 == 0x11;
        if (bVar7) {
          uVar1 = uVar4 & 0x3ff;
        }
        uVar3 = uVar4;
        if (bVar7 && uVar1 == 0x6f) {
          uVar3 = DAT_003ffcd8;
        }
      }
    }
    if (-1 < (int)uVar3) {
      local_2c = local_60;
      uStack_28 = uStack_5c;
      local_24 = iStack_58;
      uStack_20 = uStack_54;
      uVar3 = 0;
    }
  }
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  puVar5 = (undefined4 *)FUN_0030e6a8(param_1 + 0xa0);
  uVar2 = DAT_003ffcdc;
  if (puVar5 != (undefined4 *)0x0) {
    iVar6 = *(int *)(param_1 + 0x98);
    puVar5[3] = iVar6 + local_24 + local_2c;
    puVar5[2] = local_2c + iVar6;
    *puVar5 = uVar2;
    puVar5[1] = param_1;
  }
  *param_2 = puVar5;
  uVar3 = DAT_003ffce0;
  if (puVar5 != (undefined4 *)0x0) {
    uVar3 = 0;
  }
  return uVar3;
}
