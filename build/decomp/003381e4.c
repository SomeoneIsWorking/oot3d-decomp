// OoT3D decomp @ 003381e4  name=FUN_003381e4  size=432

undefined4 FUN_003381e4(float param_1,int param_2,int param_3,float *param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  
  fStack_34 = (float)func_0x00367ef0(*(undefined4 *)(param_2 + 0xd8));
  piVar3 = piRam00338398;
  fStack_34 = fStack_34 + param_1;
  uStack_38 = uRam00338394;
  uStack_30 = uRam00338394;
  if (param_5 != 0) {
    uVar6 = VectorSignedToFloat((int)*(short *)(*piRam00338398 + 0x1a6),(byte)(in_fpscr >> 0x15) & 3
                               );
    fVar7 = (float)func_0x00367e88(uVar6,param_2 + 0x150,(int)*(short *)(param_2 + 0xea),
                                   (int)*(short *)(param_3 + 6));
    fStack_34 = fStack_34 - fVar7;
  }
  fVar10 = *(float *)(param_2 + 0xe0) - *param_4;
  uVar6 = func_0x00367e60(param_2 + 0x80,param_2 + 0x8c);
  fVar8 = (float)func_0x003696ec(fVar10,uVar6);
  fVar7 = fRam003383a0;
  iVar4 = *piVar3;
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1d4),(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = in_fpscr & 0xfffffff | (uint)(fVar8 <= fVar9 * fRam0033839c) << 0x1d;
  if (SUB41(uVar5 >> 0x1d,0)) {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1d6),(byte)(uVar5 >> 0x15) & 3);
    fVar9 = fVar9 * fRam0033839c;
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar8) << 0x1f | (uint)(fVar9 == fVar8) << 0x1e;
    uVar5 = uVar1 | (uint)(NAN(fVar9) || NAN(fVar8)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar5 >> 0x1c) & 1)) {
      fVar8 = (float)func_0x003727f0(fVar9 - fVar8);
      fVar7 = fVar7 - fVar8;
    }
  }
  else {
    fVar8 = (float)func_0x003727f0(fVar8 - fVar9 * fRam0033839c);
    fVar7 = fVar7 - fVar8;
  }
  fStack_34 = fStack_34 - fVar10 * fVar7;
  iVar4 = *piVar3;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1d0),(byte)(uVar5 >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1ce),(byte)(uVar5 >> 0x15) & 3);
  func_0x00367df4(fVar8 * fRam003383a4,fVar7 * fRam003383a4,uRam003383a8,&uStack_38,param_2 + 300);
  fStack_44 = *(float *)(param_2 + 0xdc) + *(float *)(param_2 + 300);
  fStack_40 = *(float *)(param_2 + 0xe0) + *(float *)(param_2 + 0x130);
  fStack_3c = *(float *)(param_2 + 0xe4) + *(float *)(param_2 + 0x134);
  func_0x00367df4(*(undefined4 *)(param_2 + 0x148),*(undefined4 *)(param_2 + 0x148),uRam003383ac,
                  &fStack_44,param_2 + 0x80);
  return 1;
}

