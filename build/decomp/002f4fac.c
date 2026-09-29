// OoT3D decomp @ 002f4fac  name=FUN_002f4fac  size=216

void FUN_002f4fac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  uVar2 = DAT_002f5088;
  uVar1 = DAT_002f5084;
  iVar3 = 0;
  do {
    iVar5 = iVar3 + 5;
    iVar4 = *(int *)(param_1 + iVar5 * 4 + 0xaf8);
    *(undefined1 *)(iVar4 + 0x6c) = 1;
    FUN_00344670(iVar4,iVar3 + 0xf);
    *(undefined4 *)(iVar4 + 0x80) = uVar1;
    *(undefined4 *)(iVar4 + 0x84) = uVar2;
    if (iVar3 - 3U < 3) {
      FUN_00307840(param_1 + 0x2e0,1,iVar5,0x16,1);
    }
    else if (5 < iVar3) {
      FUN_00307840(param_1 + 0x2e0,1,iVar5,0x17,1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  FUN_00344670(*(undefined4 *)(param_1 + 0xc60),param_2);
  *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
  return;
}
