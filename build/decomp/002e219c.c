// OoT3D decomp @ 002e219c  name=FUN_002e219c  size=76

/* WARNING: Removing unreachable block (ram,0x002d3850) */
/* WARNING: Removing unreachable block (ram,0x002d383c) */
/* WARNING: Removing unreachable block (ram,0x002d3820) */
/* WARNING: Removing unreachable block (ram,0x002d3814) */
/* WARNING: Removing unreachable block (ram,0x002d3808) */
/* WARNING: Removing unreachable block (ram,0x002d3804) */
/* WARNING: Removing unreachable block (ram,0x002d3810) */
/* WARNING: Removing unreachable block (ram,0x002d381c) */
/* WARNING: Removing unreachable block (ram,0x002d3828) */
/* WARNING: Removing unreachable block (ram,0x002d382c) */
/* WARNING: Removing unreachable block (ram,0x002d3844) */
/* WARNING: Removing unreachable block (ram,0x002d385c) */

bool FUN_002e219c(uint param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;

  iVar2 = FUN_002e1ef0();
  puVar1 = DAT_002e21e8;
  if (iVar2 == 0) {
    return false;
  }
  *(undefined2 *)((int)DAT_002e21e8 + 0xe) = 0;
  *puVar1 = param_1;
  iVar2 = FUN_002e1ef0();
  if (iVar2 != 0) {
    puVar3 = *(uint **)(param_2 + (uint)*(ushort *)(iRam002d3888 + param_2) * 4 + 0x10a0);
    puVar3[1] = *puVar1;
    *(ushort *)((int)puVar3 + 0x12) =
         *(ushort *)((int)puVar3 + 0x12) | *(ushort *)((int)puVar1 + 0xe);
    *puVar3 = *puVar3 | 0x30000;
  }
  return iVar2 != 0;
}
