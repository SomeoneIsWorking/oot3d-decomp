// OoT3D decomp @ 002d13b4  name=FUN_002d13b4  size=116

/* WARNING: Removing unreachable block (ram,0x00495b00) */
/* WARNING: Removing unreachable block (ram,0x00495b14) */
/* WARNING: Removing unreachable block (ram,0x002c4370) */
/* WARNING: Removing unreachable block (ram,0x002c436c) */
/* WARNING: Removing unreachable block (ram,0x002c4374) */
/* WARNING: Removing unreachable block (ram,0x002c4340) */
/* WARNING: Removing unreachable block (ram,0x002c4358) */
/* WARNING: Removing unreachable block (ram,0x002c435c) */
/* WARNING: Removing unreachable block (ram,0x002c4360) */
/* WARNING: Removing unreachable block (ram,0x002c4378) */
/* WARNING: Removing unreachable block (ram,0x002c4380) */
/* WARNING: Removing unreachable block (ram,0x002c4394) */
/* WARNING: Removing unreachable block (ram,0x00495af8) */
/* WARNING: Removing unreachable block (ram,0x00495b2c) */
/* WARNING: Removing unreachable block (ram,0x00495b08) */

longlong FUN_002d13b4(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char in_OV;
  bool bVar3;
  bool bVar4;

  uVar2 = 0x7ff;
  uVar1 = param_2 >> 0x14 & 0x7ff;
  bVar3 = uVar1 == 0;
  if (!bVar3) {
    uVar2 = uVar1 ^ 0x7ff;
    bVar3 = uVar2 == 0;
  }
  bVar4 = bVar3;
  if (!bVar3) {
    in_OV = SBORROW4(uVar2,param_3);
    bVar4 = uVar2 == param_3;
  }
  bVar3 = !bVar3 && (int)(uVar2 - param_3) < 0;
  if (!bVar4 && bVar3 == (bool)in_OV) {
    in_OV = SCARRY4(param_3,uVar1);
    bVar3 = (int)(param_3 + uVar1) < 0;
    bVar4 = param_3 + uVar1 == 0;
  }
  if (!bVar4 && bVar3 == (bool)in_OV) {
    return CONCAT44(param_2 + param_3 * 0x100000,param_1);
  }
  if (uVar1 == 0) {
    if (param_1 != 0 || (param_2 & 0x7fffffff) != 0) {
      param_2 = 0;
    }
    return (ulonglong)param_2 << 0x20;
  }
  if (uVar2 == 0) {
    if (param_1 == 0 && (param_2 & 0xfffff) == 0) {
      return CONCAT44(param_2,param_1);
    }
    return (ulonglong)DAT_0048851c << 0x20;
  }
  if ((int)param_3 < 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2 & 0x80000000 | 0x7ff00000;
  }
  return (ulonglong)uVar1 << 0x20;
}
