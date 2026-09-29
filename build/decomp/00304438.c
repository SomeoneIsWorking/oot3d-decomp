// OoT3D decomp @ 00304438  name=FUN_00304438  size=256

undefined4 FUN_00304438(int *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;

  iVar5 = 0;
  bVar1 = *(byte *)*param_1;
  if (1 < bVar1) {
    bVar1 = 3;
  }
  *param_2 = bVar1;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(*param_1 + 0x14);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*param_1 + 4);
  param_2[1] = *(char *)(*param_1 + 1) == '\x01';
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(*param_1 + 8);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*param_1 + 0xc);
  if (0 < *(int *)(*param_1 + 0x14)) {
    do {
      if (iVar5 < 2) {
        iVar2 = FUN_0040f6dc(*param_1,iVar5);
        if (*(int *)(iVar2 + 0xc) != 0) {
          iVar3 = FUN_0040f6c4(iVar2);
          FUN_0034338c(param_2 + iVar5 * 0x30 + 0x18,iVar3,0x26);
          FUN_0035fb94(param_2 + iVar5 * 0x30 + 0x3e,iVar3 + 0x26);
        }
        uVar4 = FUN_0040f6d0(iVar2,param_1[1]);
        *(undefined4 *)(param_2 + iVar5 * 0x30 + 0x14) = uVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(*param_1 + 0x14));
  }
  return 1;
}
