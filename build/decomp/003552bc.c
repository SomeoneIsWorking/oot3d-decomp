// OoT3D decomp @ 003552bc  name=FUN_003552bc  size=296

float FUN_003552bc(int param_1,float *param_2,int param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_34;

  fVar2 = DAT_003553ec;
  fVar1 = DAT_003553e8;
  fVar9 = DAT_003553e4;
  iVar5 = 3;
  iVar6 = *(int *)(param_1 + 0xd4) + 0xa98;
  while ((fVar7 = (float)FUN_00372300(iVar6,&local_34,param_4,param_3), fVar3 = DAT_003553f8,
         fVar10 = DAT_003553f4, fVar7 != fVar9 &&
         ((in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar7 <= *(float *)(param_1 + 0x14c)) << 0x1d,
          SUB41(in_fpscr >> 0x1d,0) ||
          (fVar8 = (float)VectorSignedToFloat((int)*(short *)(local_34 + 0xc),
                                              (byte)(in_fpscr >> 0x15) & 3),
          0x3f000000 < (int)(fVar8 * fVar1)))))) {
    iVar4 = FUN_0035ea34(iVar6,local_34,*param_4);
    if (iVar4 != 1) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(local_34 + 10),(byte)(in_fpscr >> 0x15) & 3
                                        );
      *param_2 = fVar9 * fVar1;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(local_34 + 0xc),
                                         (byte)(in_fpscr >> 0x15) & 3);
      param_2[1] = fVar9 * fVar1;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(local_34 + 0xe),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * fVar1;
      goto LAB_003553d0;
    }
    iVar5 = iVar5 + -1;
    *(float *)(param_3 + 4) = fVar7 - fVar2;
    if (iVar5 == 0) {
      return fVar7;
    }
  }
  *param_2 = DAT_003553f4;
  fVar7 = DAT_003553f0;
  param_2[1] = fVar3;
LAB_003553d0:
  param_2[2] = fVar10;
  return fVar7;
}
