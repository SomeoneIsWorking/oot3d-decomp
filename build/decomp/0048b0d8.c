// OoT3D decomp @ 0048b0d8  name=FUN_0048b0d8  size=152

void FUN_0048b0d8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  uVar2 = DAT_0048b174;
  uVar1 = DAT_0048b170;
  iVar3 = 0;
  do {
    iVar4 = *(int *)(param_1 + (iVar3 + 5) * 4 + 0xaf8);
    if (iVar3 - 3U < 3) {
      *(undefined1 *)(iVar4 + 0x6c) = 0;
    }
    else {
      *(undefined1 *)(iVar4 + 0x6c) = 1;
      FUN_00344670(iVar4,iVar3 + 5);
      *(undefined4 *)(iVar4 + 0x80) = uVar1;
      *(undefined4 *)(iVar4 + 0x84) = uVar2;
      FUN_00307840(param_1 + 0x2e0,1,iVar3 + 5,0x14,1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
  return;
}
