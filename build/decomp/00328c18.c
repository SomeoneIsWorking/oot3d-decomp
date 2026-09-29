// OoT3D decomp @ 00328c18  name=FUN_00328c18  size=136

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00328c18(int param_1,int param_2)

{
  float fVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  uint in_fpscr;
  float fVar7;

  sVar6 = *(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe);
  if (sVar6 < 0) {
    sVar6 = -sVar6;
  }
  if (DAT_00328ca0 <= sVar6) {
    if (((-1 < *(short *)(param_1 + 0x1c)) &&
        (iVar3 = FUN_0035e600(DAT_0033018c,param_1,param_2,
                              (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff)), iVar3 == 0)) &&
       (iVar3 = FUN_0035e600(DAT_00330190,param_1,param_2,
                             (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff)), iVar3 == 0)) {
      FUN_00370350(DAT_0032fbb4,param_1 + 0x1a4,0);
      *(undefined4 *)(param_1 + 0xa48) = 5;
      if (-1 < *(short *)(param_1 + 0x1c)) {
        uVar4 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
        *(short *)(param_1 + 0xa6a) = (short)uVar4;
        uVar2 = FUN_003262b8(param_1 + 0x28,uVar4,(int)*(short *)(param_1 + 0xa6c),param_2);
        *(undefined2 *)(param_1 + 0xa6e) = uVar2;
        *(undefined4 *)(param_1 + 0xa50) = 0;
      }
      uVar4 = DAT_0032fbbc;
      *(undefined4 *)(param_1 + 0x6c) = DAT_0032fbb8;
      *(undefined4 *)(param_1 + 0xa54) = uVar4;
      return;
    }
    FUN_0036e734(param_1 + 0x1a4,0xc);
    iVar3 = *(int *)(DAT_00330194 + param_2);
    FUN_00375a18(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),1,4000);
    sVar6 = *(short *)(iVar3 + 0xbe);
    fVar7 = (float)FUN_002cfca0((int)(short)(sVar6 - *(short *)(param_1 + 0xbe)));
    fVar1 = DAT_00330198;
    uVar4 = DAT_0033019c;
    if ((DAT_00330198 <= fVar7) ||
       (fVar7 = (float)FUN_002cfca0((int)(short)(sVar6 - *(short *)(param_1 + 0xbe))),
       uVar4 = DAT_003301a0, fVar7 < fVar1)) {
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0xbe) + 0x3fff;
    *(float *)(param_1 + 0xa74) = fVar1;
    *(undefined4 *)(param_1 + 0xa50) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if (((*(int *)(param_1 + 0x98) <= DAT_00328ca4) && ((*(uint *)(DAT_00328ca8 + param_2) & 7) != 0))
     && (iVar3 = FUN_00328cac(param_2,param_1), iVar3 != 0)) {
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,3);
    uVar4 = DAT_00330240;
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_00330244,DAT_00330240,uVar5,DAT_0033023c,param_1 + 0x1a4,3,2);
    uVar5 = DAT_0033024c;
    if (*(short *)(param_1 + 0x1c) == -2) {
      *(undefined4 *)(param_1 + 0x1e4) = DAT_00330248;
    }
    *(byte *)(param_1 + 0xaec) = *(byte *)(param_1 + 0xaec) & 0xfb;
    *(undefined4 *)(param_1 + 0xa48) = 9;
    FUN_00375bcc(param_1,uVar5);
    uVar5 = DAT_00330250;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0xa54) = uVar5;
    return;
  }
  FUN_0034eb00(param_1);
  return;
}
