// OoT3D decomp @ 00347dd4  name=FUN_00347dd4  size=244

void FUN_00347dd4(float param_1,float param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  pfVar3 = (float *)(param_3 + 0x9c4);
  iVar4 = 6;
  pfVar2 = (float *)(param_3 + 0x9bc);
  uVar5 = VectorSignedToFloat((int)(short)(int)(*(float *)(*(int *)(param_3 + 0xba8) + 0x34) *
                                               param_1),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(*(int *)(param_3 + 0xba8) + 0x34) = uVar5;
  pfVar1 = (float *)(param_3 + 0x9c0);
  do {
    fVar6 = *pfVar2;
    fVar8 = *pfVar1;
    iVar4 = iVar4 + -1;
    fVar7 = (float)VectorSignedToFloat((int)(short)(int)(*pfVar3 * param_1),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *pfVar3 = fVar7;
    pfVar3 = pfVar3 + 0x16;
    fVar6 = (float)VectorSignedToFloat((int)(short)(int)(fVar6 * param_1 * param_2),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *pfVar2 = fVar6;
    pfVar2 = pfVar2 + 0x16;
    fVar6 = (float)VectorSignedToFloat((int)(short)(int)fVar8,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar1 = fVar6;
    pfVar1 = pfVar1 + 0x16;
  } while (iVar4 != 0);
  FUN_0037572c(param_1 * DAT_00347ec8,param_3);
  *(float *)(param_3 + 0xc18) = param_1 * DAT_00347ecc;
  *(float *)(param_3 + 0xc14) = param_1 * DAT_00347ed0;
  return;
}
