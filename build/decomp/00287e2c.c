// OoT3D decomp @ 00287e2c  name=FUN_00287e2c  size=252

void FUN_00287e2c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar2 = FUN_003705a0(DAT_00287f28,DAT_00287f2c,param_2 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = 0;
    iVar2 = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    do {
      iVar4 = iVar3 + 1;
      *(undefined4 *)(param_2 + iVar3 * 4 + 0x44) = 0;
      iVar2 = iVar2 + 2;
      iVar3 = iVar3 + 2;
      *(undefined4 *)(param_2 + iVar4 * 4 + 0x44) = 0;
      iVar4 = DAT_00287f34;
      piVar1 = DAT_00287f30;
    } while (iVar2 < 0x10);
    DAT_00287f30[2] = 0;
    piVar1[0x539] = 0;
    if (*(char *)(iVar4 + 1) != '\0') {
      iVar2 = *piVar1;
      bVar5 = iVar2 == 0x28a || iVar2 == 0x28e;
      if (iVar2 != 0x28a && iVar2 != 0x28e) {
        bVar5 = iVar2 == 0x292;
      }
      if (!bVar5) {
        bVar5 = iVar2 == 0x476;
      }
      if (bVar5) {
        FUN_00338654(param_1,(int)*(short *)(iVar4 + 8),(int)(short)*(undefined4 *)(param_2 + 0x24))
        ;
      }
      FUN_00320d7c(param_1,(int)*(short *)(iVar4 + 8),7);
      FUN_0036963c(param_1,(int)(short)*(undefined4 *)(param_2 + 0x24));
      FUN_0036ae48(*(undefined4 *)(param_1 + *(short *)(iVar4 + 8) * 4 + 0xa54));
    }
    FUN_0033d13c(0);
    *(undefined1 *)(DAT_00287f38 + param_1) = 0;
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}
