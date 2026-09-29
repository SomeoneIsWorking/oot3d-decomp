// OoT3D decomp @ 001ce204  name=FUN_001ce204  size=724

void FUN_001ce204(int param_1,int param_2)

{
  ushort uVar1;
  float fVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;

  iVar5 = DAT_001ce4dc;
  fVar2 = DAT_001ce4d8;
  do {
    while( true ) {
      pbVar7 = (byte *)(*(int *)(param_2 + 0x5c20) + ((*(ushort *)(param_1 + 0x1c) & 0xff00) >> 5));
      psVar3 = (short *)(*(int *)(pbVar7 + 4) + *(int *)(param_1 + 0xaa8) * 6);
      fVar8 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 - *(float *)(param_1 + 0x28);
      fVar9 = (float)VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 - *(float *)(param_1 + 0x30);
      fVar10 = (float)FUN_003696ec(fVar8,fVar9);
      fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9);
      if (iVar5 < (int)fVar8) goto LAB_001ce37c;
      if (*(int *)(param_1 + 0xabc) != 0) break;
      iVar4 = *(int *)(param_1 + 0xaa8) + 1;
      *(int *)(param_1 + 0xaa8) = iVar4;
      if (iVar4 < (int)(uint)*pbVar7) {
        *(undefined4 *)(param_1 + 0xac0) = 1;
      }
      else {
        if ((*(ushort *)(param_1 + 0xac4) & 0x20) != 0) {
          *(uint *)(param_1 + 0xaa8) = *pbVar7 - 2;
          *(undefined4 *)(param_1 + 0xabc) = 1;
          *(undefined4 *)(param_1 + 0xac0) = 0;
          if ((*(ushort *)(param_1 + 0xac4) & 0x400) != 0) {
            *(undefined4 *)(param_1 + 0xaf0) = 2;
            FUN_0034b760(param_1,0,param_1 + 0xab0);
            *(undefined4 *)(param_1 + 0xa48) = DAT_001ce4e0;
            return;
          }
          goto LAB_001ce37c;
        }
        *(undefined4 *)(param_1 + 0xaa8) = 0;
      }
    }
    iVar4 = *(int *)(param_1 + 0xaa8) + -1;
    *(int *)(param_1 + 0xaa8) = iVar4;
  } while (-1 < iVar4);
  *(undefined4 *)(param_1 + 0xaa8) = 1;
  *(undefined4 *)(param_1 + 0xabc) = 0;
  *(undefined4 *)(param_1 + 0xac0) = 0;
  if ((*(ushort *)(param_1 + 0xac4) & 0x400) != 0) {
    *(undefined4 *)(param_1 + 0xaf0) = 2;
    FUN_0034b760(param_1,0,param_1 + 0xab0);
    uVar6 = DAT_001ce4e0;
    goto LAB_001ce4d0;
  }
LAB_001ce37c:
  iVar5 = FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar10 * fVar2),1,DAT_001ce4e4,0);
  uVar6 = DAT_001ce4e8;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  if (*(int *)(param_1 + 0xac0) == 0) {
    if (iVar5 == 0) {
      *(undefined4 *)(param_1 + 0xac0) = 1;
LAB_001ce3cc:
      FUN_0036e168(*(undefined4 *)(param_1 + 0xaac),DAT_001ce4ec,fVar8,uVar6,param_1 + 0x6c);
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = uVar6;
    }
  }
  else if (*(int *)(param_1 + 0xac0) == 1) goto LAB_001ce3cc;
  FUN_00376864(param_1);
  uVar1 = *(ushort *)(param_1 + 0xac4);
  if ((uVar1 & 0x40) == 0) {
    if ((uVar1 & 0x80) == 0) {
      if ((*(ushort *)(param_1 + 0xac6) & 1) == 0) {
        if ((*(uint *)(param_2 + 0x5bf4) & 3) == 0) {
          FUN_00299ec0(param_2,param_1);
        }
      }
      else {
        FUN_00376340(uVar6,uVar6,uVar6,param_2,param_1,4);
        *(ushort *)(param_1 + 0xac6) = *(ushort *)(param_1 + 0xac6) & 0xfffe;
      }
    }
    else {
      *(ushort *)(param_1 + 0xac6) = *(ushort *)(param_1 + 0xac6) | 1;
      *(ushort *)(param_1 + 0xac4) = uVar1 & 0xff7f;
    }
  }
  else {
    FUN_00376340(uVar6,uVar6,uVar6,param_2,param_1,4);
  }
  FUN_00370734(param_1 + 0x1a4);
  FUN_0034b590(param_1,param_2);
  if (*(int *)(param_1 + 0xaa4) == 0) {
    return;
  }
  *(ushort *)(param_1 + 0xac4) = *(ushort *)(param_1 + 0xac4) | 0x200;
  FUN_0034b760(param_1,4,param_1 + 0xab0);
  uVar6 = DAT_001ce4f0;
LAB_001ce4d0:
  *(undefined4 *)(param_1 + 0xa48) = uVar6;
  return;
}
