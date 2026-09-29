// OoT3D decomp @ 0036270c  name=FUN_0036270c  size=144

void FUN_0036270c(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fStack_2c;
  float fStack_28;
  float fStack_24;

  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0xa4e) != 0) {
    sVar4 = *(short *)(param_1 + 0xa4e) + -1;
    *(short *)(param_1 + 0xa4e) = sVar4;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x1555;
    if (sVar4 != 0) goto LAB_0036278c;
  }
  if ((short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0x36)) < 1) {
    uVar3 = 0xff;
  }
  else {
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0xa4c) = uVar3;
  FUN_00362998(param_1);
  if (*(char *)(param_1 + 0xa4d) == '\0') {
    *(undefined2 *)(param_1 + 0xa4e) = 0xffc4;
  }
LAB_0036278c:
  if ((*(uint *)(param_2 + 0x5bf4) & 1) == 0) {
    sVar4 = FUN_00368b68(0x1200,0xc00);
    sVar4 = (*(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0xa4c) * -0xa00) - sVar4;
  }
  else {
    sVar4 = FUN_00368b68(0x1200,0xc00);
    sVar4 = sVar4 + (ushort)*(byte *)(param_1 + 0xa4c) * -0xa00 + *(short *)(param_1 + 0xbe);
  }
  fVar2 = DAT_0036297c;
  iVar1 = DAT_00362978;
  iVar5 = (int)sVar4;
  if (*(int *)(param_1 + 0xa48) == DAT_00362978) {
    fVar6 = (float)FUN_002cfca0(iVar5);
    fVar7 = DAT_00362990;
    fStack_2c = *(float *)(param_1 + 0x28) - fVar6 * DAT_00362990;
    fVar6 = (float)FUN_00338f60(iVar5);
    fStack_24 = *(float *)(param_1 + 0x30) - fVar6 * fVar7;
    fStack_28 = *(float *)(param_1 + 0xc) + fVar2;
    FUN_00362068(param_2,&fStack_2c,100,500,0);
  }
  else if ((*(int *)(param_1 + 0xa48) == DAT_00362980) || ((*(uint *)(param_2 + 0x5bf4) & 2) != 0))
  {
    fVar6 = (float)FUN_002cfca0(iVar5);
    fVar7 = DAT_00362984;
    fStack_2c = *(float *)(param_1 + 0x28) - fVar6 * DAT_00362984;
    fVar6 = (float)FUN_00338f60(iVar5);
    fStack_24 = *(float *)(param_1 + 0x30) - fVar6 * fVar7;
    fStack_28 = *(float *)(param_1 + 0xc) + fVar2;
    FUN_00362068(param_2,&fStack_2c,100,500,0);
  }
  else {
    fVar7 = (float)FUN_002cfca0(iVar5);
    fVar2 = DAT_00362988;
    fStack_2c = *(float *)(param_1 + 0x28) - fVar7 * DAT_00362988;
    fVar7 = (float)FUN_00338f60(iVar5);
    fStack_24 = *(float *)(param_1 + 0x30) - fVar7 * fVar2;
    fStack_28 = *(float *)(param_1 + 0xc) + DAT_0036298c;
  }
  FUN_0036e670(param_2,&fStack_2c,0,0,1,800);
  if (*(int *)(param_1 + 0xa48) != iVar1) {
    FUN_00373264(param_1,DAT_00362994);
  }
  return;
}
