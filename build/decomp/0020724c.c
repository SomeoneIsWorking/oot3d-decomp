// OoT3D decomp @ 0020724c  name=FUN_0020724c  size=44

void FUN_0020724c(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  short *psVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;

  uVar4 = *(undefined4 *)(DAT_002073ac + param_2);
  psVar3 = (short *)FUN_003373b8(*(undefined4 *)(param_1 + 0x1b0),0);
  fVar6 = (float)FUN_00357eac(uVar4,param_1);
  uVar4 = uRam002073b4;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c) >> 8,
                                     (byte)(in_fpscr >> 0x15) & 3);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar8 * fRam002073b0 <= fVar6) << 0x1d;
  bVar1 = !SUB41(uVar5 >> 0x1d,0);
  if (*(uint *)(param_1 + 0x1ac) == (uint)*(byte *)(param_2 + 0x7fa4)) {
    if (bVar1 || *(char *)(param_2 + 0x7fa5) != '\0') {
      FUN_00375a18(param_2 + 0x320e,(int)-*psVar3,1,(int)psVar3[1],(int)psVar3[2]);
      uVar10 = VectorSignedToFloat((int)psVar3[5],(byte)(uVar5 >> 0x15) & 3);
      uVar9 = VectorSignedToFloat((int)psVar3[4],(byte)(uVar5 >> 0x15) & 3);
      uVar7 = VectorSignedToFloat(-(int)psVar3[3],(byte)(uVar5 >> 0x15) & 3);
      FUN_0036e168(uVar7,uVar4,uVar9,uVar10,param_2 + 0x3214);
    }
    else {
      FUN_00375a18(param_2 + 0x320e,0,1,(int)psVar3[1] / 2,(int)psVar3[2]);
      uVar7 = VectorSignedToFloat((int)psVar3[5],(byte)(uVar5 >> 0x15) & 3);
      fVar6 = (float)VectorSignedToFloat((int)psVar3[4],(byte)(uVar5 >> 0x15) & 3);
      FUN_0036e168(uRam002073bc,uVar4,fVar6 * fRam002073b8,uVar7,param_2 + 0x3214);
    }
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(param_2 + 0x7fa5) + bVar1;
  }
  *(char *)(param_2 + 0x7fa5) = cVar2;
  return;
}
