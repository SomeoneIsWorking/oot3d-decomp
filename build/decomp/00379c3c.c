// OoT3D decomp @ 00379c3c  name=FUN_00379c3c  size=112

void FUN_00379c3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  do {
    for (iVar2 = *(int *)(param_2 + iVar3 * 8 + 0x10); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x130))
    {
      iVar1 = FUN_00373074(param_1 + 0x3a58,(int)*(char *)(iVar2 + 0x1e));
      if (iVar1 == 0) {
        *(undefined4 *)(iVar2 + 0x140) = 0;
        *(undefined4 *)(iVar2 + 0x13c) = 0;
        *(uint *)(iVar2 + 4) = *(uint *)(iVar2 + 4) & 0xfffffffe;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc);
  return;
}
