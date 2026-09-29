// OoT3D decomp @ 0039980c  name=FUN_0039980c  size=1952

void FUN_0039980c(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  uint in_fpscr;
  float fVar11;
  short asStack_ae [3];
  short asStack_a8 [3];
  short asStack_a2 [33];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;

  iVar8 = *(int *)(iRam00399c18 + param_2);
  fStack_54 = *(float *)(iVar8 + 0x28);
  fStack_4c = *(float *)(iVar8 + 0x30);
  fStack_50 = *(float *)(iVar8 + 0x2c) + fRam00399c1c;
  FUN_003731e0(param_1 + 0x1a4);
  FUN_0031cb28(param_1);
  uVar4 = uRam00399c24;
  if (0x11 < *(byte *)(iRam00399c20 + 8)) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,0xd);
    VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0(uVar4);
  }
  if ((*(byte *)(iRam00399c20 + 7) & 0x7e) == 0) {
    fStack_50 = fStack_50 + fRam00399c38;
    sVar2 = FUN_003758b0(*(float *)(param_1 + 0xfc0) - fStack_4c,
                         *(float *)(param_1 + 0xfb8) - fStack_54);
    fVar1 = fRam00399c44;
    uVar10 = uRam00399c40;
    iStack_38 = param_1 + 0xfea;
    iStack_3c = param_1 + 0xff6;
    sVar3 = sVar2 - *(short *)(param_1 + 0xbe);
    iStack_40 = param_1 + 0xfee;
    iStack_44 = param_1 + 0xff4;
    if ((((uRam00399c3c < (int)sVar3 + 18000U) && (*(char *)(param_1 + 0xf95) == '\0')) ||
        ((*(byte *)(iRam00399c20 + 7) & 0x80) != 0)) ||
       ((*(uint *)(iRam00399c48 + iVar8) & 0x4000000) != 0)) {
      if ((*(char *)(param_1 + 0xf95) != '\0') || (*(short *)(param_1 + 4000) < 0)) {
        if ((*(byte *)(iRam0039a090 + param_1) & 2) == 0) {
          if (0 < *(short *)(param_1 + 4000)) {
            *(undefined2 *)(param_1 + 4000) = 0;
          }
        }
        else if (0 < *(short *)(param_1 + 4000)) {
          FUN_00375bcc(param_1,uRam0039a094);
          *(undefined2 *)(param_2 + 0x31fc) = 10;
          *(undefined2 *)(param_2 + 0x31fe) = 10;
          *(undefined2 *)(param_2 + 0x3200) = 10;
          *(undefined2 *)(param_2 + 0x3202) = 0x73;
          *(undefined2 *)(param_2 + 0x3204) = 0x41;
          *(undefined2 *)(param_2 + 0x3206) = 100;
          *(undefined2 *)(param_2 + 0x3208) = 0x78;
          *(undefined2 *)(param_2 + 0x320a) = 0x78;
          *(undefined2 *)(param_2 + 0x320c) = 0x46;
          *(undefined2 *)(param_1 + 4000) = 0xffff;
          *(undefined1 *)(*(int *)(param_1 + 0x124) + 0xf94) = 6;
        }
        if ((*(short *)(param_1 + 4000) < 0) && ((*(uint *)(iRam00399c48 + iVar8) & 0x4000000) != 0)
           ) {
          FUN_0031f5a8(fVar1,fVar1,fVar1,param_2,param_1,1,0x1e,6,1);
        }
      }
      uVar4 = uRam00399c58;
      FUN_00375a18(iStack_38,0,1,uRam00399c58,0);
      FUN_00375a18(param_1 + 0xff0,0,1,uVar4,0);
      FUN_00375a18(iStack_40,0,1,uVar4,0);
      FUN_00375a18(iStack_3c,(int)(short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0xbc)),1
                   ,uVar4,0);
      FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x9c,&uStack_5c,0);
      FUN_00375a18(iStack_44,(int)(short)uStack_58,1,uVar4,0);
      FUN_0036e168(uVar10,uVar10,uRam0039a098,fVar1,param_1 + 0x1e4);
      *(undefined1 *)(param_1 + 0xf95) = 0;
      return;
    }
    if (*(char *)(param_1 + 0xf95) == '\0') {
      iVar9 = (int)sVar3;
      iVar8 = iVar9;
      if ((uRam00399c4c < iVar9 + 6000U) && (iVar8 = iRam00399c50, iVar9 < 1)) {
        iVar8 = ((int)uRam00399c4c >> 1) - uRam00399c4c;
      }
      iStack_48 = FUN_00375a18(iStack_38,iVar8,1,uRam00399c54,0);
      if (iStack_48 < 0) {
        iStack_48 = -iStack_48;
      }
      iVar9 = (int)(short)(sVar2 - (short)iVar8);
      iVar8 = iVar9;
      if ((uRam00399c4c < iVar9 + 6000U) && (iVar8 = iRam00399c50, iVar9 < 1)) {
        iVar8 = ((int)uRam00399c4c >> 1) - uRam00399c4c;
      }
      iVar8 = FUN_00375a18(param_1 + 0xff0,iVar8,1,uRam00399c54,0);
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      iVar8 = iVar8 + iStack_48;
      sVar3 = FUN_003758b0(fStack_4c - *(float *)(param_1 + 0xfd8),
                           fStack_54 - *(float *)(param_1 + 0xfd0));
      iVar9 = FUN_00375a18(iStack_3c,(int)(short)(sVar3 + -0x4000),1,uRam00399c58,0);
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x34,asStack_ae,0);
      FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x68,asStack_a8,0);
      FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x9c,asStack_a2,0);
      sVar3 = *(short *)(param_1 + 0xbc);
      sVar2 = FUN_0037587c(&fStack_54,param_1 + 0xfc4);
      iVar5 = FUN_00375a18(iStack_40,
                           (int)(short)(sVar2 - (sVar3 + asStack_ae[0] +
                                                asStack_a8[0] + asStack_a2[0])),1,uRam00399c5c,0);
      if (iVar5 < 0) {
        iVar5 = -iVar5;
      }
      sVar3 = FUN_0037587c(param_1 + 0xfd0,&fStack_54);
      iVar6 = FUN_00375a18(iStack_44,(int)-sVar3,1,uRam00399c5c,0);
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      *(float *)(param_1 + 0x1e4) = fVar1;
      fVar11 = (float)FUN_0036e168(fVar1,uVar10,uVar4,fVar1,param_1 + 0x1e0);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar11 == fVar1) << 0x1e;
      if ((SUB41(in_fpscr >> 0x1e,0)) && ((uint)(iVar5 + iVar9 + iVar8 + iVar6) < 600)) {
        *(undefined2 *)(param_1 + 4000) = 0;
        *(char *)(param_1 + 0xf95) = *(char *)(param_1 + 0xf95) + '\x01';
        *(float *)(param_1 + 0xfdc) = fStack_54;
        *(float *)(param_1 + 0xfe0) = fStack_50;
        *(float *)(param_1 + 0xfe4) = fStack_4c;
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (*(char *)(param_1 + 0xf95) == '\0') {
        return;
      }
    }
    uVar4 = uRam0039a07c;
    if (*(char *)(param_1 + 0xf95) == '\x02') {
      return;
    }
    iVar8 = (int)*(short *)(param_1 + 4000);
    if (iVar8 < 0x18) {
      uVar4 = VectorSignedToFloat((iVar8 >> 1) + 1,(byte)(in_fpscr >> 0x15) & 3);
      FUN_0031f5a8(uRam0039a07c,fVar1,uVar4,param_2,param_1,2,0x32,5,1);
      if (*(short *)(param_1 + 4000) == 0x15) {
        *(undefined2 *)(param_2 + 0x31fc) = 10;
        *(undefined2 *)(param_2 + 0x31fe) = 10;
        *(undefined2 *)(param_2 + 0x3200) = 10;
        *(undefined2 *)(param_2 + 0x3202) = 0x73;
        *(undefined2 *)(param_2 + 0x3204) = 0x41;
        *(undefined2 *)(param_2 + 0x3206) = 100;
        *(undefined2 *)(param_2 + 0x3208) = 0x78;
        *(undefined2 *)(param_2 + 0x320a) = 0x78;
        *(undefined2 *)(param_2 + 0x320c) = 0x46;
      }
      if (*(short *)(param_1 + 4000) == 6) {
        uStack_60 = *(undefined4 *)(param_1 + 0xfd0);
        uStack_5c = *(undefined4 *)(param_1 + 0xfd4);
        uStack_58 = *(undefined4 *)(param_1 + 0xfd8);
        sVar3 = 0;
        puVar7 = puRam0039a09c;
        do {
          if (*(char *)(puVar7 + 9) == '\0') {
            *(undefined1 *)(puVar7 + 9) = 5;
            puVar7[0x15] = param_1;
            *puVar7 = uStack_60;
            puVar7[1] = uStack_5c;
            puVar7[2] = uStack_58;
            uVar4 = puRam0039a0a0[1];
            uVar10 = puRam0039a0a0[2];
            puVar7[6] = *puRam0039a0a0;
            puVar7[7] = uVar4;
            puVar7[8] = uVar10;
            puVar7[3] = puVar7[6];
            puVar7[4] = puVar7[7];
            puVar7[5] = puVar7[8];
            *(undefined2 *)(puVar7 + 10) = 0;
            *(short *)((int)puVar7 + 0x2a) = *(short *)(param_1 + 0xffa) + 0x4000;
            *(undefined2 *)(puVar7 + 0xb) = *(undefined2 *)(param_1 + 0xffc);
                    /* WARNING: Subroutine does not return */
            FUN_003759d0();
          }
          sVar3 = sVar3 + 1;
          puVar7 = puVar7 + 0x17;
        } while (sVar3 < 200);
      }
    }
    else {
      if (iVar8 == 0x1b) {
        FUN_00375bcc(param_1,uRam0039a080);
      }
      FUN_0031f5a8(uVar4,uVar4,uRam0039a084,param_2,param_1,2,0x6e,3,1);
      FUN_0031f5a8(uVar4,uVar4,uRam0039a088,param_2,param_1,2,0x6e,3,1);
      FUN_0031f5a8(uVar4,uVar4,uRam0039a08c,param_2,param_1,2,0x6e,3,1);
      FUN_003761f0(param_2);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1158);
    }
    sVar3 = *(short *)(param_1 + 4000) + 1;
    *(short *)(param_1 + 4000) = sVar3;
    if (0x23 < sVar3) {
      *(undefined1 *)(param_1 + 0xf95) = 0;
    }
    return;
  }
  FUN_003a5e24(param_1,param_2);
  return;
}
