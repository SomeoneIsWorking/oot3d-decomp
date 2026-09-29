// OoT3D decomp @ 0039d320  name=FUN_0039d320  size=208

void FUN_0039d320(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;

  *(undefined4 *)(param_1 + 0xbbc) = 0x11;
  *(undefined4 *)(param_1 + 0xbc0) = 1;
  sVar1 = *(short *)(param_1 + 0x92);
  iVar4 = (int)sVar1;
  *(short *)(param_1 + 0x36) = sVar1;
  *(short *)(param_1 + 0xbe) = sVar1;
  fVar5 = (float)FUN_002cfca0(iVar4);
  fVar3 = DAT_0039d3f4;
  piVar2 = DAT_0039d3f0;
  fVar9 = *(float *)(param_1 + 0x28);
  uVar10 = *(undefined4 *)(param_1 + 0x2c);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0039d3f0 + 0x1456),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar7 + DAT_0039d3f4;
  fVar6 = (float)FUN_00338f60(iVar4);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1456),(byte)(in_fpscr >> 0x15) & 3)
  ;
  uVar10 = FUN_0036aa20(fVar9 + fVar7 * fVar5,uVar10,
                        *(float *)(param_1 + 0x30) + (fVar8 + fVar3) * fVar6,param_2 + 0x208c,
                        param_1,param_2,0x5d,0,iVar4,0,5);
  *(undefined4 *)(param_1 + 0xbd0) = uVar10;
  return;
}
