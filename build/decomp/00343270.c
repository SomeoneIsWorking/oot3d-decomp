// OoT3D decomp @ 00343270  name=FUN_00343270  size=16

/* WARNING: Removing unreachable block (ram,0x003432c4) */
/* WARNING: Removing unreachable block (ram,0x003432bc) */
/* WARNING: Removing unreachable block (ram,0x003432c8) */
/* WARNING: Removing unreachable block (ram,0x003432cc) */
/* WARNING: Removing unreachable block (ram,0x003432d0) */

undefined4 * FUN_00343270(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;

  puVar1 = (undefined4 *)param_1[7];
  bVar3 = 0x1f < (uint)(*param_1 * 8);
  uVar2 = *param_1 * 8 - 0x20;
  do {
    if (bVar3) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1 = puVar1 + 8;
      bVar3 = 0x1f < uVar2;
      uVar2 = uVar2 - 0x20;
    }
  } while (bVar3);
  if ((bool)((byte)(uVar2 >> 4) & 1)) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  }
  if ((int)(uVar2 << 0x1c) < 0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
  }
  return puVar1;
}
