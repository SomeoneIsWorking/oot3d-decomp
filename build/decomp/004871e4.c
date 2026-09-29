// OoT3D decomp @ 004871e4  name=FUN_004871e4  size=56

void FUN_004871e4(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;

  iVar1 = 0;
  for (; (iVar2 = *(int *)(param_2 + 0xe14), iVar1 < iVar2 && (param_3 != 0));
      param_3 = param_3 >> 1) {
    bVar3 = (param_3 & 1) != 0;
    if (bVar3) {
      iVar2 = param_2 + iVar1 * 0x20 + 0x1c00;
    }
    iVar1 = iVar1 + 1;
    if (bVar3) {
      *(undefined4 *)(iVar2 + 0x330) = param_1;
    }
  }
  return;
}
