// OoT3D decomp @ 0047db80  name=FUN_0047db80  size=92

bool FUN_0047db80(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_2 + (*(ushort *)(DAT_0047dbdc + param_2) & 1) * 0x60 + param_3 * 4 +
                       0x10b0);
    puVar2[0xd] = param_1;
    *puVar2 = *puVar2 | 0x40000;
  }
  return iVar1 != 0;
}
