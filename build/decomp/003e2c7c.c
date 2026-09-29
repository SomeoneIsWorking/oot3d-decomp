// OoT3D decomp @ 003e2c7c  name=FUN_003e2c7c  size=492

void FUN_003e2c7c(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;

  iVar6 = *(int *)(DAT_003e2fc0 + param_2);
  FUN_003731e0(param_1 + 0x1e0);
  if (*(short *)(param_1 + 0xbf6) != 0) {
    if (0x4000 < (int)(short)(*(short *)(param_1 + 0x92) -
                             (*(short *)(param_1 + 0xbe) + *(short *)(DAT_003e2fc4 + param_1))) +
                 0x2000U) {
      *(short *)(param_1 + 0xbf6) = *(short *)(param_1 + 0xbf6) + -1;
      return;
    }
    *(undefined2 *)(param_1 + 0xbf6) = 0;
  }
  sVar1 = *(short *)(param_1 + 0x92);
  sVar2 = *(short *)(param_1 + 0xbe);
  iVar4 = FUN_00365444(param_2,param_1);
  uVar5 = DAT_003e2fc8;
  if (iVar4 == 0) {
    if (*(short *)(param_1 + 0xbf4) == 0) {
      iVar4 = FUN_003650d0(param_2,param_1,0);
      if (iVar4 != 0) {
        return;
      }
    }
    else {
      *(short *)(param_1 + 0xbf4) = *(short *)(param_1 + 0xbf4) + -1;
      if (uVar5 < (int)(short)(sVar1 - sVar2) + 0x1ffdU) {
        return;
      }
      *(undefined2 *)(param_1 + 0xbf4) = 0;
    }
    if (*(int *)(param_1 + 0x98) < (int)DAT_003e2fcc) {
      bVar7 = *(char *)(DAT_003e2fd0 + iVar6) != '\0';
      uVar5 = 0;
      uVar3 = DAT_003e2fcc;
      if (bVar7) {
        uVar5 = (int)(short)(*(short *)(iVar6 + 0xbe) - *(short *)(param_1 + 0xbe)) + 7999;
        uVar3 = DAT_003e2fd4;
      }
      if (bVar7 && uVar3 < uVar5) {
        *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
        FUN_0035b818(param_1);
        return;
      }
    }
    iVar6 = *(int *)(param_1 + 0xbfc) + -1;
    *(int *)(param_1 + 0xbfc) = iVar6;
    if (iVar6 == 0) {
      iVar6 = FUN_0036f18c(param_1,DAT_003e2fd8);
      if (iVar6 != 0) {
        if ((uint)(DAT_003e2fe0 + *(int *)(param_1 + 0x98)) < DAT_003e2fe4) {
                    /* WARNING: Subroutine does not return */
          FUN_003759d0();
        }
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      FUN_00370350(DAT_003e2fdc,param_1 + 0x1e0,7);
      *(undefined4 *)(param_1 + 0xbe8) = 9;
      *(undefined4 *)(param_1 + 0xbf0) = DAT_003e301c;
      if ((*(uint *)(DAT_003e3014 + param_2) & 0x5f) == 0) {
        FUN_00375bcc(param_1,DAT_003e3018);
        return;
      }
    }
  }
  return;
}
