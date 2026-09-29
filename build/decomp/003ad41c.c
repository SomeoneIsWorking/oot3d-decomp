// OoT3D decomp @ 003ad41c  name=FUN_003ad41c  size=272

void FUN_003ad41c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  uVar4 = uRam003ad768;
  uVar3 = uRam003ad750;
  uStack_30 = uRam003ad73c;
  uStack_2c = uRam003ad740;
  uStack_28 = uRam003ad744;
  uStack_3c = uRam003ad748;
  uStack_38 = uRam003ad740;
  uStack_34 = uRam003ad74c;
  uStack_48 = uRam003ad754;
  uStack_44 = uRam003ad758;
  uStack_40 = uRam003ad75c;
  uStack_4c = uRam003ad760;
  iVar5 = *(int *)(iRam003ad764 + param_2);
  iVar2 = param_2 + 0x28a0;
  switch(*(undefined2 *)(param_1 + 0x452)) {
  case 0:
    sVar1 = (short)(int)*(float *)(param_1 + 0x1e0);
    if (sVar1 == 0xe) {
      *(undefined2 *)(param_1 + 0x454) = 0;
      goto LAB_003ad968;
    }
    if (sVar1 == 0xf) {
      if ((*(short *)(param_1 + 0x454) != 0) &&
         (sVar1 = *(short *)(param_1 + 0x454) + -1, *(short *)(param_1 + 0x454) = sVar1, sVar1 != 0)
         ) {
        *(undefined4 *)(param_1 + 0x1e0) = uRam003ad76c;
      }
      goto LAB_003ad968;
    }
    if (sVar1 != 0x40) goto LAB_003ad968;
    uVar3 = 2;
    iVar2 = 1;
    *(short *)(param_1 + 0x116) = (short)uRam003ad768;
    FUN_00367c7c(param_2,uVar4,0);
    sVar1 = *(short *)(param_1 + 0x452) + 1;
    break;
  case 1:
    iVar2 = FUN_003769d8(iVar2);
    if ((iVar2 != 5) || (iVar2 = FUN_00346964(param_2), iVar2 == 0)) goto LAB_003ad968;
    *(undefined1 *)(iRam003ad770 + param_2) = 0;
    FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x458),&uStack_30,&uStack_3c);
    FUN_00354220(uVar3,param_2,(int)*(short *)(param_1 + 0x458));
    uVar3 = uRam003ad774;
    *(undefined4 *)(iVar5 + 0x28) = uStack_48;
    *(undefined4 *)(iVar5 + 0x2c) = uStack_44;
    *(undefined4 *)(iVar5 + 0x30) = uStack_40;
    *(short *)(iRam003ad778 + param_1) = (short)uVar3;
    FUN_0036be34(param_2);
    sVar1 = *(short *)(param_1 + 0x452) + 1;
    goto code_r0x003ad890;
  case 2:
    iVar2 = FUN_003769d8(iVar2);
    if ((iVar2 != 4) || (iVar2 = FUN_00346964(param_2), iVar2 == 0)) goto LAB_003ad968;
    iVar2 = FUN_00369f3c(param_2);
    if (iVar2 == 0) {
      uVar3 = 10;
      iVar2 = 2;
      sVar1 = *(short *)(param_1 + 0x452) + 1;
    }
    else {
      uVar3 = 3;
      iVar2 = 2;
      sVar1 = 6;
    }
    break;
  case 3:
    uVar3 = FUN_0036ae18(param_1 + 0x1a4,10);
    fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) == fVar6) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_003ad968;
    uVar3 = 0xb;
    iVar2 = 1;
    *(short *)(iRam003ad778 + param_1) = (short)uRam003ad77c;
    FUN_0036be34(param_2);
    sVar1 = *(short *)(param_1 + 0x452) + 1;
    break;
  case 4:
    iVar2 = FUN_003769d8(iVar2);
    if ((iVar2 != 4) || (iVar2 = FUN_00346964(param_2), iVar2 == 0)) goto LAB_003ad968;
    iVar2 = FUN_00369f3c(param_2);
    if (iVar2 != 0) {
      *(short *)(iRam003ad778 + param_1) = (short)uRam003ad780;
      FUN_0036be34(param_2);
      sVar1 = *(short *)(param_1 + 0x452) + 1;
      goto code_r0x003ad890;
    }
    uVar3 = 8;
    iVar2 = 2;
    sVar1 = 9;
    break;
  case 5:
    iVar2 = FUN_003769d8(iVar2);
    if ((iVar2 != 5) || (iVar2 = FUN_00346964(param_2), iVar2 == 0)) goto LAB_003ad968;
    *(short *)(iRam003ad778 + param_1) = (short)uRam003ad784;
    FUN_0036be34(param_2);
    sVar1 = *(short *)(param_1 + 0x452) + -1;
