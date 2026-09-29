// OoT3D decomp @ 00373d0c  name=FUN_00373d0c  size=48

void FUN_00373d0c(int param_1)

{
  int iVar1;

  FUN_0034ec14();
  iVar1 = *(int *)(DAT_00373d3c + param_1);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x29b8) = *(uint *)(iVar1 + 0x29b8) & 0xfffffdff;
  }
  return;
}
