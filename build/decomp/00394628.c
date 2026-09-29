// OoT3D decomp @ 00394628  name=FUN_00394628  size=192

undefined2 FUN_00394628(uint *param_1,undefined4 param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;

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
  uVar4 = param_3;
  if (bVar5) {
    uVar4 = *(uint *)(uVar2 + 0x24);
  }
  if (bVar5 && uVar4 != 0) {
    uVar2 = *(uint *)(uVar2 + 0x20);
  }
  if ((bVar5 && uVar4 != 0) && uVar2 != 0) {
    uVar6 = FUN_00322088(param_1,param_2,param_3,0);
    uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
    if (param_3 == 0x32) {
      uVar2 = *param_1;
    }
    if (param_3 != 0x32) {
      if ((param_3 < 0x33) && ((*(ushort *)((int)param_1 + param_3 * 2 + 0x156c) & 1) != 0)) {
        uVar2 = param_1[param_3 * 0x1b + 0x16];
      }
      else {
        uVar2 = 0;
      }
    }
    iVar3 = 0;
    if (uVar2 != 0) {
      iVar3 = *(int *)(uVar2 + 0x24);
    }
    if (uVar2 != 0 && iVar3 != 0) {
      return *(undefined2 *)(iVar3 + ((uint)uVar6 & 0xff) * 8 + 2);
    }
  }
  return 0;
}
