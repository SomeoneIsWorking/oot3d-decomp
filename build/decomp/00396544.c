// OoT3D decomp @ 00396544  name=FUN_00396544  size=1328

void FUN_00396544(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  short *psVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  int iStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;

  iVar9 = *(int *)(iRam00396894 + param_2);
  uStack_44 = FUN_003758b0(*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30),
                           *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28));
  *(short *)(param_1 + 0xfb4) = *(short *)(param_1 + 0xfb4) + 0xce4;
  fVar12 = (float)FUN_002cfca0();
  *(short *)(param_1 + 0xfb2) = (short)(int)(fVar12 * fRam00396898) + 0x96;
  if (((*(byte *)(param_1 + 0x10a0) & 2) != 0) &&
     (*(byte *)(param_1 + 0x10a0) = *(byte *)(param_1 + 0x10a0) & 0xfd,
     *(int *)(param_1 + 0x1094) == iVar9)) {
    FUN_00374bb8(uRam0039689c,uRam0039689c,param_2,param_1,(int)*(short *)(param_1 + 0x92));
    fVar12 = (float)FUN_003738a8(uRam003968a0);
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + (short)(int)fVar12 + -0x8000;
    FUN_00375bcc(iVar9,uRam003968a4);
  }
  fVar4 = fRam003968b4;
  iVar3 = iRam003968b0;
  fVar12 = fRam003968ac;
  uVar2 = uRam003968a8;
  if ((*(byte *)(param_1 + 0x10a1) & 2) == 0) {
    *(undefined1 *)(iRam003968b0 + 7) = 0;
    if (*(int *)(param_1 + 0xf9c) == 0) {
      iVar8 = FUN_00375a18(param_1 + 0xffc,4000,1,300,0);
      uVar5 = uRam003968bc;
      if (iVar8 == 0) {
        if (*(float *)(param_1 + 0x6c) == fVar12) {
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
        }
        FUN_0036e168(uVar2,fVar4,uVar5,param_1 + 0x6c);
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    }
    else {
      iVar8 = *(int *)(param_1 + 0xf9c) + -1;
      *(int *)(param_1 + 0xf9c) = iVar8;
      if (iVar8 < 0x35) {
        *(undefined1 *)(iVar3 + 7) = 0x80;
      }
      FUN_00375a18(param_1 + 0xffc,0,1,300,0);
      FUN_0036e168(fVar12,fVar4,uRam003968c0,fVar12,param_1 + 0x6c);
      FUN_0036e168(uRam003968c8,fVar4,uRam003968c4,fVar12,param_1 + 0xc4);
    }
  }
  else {
    *(float *)(param_1 + 0x1e0) = fRam003968ac;
    FUN_00375ed8(param_1,0,0xff,0,0xc);
    FUN_00375bcc(param_1,uRam003968b8);
    *(undefined1 *)(iVar3 + 7) = 1;
    *(undefined4 *)(param_1 + 0xf9c) = 0x83;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    iStack_50 = VectorSignedToFloat((int)*(short *)(param_1 + 0x10b6),(byte)(in_fpscr >> 0x15) & 3);
    iStack_4c = VectorSignedToFloat((int)*(short *)(param_1 + 0x10b8),(byte)(in_fpscr >> 0x15) & 3);
    uStack_48 = VectorSignedToFloat((int)*(short *)(param_1 + 0x10ba),(byte)(in_fpscr >> 0x15) & 3);
    FUN_00365560(param_2,**(undefined4 **)(param_1 + 0x10cc),0,&iStack_50,
                 (int)*(short *)(iVar3 + 0x10));
  }
  fVar14 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x28);
  fVar13 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x30);
  if ((int)SQRT(fVar14 * fVar14 + fVar13 * fVar13) < iRam003968cc) {
    if (*(char *)(iRam003968d0 + iVar9) == '\0') {
      if ((*(uint *)(iRam003968d4 + param_2) & 0x80) == 0) {
        FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),1,300,0);
      }
      else {
        FUN_00375a18(param_1 + 0x36,uStack_44,1,600,0);
      }
    }
    else {
      FUN_00375a18(param_1 + 0x36,(int)(short)(*(short *)(param_1 + 0x92) + -0x8000),1,300,0);
    }
  }
  else {
    FUN_00375a18(param_1 + 0x36,uStack_44,1,1000,0);
  }
  if (*(char *)(iVar3 + 10) != '\0') {
    *(float *)(param_1 + 0x6c) = fVar12;
  }
  FUN_00376864(param_1);
  iVar9 = FUN_00370734(param_1 + 0x1a4);
  bVar1 = 0;
  if (iVar9 != 0) {
    bVar1 = *(byte *)(iVar3 + 8);
  }
  if (iVar9 != 0 && 0xe < bVar1) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined2 *)(param_1 + 0xfb0) = 0;
    *(undefined2 *)(param_1 + 0xffc) = 0;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + *(short *)(param_1 + 0xffc);
  if (*(char *)(iVar3 + 8) == '\t') {
    FUN_0036e168(uRam00396c2c,fVar4,uRam00396c28,fVar12,param_1 + 0xc4);
  }
  else {
    FUN_0036e168(uRam00396c30,fVar4,uRam00396c28,fVar12,param_1 + 0xc4);
  }
  iVar9 = iRam00396c38;
  bVar11 = *(uint *)(param_1 + 0xc4) == uRam00396c34;
  if (*(uint *)(param_1 + 0xc4) <= uRam00396c34) {
    bVar11 = *(char *)(iVar3 + 8) == '\t';
  }
  if (bVar11) {
    iStack_40 = param_2 + 0x208c;
    iVar8 = 0xf;
    iVar10 = iRam00396c38 + -0x138;
    do {
      psVar6 = (short *)(iVar9 + iVar8 * 6);
      iStack_4c = (int)(short)iVar8;
      iStack_50 = (int)(short)(*(short *)(param_1 + 0x38) + psVar6[2]);
      pfVar7 = (float *)(iVar10 + iVar8 * 0xc);
      FUN_0036aa20(*(float *)(param_1 + 0x28) + *pfVar7,*(float *)(param_1 + 0x2c) + pfVar7[1],
                   *(float *)(param_1 + 0x30) + pfVar7[2],iStack_40,param_1,param_2,0xba,
                   (int)(short)(*psVar6 + *(short *)(param_1 + 0x34)),
                   (int)(short)(*(short *)(param_1 + 0x36) + psVar6[1]));
      iVar8 = iVar8 + -1;
    } while (10 < iVar8);
    *(char *)(iVar3 + 8) = *(char *)(iVar3 + 8) + '\x01';
  }
  *(short *)(param_1 + 0xfb0) = *(short *)(param_1 + 0xfb0) + 0xc31;
  fVar12 = (float)FUN_00338f60();
  *(float *)(param_1 + 0xfa4) = fVar4 + fVar12 * fRam00396c3c;
  fVar13 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xfb0));
  fVar12 = fRam00396c44;
  *(float *)(param_1 + 0xfa8) = fVar4 + fVar13 * fRam00396c40;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar12;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
