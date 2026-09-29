// OoT3D decomp @ 003f61dc  name=FUN_003f61dc  size=316

void FUN_003f61dc(int param_1,int param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;

  iVar6 = *(int *)(DAT_003f6318 + param_2);
  FUN_003705a0(DAT_003f6320,DAT_003f631c,param_1 + 0x1c8);
  iVar3 = FUN_003705a0(*(float *)(param_1 + 0x1c4) * DAT_003f6324,*(undefined4 *)(param_1 + 0x1c8),
                       param_1 + 0x1cc);
  uVar5 = DAT_003f6330;
  uVar7 = DAT_003f632c;
  fVar1 = DAT_003f6328;
  if (iVar3 == 0) {
    sVar2 = (short)(int)(*(float *)(param_1 + 0x1cc) * DAT_003f633c) + *(short *)(param_1 + 0x16);
    *(short *)(param_1 + 0xbe) = sVar2;
    *(short *)(param_1 + 0x36) = sVar2;
    uVar4 = DAT_003f6340;
  }
  else {
    FUN_0010feb0();
    FUN_0036e980(param_2,param_1,7);
    uVar5 = DAT_003f6330;
    uVar7 = DAT_003f632c;
    if (*(float *)(param_1 + 0x1c4) <= fVar1) {
      sVar2 = *(short *)(param_1 + 0x16) + -0x2000;
    }
    else {
      sVar2 = *(short *)(param_1 + 0x16) + 0x2000;
    }
    *(short *)(param_1 + 0x16) = sVar2;
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x16);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x16);
    uVar4 = DAT_003f6334;
  }
  FUN_0037547c(uVar4,0,4,uVar5,uVar5,uVar7);
  if (DAT_003f6338 < (int)ABS(*(float *)(param_1 + 0x1a8))) {
    *(float *)(param_1 + 0x1a8) = fVar1;
    *(uint *)(iVar6 + 0x1714) = *(uint *)(iVar6 + 0x1714) & 0xffffffef;
  }
  FUN_0036df4c(iVar6 + 0x28,param_1 + 0x1d0);
  return;
}
