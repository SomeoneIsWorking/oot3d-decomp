// OoT3D decomp @ 00367494  name=FUN_00367494  size=76

void FUN_00367494(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;

  *(undefined1 *)(DAT_003674e0 + param_1) = 1;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x21a0) = 0;
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar3 = iVar2 + 1;
    *(undefined4 *)(param_2 + iVar2 * 4 + 0x44) = 0;
    iVar1 = iVar1 + 2;
    iVar2 = iVar2 + 2;
    *(undefined4 *)(param_2 + iVar3 * 4 + 0x44) = 0;
  } while (iVar1 < 0x10);
  return;
}
