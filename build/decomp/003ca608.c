// OoT3D decomp @ 003ca608  name=FUN_003ca608  size=380

void FUN_003ca608(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  iVar2 = *(int *)(DAT_003ca784 + param_2);
  sVar1 = *(short *)(param_1 + 0x8c2);
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00373500(DAT_003ca790,DAT_003ca78c,DAT_003ca788,param_1 + 0x6c);
  fVar7 = *(float *)(*(int *)(param_1 + 0x8d0) + 0x28) - *(float *)(param_1 + 0x28);
  fVar6 = *(float *)(*(int *)(param_1 + 0x8d0) + 0x30) - *(float *)(param_1 + 0x30);
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  iVar4 = DAT_003ca794;
  if (iVar3 != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x8d0) + 0x668) = 0;
  }
  fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
  if ((int)fVar5 < iVar4) {
    *(short *)(*(int *)(param_1 + 0x8d0) + 0x668) = *(short *)(param_1 + 0x8c2) + 1;
    *(ushort *)(*(int *)(param_1 + 0x8d0) + 0x66c) = (ushort)*(byte *)(iVar2 + sVar1 * 8);
  }
  else if (DAT_003ca798 < (int)fVar5) {
    *(undefined2 *)(*(int *)(param_1 + 0x8d0) + 0x668) = 0;
  }
  fVar6 = (float)FUN_003696ec(fVar7,fVar6);
  FUN_00375a18(param_1 + 0xbe,(int)(short)(int)(fVar6 * DAT_003ca79c),3,
               (int)(short)(int)*(float *)(param_1 + 0x8c8),0);
  FUN_00373500(DAT_003ca7a8,DAT_003ca7a4,DAT_003ca7a0,param_1 + 0x8c8);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  if ((*(short *)(param_1 + 0x8b8) == 0) || (iVar4 = FUN_0036ef98(param_2), iVar4 != 0)) {
    *(undefined2 *)(param_1 + 0x8b8) = 0x3c;
    *(undefined4 *)(param_1 + 0x8a8) = DAT_003ca7ac;
  }
  return;
}
