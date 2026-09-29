// OoT3D decomp @ 003d85cc  name=FUN_003d85cc  size=180

void FUN_003d85cc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_2c;
  float fStack_28;
  float fStack_24;

  fVar7 = fRam003d8684;
  fVar6 = fRam003d8680;
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x2000;
  fVar6 = *(float *)(param_1 + 0x2c) - fVar6;
  *(float *)(param_1 + 0x2c) = fVar6;
  if (fVar6 < *(float *)(param_1 + 0xc) + fVar7) {
    sVar3 = FUN_00367358(*(undefined4 *)(iRam003d8688 + param_2),param_1 + 8);
    sVar3 = sVar3 + (ushort)*(byte *)(param_1 + 0xa4c) * 0x4000;
    *(short *)(param_1 + 0xbe) = sVar3;
    *(ushort *)(param_1 + 0x36) = sVar3 + (ushort)*(byte *)(param_1 + 0xa4c) * -0x4000;
    fVar7 = (float)FUN_002cfca0();
    fVar6 = fRam003d868c;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar7 * fRam003d868c;
    fVar7 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    uVar2 = uRam003d8690;
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar7 * fVar6;
    *(undefined4 *)(param_1 + 0xa48) = uVar2;
  }
  if ((*(uint *)(param_2 + 0x5bf4) & 1) == 0) {
    sVar3 = FUN_00368b68(0x1200,0xc00);
    sVar3 = (*(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0xa4c) * -0xa00) - sVar3;
  }
  else {
    sVar3 = FUN_00368b68(0x1200,0xc00);
    sVar3 = sVar3 + (ushort)*(byte *)(param_1 + 0xa4c) * -0xa00 + *(short *)(param_1 + 0xbe);
  }
  fVar6 = DAT_0036297c;
  iVar1 = DAT_00362978;
  iVar4 = (int)sVar3;
  if (*(int *)(param_1 + 0xa48) == DAT_00362978) {
    fVar5 = (float)FUN_002cfca0(iVar4);
    fVar7 = DAT_00362990;
    fStack_2c = *(float *)(param_1 + 0x28) - fVar5 * DAT_00362990;
    fVar5 = (float)FUN_00338f60(iVar4);
    fStack_24 = *(float *)(param_1 + 0x30) - fVar5 * fVar7;
    fStack_28 = *(float *)(param_1 + 0xc) + fVar6;
    FUN_00362068(param_2,&fStack_2c,100,500,0);
  }
  else if ((*(int *)(param_1 + 0xa48) == DAT_00362980) || ((*(uint *)(param_2 + 0x5bf4) & 2) != 0))
  {
    fVar5 = (float)FUN_002cfca0(iVar4);
    fVar7 = DAT_00362984;
    fStack_2c = *(float *)(param_1 + 0x28) - fVar5 * DAT_00362984;
    fVar5 = (float)FUN_00338f60(iVar4);
    fStack_24 = *(float *)(param_1 + 0x30) - fVar5 * fVar7;
    fStack_28 = *(float *)(param_1 + 0xc) + fVar6;
    FUN_00362068(param_2,&fStack_2c,100,500,0);
  }
  else {
    fVar7 = (float)FUN_002cfca0(iVar4);
    fVar6 = DAT_00362988;
    fStack_2c = *(float *)(param_1 + 0x28) - fVar7 * DAT_00362988;
    fVar7 = (float)FUN_00338f60(iVar4);
    fStack_24 = *(float *)(param_1 + 0x30) - fVar7 * fVar6;
    fStack_28 = *(float *)(param_1 + 0xc) + DAT_0036298c;
  }
  FUN_0036e670(param_2,&fStack_2c,0,0,1,800);
  if (*(int *)(param_1 + 0xa48) != iVar1) {
    FUN_00373264(param_1,DAT_00362994);
  }
  return;
}