code_r0x003ad890:
    *(short *)(param_1 + 0x452) = sVar1;
    goto LAB_003ad968;
  case 6:
    uVar3 = FUN_0036ae18(param_1 + 0x1a4,3);
    fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) == fVar6) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_003ad968;
    uVar3 = 4;
    iVar2 = 1;
    *(short *)(iRam003ad778 + param_1) = (short)uRam003ad9a4;
    FUN_0036be34(param_2);
    *(short *)(param_1 + 0x452) = *(short *)(param_1 + 0x452) + 1;
    goto code_r0x003ad934;
  case 7:
    iVar2 = FUN_003769d8(iVar2);
    if ((iVar2 == 5) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
      *(short *)(iRam003ad778 + param_1) = (short)uRam003ad9a8;
      FUN_0036be34(param_2);
      *(short *)(param_1 + 0x452) = *(short *)(param_1 + 0x452) + 1;
    }
    goto LAB_003ad968;
  case 8:
    iVar2 = FUN_003769d8(iVar2);
    if ((iVar2 != 4) || (iVar2 = FUN_00346964(param_2), iVar2 == 0)) goto LAB_003ad968;
    iVar2 = FUN_00369f3c(param_2);
    if (iVar2 != 0) {
      *(short *)(iRam003ad778 + param_1) = (short)uRam003ad9a4;
      FUN_0036be34(param_2);
      sVar1 = *(short *)(param_1 + 0x452) + -1;
      goto code_r0x003ad890;
    }
    uVar3 = 9;
    iVar2 = 2;
    sVar1 = 3;
    break;
  case 9:
    uVar3 = FUN_0036ae18(param_1 + 0x1a4,8);
    fVar6 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x1e0) == fVar6) << 0x1e;
    if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_003ad968;
    uVar3 = 0;
    iVar2 = 1;
    if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
       (iVar5 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
       *(int *)(iRam003ad9ac + iVar5) != 0)) {
      iVar5 = iVar5 + 0x3a5c;
    }
    else {
      iVar5 = 0;
    }
    uVar4 = FUN_00375750(iVar5 + 0x10,0);
    FUN_0037573c(param_2,uVar4);
    *(undefined1 *)(iRam003ad9b0 + 0x5a2) = 1;
    *(undefined4 *)(param_1 + 0x3f4) = uRam003ad9b4;
    *(short *)(param_1 + 0x452) = *(short *)(param_1 + 0x452) + 1;
    goto code_r0x003ad934;
  default:
    goto LAB_003ad968;
  }
  *(short *)(param_1 + 0x452) = sVar1;
code_r0x003ad934:
  uVar4 = FUN_0036ae18(param_1 + 0x1a4,uVar3);
  uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(uRam003ad9bc,uRam003ad75c,uVar4,uRam003ad9b8,param_1 + 0x1a4,uVar3,
               *(undefined1 *)((int)&uStack_4c + iVar2));
LAB_003ad968:
  FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x466,param_1 + 0x46c,
               0x4300);
  return;
}
