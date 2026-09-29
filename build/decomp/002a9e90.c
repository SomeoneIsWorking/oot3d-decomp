// OoT3D decomp @ 002a9e90  name=FUN_002a9e90  size=216

/* WARNING: Removing unreachable block (ram,0x002a9f48) */

undefined4 FUN_002a9e90(uint *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  int extraout_r3;
  int iVar4;
  bool bVar5;

  if (param_3 == 0x32) {
    uVar2 = *param_1;
  }
  else if (param_3 < 0x33) {
    uVar1 = *(ushort *)((int)param_1 + param_3 * 2 + 0x156c);
    uVar2 = uVar1 & 1;
    if ((uVar1 & 1) != 0) {
      uVar2 = param_1[param_3 * 0x1b + 0x16];
    }
  }
  else {
    uVar2 = 0;
  }
  bVar5 = uVar2 != 0;
  uVar3 = param_3;
  if (bVar5) {
    uVar3 = *(uint *)(uVar2 + 0x24);
  }
  if (bVar5 && uVar3 != 0) {
    uVar2 = *(uint *)(uVar2 + 0x20);
  }
  if ((bVar5 && uVar3 != 0) && uVar2 != 0) {
    uVar3 = FUN_00322088(param_1,param_2,param_3,0);
    uVar2 = extraout_r2;
    if (param_3 == 0x32) {
      uVar2 = *param_1;
    }
    uVar3 = uVar3 & 0xff;
    if (param_3 != 0x32) {
      if ((param_3 < 0x33) && ((*(ushort *)((int)param_1 + param_3 * 2 + 0x156c) & 1) != 0)) {
        uVar2 = param_1[param_3 * 0x1b + 0x16];
      }
      else {
        uVar2 = 0;
      }
    }
    iVar4 = extraout_r3;
    if (uVar2 != 0) {
      iVar4 = *(int *)(uVar2 + 0x24);
    }
    if (uVar2 != 0 && iVar4 != 0) {
      if (*(ushort *)(uVar2 + 0x12) < uVar3) {
        uVar3 = *(ushort *)(uVar2 + 0x12) - 1;
      }
      return *(undefined4 *)(iVar4 + uVar3 * 8 + 4);
    }
  }
  return 0;
}
