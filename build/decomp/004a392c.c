// OoT3D decomp @ 004a392c  name=FUN_004a392c  size=80

void FUN_004a392c(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    puVar2 = *(uint **)(param_1 + (*(ushort *)(DAT_004a397c + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    *(undefined1 *)(puVar2 + 0x28) = 1;
    *puVar2 = *puVar2 | 0x10000;
  }
  return;
}
