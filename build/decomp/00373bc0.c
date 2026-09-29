// OoT3D decomp @ 00373bc0  name=FUN_00373bc0  size=44

int FUN_00373bc0(undefined4 param_1,int param_2)

{
  int iVar1;

  if (((*(byte *)(param_2 + 0x11) & 2) == 0) ||
     (iVar1 = *(int *)(param_2 + 8), *(char *)(iVar1 + 2) != '\x03')) {
    iVar1 = 0;
  }
  else {
    *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xfd;
  }
  return iVar1;
}
