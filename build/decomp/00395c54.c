// OoT3D decomp @ 00395c54  name=FUN_00395c54  size=600

void FUN_00395c54(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;

  iVar6 = *(int *)(DAT_00395f28 + param_2);
  *(short *)(param_1 + 0xfb4) = *(short *)(param_1 + 0xfb4) + 0xce4;
  fVar7 = (float)FUN_002cfca0();
  iVar5 = DAT_00395f30;
  *(short *)(param_1 + 0xfb2) = (short)(int)(fVar7 * DAT_00395f2c) + 0x96;
  if ((*(int *)(param_1 + 0xf9c) != 0) &&
     (iVar2 = *(int *)(param_1 + 0xf9c) + -1, *(int *)(param_1 + 0xf9c) = iVar2, iVar2 == 0)) {
    *(byte *)(iVar5 + 7) = *(byte *)(iVar5 + 7) & 0x7f;
  }
  if (((*(byte *)(param_1 + 0x10a0) & 2) != 0) &&
     (*(byte *)(param_1 + 0x10a0) = *(byte *)(param_1 + 0x10a0) & 0xfd,
     *(int *)(param_1 + 0x1094) == iVar6)) {
    FUN_00374bb8(DAT_00395f34,DAT_00395f34,param_2,param_1,(int)*(short *)(param_1 + 0x92));
  }
  if ((*(byte *)(iVar5 + 7) & 0x7f) != 0) {
    *(undefined4 *)(param_1 + 0x1e0) = DAT_00395f38;
    FUN_00375ed8(param_1,0,0xff,0,0xc);
    FUN_00375bcc(param_1,DAT_00395f3c);
  }
  iVar2 = FUN_003731e0(param_1 + 0x1a4);
  iVar6 = DAT_00395f40;
  bVar1 = 0;
  if (iVar2 != 0) {
    bVar1 = *(byte *)(iVar5 + 8);
  }
  if (iVar2 != 0 && 2 < bVar1) {
    *(byte *)(iVar5 + 8) = bVar1 + 1;
    iVar5 = 10;
    do {
      psVar3 = (short *)(iVar6 + iVar5 * 6);
      pfVar4 = (float *)(iVar6 + -0x138 + iVar5 * 0xc);
      FUN_0036aa20(*(float *)(param_1 + 0x28) + *pfVar4,*(float *)(param_1 + 0x2c) + pfVar4[1],
                   *(float *)(param_1 + 0x30) + pfVar4[2],param_2 + 0x208c,param_1,param_2,0xba,
                   (int)(short)(*psVar3 + *(short *)(param_1 + 0x34)),
                   (int)(short)(*(short *)(param_1 + 0x36) + psVar3[1]),
                   (int)(short)(*(short *)(param_1 + 0x38) + psVar3[2]),(int)(short)iVar5);
      iVar5 = iVar5 + -1;
    } while (5 < iVar5);
    *(undefined4 *)(param_1 + 0x50) = DAT_00395f44;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    *(undefined2 *)(param_1 + 0xf96) = 0;
    *(undefined2 *)(param_1 + 0xfa2) = 0;
    *(undefined4 *)(param_1 + 0xf90) = DAT_00395f48;
  }
  FUN_00375a18(param_1 + 0xbc,(int)*(short *)(param_1 + 0x34),1,200,0);
  FUN_00375a18(param_1 + 0xc0,(int)*(short *)(param_1 + 0x38),1,200,0);
  *(short *)(param_1 + 0xfb0) = *(short *)(param_1 + 0xfb0) + 0xc31;
  fVar8 = (float)FUN_00338f60();
  fVar7 = DAT_00395f50;
  *(float *)(param_1 + 0xfa4) = DAT_00395f50 + fVar8 * DAT_00395f4c;
  fVar8 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xfb0));
  *(float *)(param_1 + 0xfa8) = fVar7 + fVar8 * DAT_00395f54;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
