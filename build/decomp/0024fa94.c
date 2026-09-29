// OoT3D decomp @ 0024fa94  name=FUN_0024fa94  size=436

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0024fa94(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;

  iVar6 = *(int *)(iRam0024fcfc + param_2);
  sVar2 = *(short *)(param_1 + 0x92) - (*(short *)(param_1 + 0xa58) + *(short *)(param_1 + 0xbe));
  if (sVar2 < 0) {
    sVar2 = -sVar2;
  }
  FUN_003731e0(param_1 + 0x1a4);
  iVar4 = FUN_0032fdf8(param_2,param_1);
  if (iVar4 != 0) {
    return;
  }
  if (*(short *)(param_1 + 0x1c) == -2) {
    if (*(short *)(param_1 + 0xa60) == 0) {
      iVar4 = FUN_0032fbc0(param_2,param_1);
      if (iVar4 != 0) {
        return;
      }
    }
    else {
      *(short *)(param_1 + 0xa60) = *(short *)(param_1 + 0xa60) + -1;
      if (iRam0024fd00 <= sVar2) {
        return;
      }
      *(undefined2 *)(param_1 + 0xa60) = 0;
    }
  }
  sVar2 = *(short *)(iVar6 + 0xbe) - *(short *)(param_1 + 0xbe);
  if (sVar2 < 0) {
    sVar2 = -sVar2;
  }
  if (((*(int *)(param_1 + 0x98) < iRam0024fd04) && (*(char *)(iRam0024fd08 + iVar6) != '\0')) &&
     (7999 < sVar2)) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
    if (((-1 < *(short *)(param_1 + 0x1c)) &&
        (iVar6 = FUN_0035e600(DAT_0033018c,param_1,param_2,
                              (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff)), iVar6 == 0)) &&
       (iVar6 = FUN_0035e600(DAT_00330190,param_1,param_2,
                             (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff)), iVar6 == 0)) {
      FUN_00370350(DAT_0032fbb4,param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 0xa48) = 5;
      if (-1 < *(short *)(param_1 + 0x1c)) {
        uVar5 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
        *(short *)(param_1 + 0xa6a) = (short)uVar5;
        uVar3 = FUN_003262b8(param_1 + 0x28,uVar5,(int)*(short *)(param_1 + 0xa6c),param_2);
        *(undefined2 *)(param_1 + 0xa6e) = uVar3;
        *(undefined4 *)(param_1 + 0xa50) = 0;
      }
      uVar5 = DAT_0032fbbc;
      *(undefined4 *)(param_1 + 0x6c) = DAT_0032fbb8;
      *(undefined4 *)(param_1 + 0xa54) = uVar5;
      return;
    }
    FUN_0036e734(param_1 + 0x1a4,0xc);
    iVar6 = *(int *)(DAT_00330194 + param_2);
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
    sVar2 = *(short *)(iVar6 + 0xbe);
    fVar7 = (float)FUN_002cfca0((int)(short)(sVar2 - *(short *)(param_1 + 0xbe)));
    fVar1 = DAT_00330198;
    uVar5 = DAT_0033019c;
    if ((DAT_00330198 <= fVar7) ||
       (fVar7 = (float)FUN_002cfca0((int)(short)(sVar2 - *(short *)(param_1 + 0xbe))),
       uVar5 = DAT_003301a0, fVar7 < fVar1)) {
      *(undefined4 *)(param_1 + 0x6c) = uVar5;
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 0x3fff;
    *(float *)(param_1 + 0xa74) = fVar1;
    *(undefined4 *)(param_1 + 0xa50) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (*(int *)(param_1 + 0xa5c) == 0) {
    iVar6 = FUN_0036f18c(param_1,uRam0024fd0c);
    if (iVar6 != 0) {
      if (uRam0024fd10 <= *(int *)(param_1 + 0x98) + 0xbd37ffffU) {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    FUN_00370350(uRam0024fd44,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0xa48) = 6;
    *(undefined4 *)(param_1 + 0xa54) = uRam0024fd48;
    if ((*(uint *)(iRam0024fd3c + param_2) & 0x5f) == 0) {
      FUN_0037547c(uRam0024fd40,param_1 + 0x28,4,DAT_00375c04);
      return;
    }
  }
  else {
    *(int *)(param_1 + 0xa5c) = *(int *)(param_1 + 0xa5c) + -1;
  }
  return;
}
