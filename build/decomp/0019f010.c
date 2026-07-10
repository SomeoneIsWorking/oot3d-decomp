// OoT3D decomp @ 0019f010  name=FUN_0019f010  size=316

void FUN_0019f010(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  fVar3 = DAT_0019f15c;
  fVar6 = DAT_0019f158;
  fVar2 = DAT_0019f154;
  piVar1 = DAT_0019f14c;
  iVar5 = *DAT_0019f14c;
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x5e0) = (short)(int)(DAT_0019f150 / fVar7 + DAT_0019f154);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar6 / fVar7 + fVar2) == (int)*(short *)(param_1 + 0x5dc)) {
    *(undefined4 *)(param_1 + 0x5ec) = DAT_0019f160;
    uVar4 = DAT_0019f164;
    *(undefined4 *)(param_1 + 0x604) = DAT_0019f164;
    *(undefined4 *)(param_1 + 0x60c) = uVar4;
    *(undefined4 *)(param_1 + 0x5f0) = uVar4;
    *(undefined4 *)(param_1 + 0x5f4) = uVar4;
    uVar4 = DAT_0019f168;
    *(undefined4 *)(param_1 + 0x600) = DAT_0019f168;
    *(undefined4 *)(param_1 + 0x608) = uVar4;
    uVar4 = DAT_0019f16c;
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x5d4) = (short)(int)(fVar3 / fVar6 + fVar2);
    FUN_00375bcc(param_1,uVar4);
  }
  if (*(short *)(param_1 + 0x5dc) == 0) {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),(byte)(in_fpscr >> 0x15) & 3
                                      );
    *(short *)(param_1 + 0x5e6) = (short)(int)(fVar3 / fVar6 + fVar2);
    uVar4 = DAT_0019f170;
    *(undefined2 *)(param_1 + 0x664) = *(undefined2 *)(param_1 + 0x92);
    *(undefined4 *)(param_1 + 0x5d0) = uVar4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  FUN_003631d0(param_1,param_2,(int)*(short *)(param_1 + 0x620));
  return;
}

