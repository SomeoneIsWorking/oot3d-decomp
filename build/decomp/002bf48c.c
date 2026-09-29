// OoT3D decomp @ 002bf48c  name=FUN_002bf48c  size=92

bool FUN_002bf48c(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_002bf4e8 + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(ushort *)(puVar2 + 0x28) = (ushort)puVar2[0x28] & 0xff00;
    *puVar2 = *puVar2 | 0x10000;
  }
  return iVar1 != 0;
}
