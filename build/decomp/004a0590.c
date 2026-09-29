// OoT3D decomp @ 004a0590  name=FUN_004a0590  size=172

void FUN_004a0590(int param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;

  iVar2 = *(int *)(*(int *)(param_1 + param_2 * 4 + 0x19c0) + 0x68);
  if ((param_3[1] == *(ushort *)(iVar2 + 4)) &&
     (*(uint *)(iVar2 + 8) = *(uint *)(param_3 + 2) >> 0x10 | *(uint *)(param_3 + 2) << 0x10,
     (*param_3 & 0xff00) != 0)) {
    FUN_004a3bb4(iVar2,param_3[4]);
  }
  if (*(char *)(DAT_004a063c + 0x19) == '\0') {
    if (*(char *)(iVar2 + 0x7f) != '\0') {
      *(undefined1 *)(iVar2 + 0x7f) = 0;
      return;
    }
    uVar1 = *param_3;
  }
  else {
    uVar1 = *param_3;
  }
  *(bool *)(iVar2 + 0xc) = (uVar1 & 0xff) == 1;
  return;
}
