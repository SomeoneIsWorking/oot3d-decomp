// OoT3D decomp @ 0019f4d4  name=FUN_0019f4d4  size=304

void FUN_0019f4d4(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 == 5) && (iVar3 = FUN_00346964(param_2), iVar3 != 0)) {
    FUN_0036e980(param_2,0,7);
    FUN_003725e0(param_2);
    fVar1 = DAT_0019f604;
    fVar4 = (float)FUN_003738a8(DAT_0019f604);
    fVar8 = *(float *)(param_1 + 0x8c0);
    fVar5 = (float)FUN_003738a8(fVar1);
    fVar9 = *(float *)(param_1 + 0x8c4) - DAT_0019f608;
    fVar6 = (float)FUN_003738a8(fVar1);
    fVar10 = *(float *)(param_1 + 0x8c8);
    fVar7 = (float)FUN_003738a8(DAT_0019f60c);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x92),(byte)(in_fpscr >> 0x15) & 3
                                       );
    iVar3 = z_actor_003738d0(fVar4 + fVar8,fVar5 + fVar9,fVar6 + (fVar10 - fVar1),param_2 + 0x208c,
                             param_2,0x10,0,(int)(short)(int)(fVar7 + fVar11),0,0,1);
    uVar2 = DAT_0019f610;
    if (iVar3 != 0) {
      fVar4 = (float)FUN_003738a8(DAT_0019f610);
      fVar1 = DAT_0019f614;
      *(float *)(iVar3 + 0x6c) = fVar4 + DAT_0019f614;
      fVar4 = (float)FUN_003738a8(uVar2);
      *(float *)(iVar3 + 100) = fVar4 + fVar1;
    }
    *(undefined4 *)(param_1 + 0x8a8) = DAT_0019f618;
  }
  return;
}
