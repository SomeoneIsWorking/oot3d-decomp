// OoT3D decomp @ 00437e70  name=FUN_00437e70  size=384

undefined4 FUN_00437e70(int param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_224 [267];
  char acStack_119 [133];
  int local_94 [5];
  undefined1 auStack_80 [104];

  iVar2 = FUN_00324f44(0);
  uVar3 = iVar2 + 1U;
  if (DAT_00437ff0 < iVar2 + 1U) {
    uVar3 = DAT_00437ff0;
  }
  FUN_00324f44(auStack_224,param_2,uVar3);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  iVar2 = FUN_0030d580(param_1 + 0x154,auStack_224,1);
  if (iVar2 < 0) {
    FUN_003351b4();
  }
  *(undefined1 *)(param_1 + 0x168) = 1;
  iVar2 = FUN_0030ecfc(param_1 + 0x154,local_94,auStack_80,0x40);
  if (iVar2 < 0) {
    FUN_003351b4();
  }
  if (local_94[0] == 0x40) {
    FUN_002ea294(param_1 + 0x10c,auStack_80);
    FUN_002ea278(param_1,param_1 + 0x10c);
    uVar3 = FUN_0030de24(param_2);
    do {
      uVar1 = uVar3;
      uVar3 = uVar1 - 1;
      if ((int)uVar3 < 0) {
        return 1;
      }
    } while (param_2[uVar3] != '/' && param_2[uVar3] != '\\');
    if ((int)uVar3 < 0x100) {
      uVar6 = 0;
      pcVar4 = acStack_119 + 1;
      do {
        uVar7 = uVar3;
        if (0xfe < uVar3) {
          uVar7 = 0xff;
        }
        pcVar5 = pcVar4;
        if (uVar7 <= uVar6) break;
        pcVar5 = pcVar4 + 1;
        *pcVar4 = *param_2;
        param_2 = param_2 + 1;
        uVar6 = uVar6 + 1;
        pcVar4 = pcVar5;
      } while (*param_2 != '\0');
      *pcVar5 = '\0';
      acStack_119[uVar1] = '\0';
      FUN_0044b3d0(param_1);
      return 1;
    }
  }
  return 0;
}
