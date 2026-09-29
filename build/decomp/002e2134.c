// OoT3D decomp @ 002e2134  name=FUN_002e2134  size=100

/* WARNING: Removing unreachable block (ram,0x002d3850) */
/* WARNING: Removing unreachable block (ram,0x002d383c) */
/* WARNING: Removing unreachable block (ram,0x002d3820) */
/* WARNING: Removing unreachable block (ram,0x002d37fc) */
/* WARNING: Removing unreachable block (ram,0x002d37e4) */
/* WARNING: Removing unreachable block (ram,0x002d381c) */
/* WARNING: Removing unreachable block (ram,0x002d3828) */
/* WARNING: Removing unreachable block (ram,0x002d382c) */
/* WARNING: Removing unreachable block (ram,0x002d3844) */
/* WARNING: Removing unreachable block (ram,0x002d385c) */

undefined4 FUN_002e2134(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;

  iVar3 = FUN_002e1ef0();
  iVar1 = DAT_002e2198;
  if (iVar3 == 0) {
    return 0;
  }
  uVar4 = 0;
  *(undefined2 *)(DAT_002e2198 + 0xe) = 0;
  iVar3 = DAT_002e2198;
  if (param_3 == 0) {
    uVar4 = 0x100;
  }
  else if (param_3 == 1) {
    uVar4 = 0x200;
  }
  *(undefined4 *)(iVar1 + param_3 * 4 + 4) = param_1;
  iVar1 = FUN_002e1ef0();
  uVar2 = 0;
  if (iVar1 != 0) {
    puVar5 = *(uint **)(param_2 + (uint)*(ushort *)(iRam002d3888 + param_2) * 4 + 0x10a0);
    if ((uVar4 & 0x100) != 0) {
      puVar5[2] = *(uint *)(iVar3 + 4);
    }
    if ((uVar4 & 0x200) != 0) {
      puVar5[3] = *(uint *)(iVar3 + 8);
    }
    *(ushort *)((int)puVar5 + 0x12) = *(ushort *)((int)puVar5 + 0x12) | *(ushort *)(iVar3 + 0xe);
    *puVar5 = *puVar5 | (uVar4 | 2) << 0x10;
    uVar2 = 1;
  }
  return uVar2;
}
